
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int (* identify_sfp ) (struct ixgbe_hw*) ;int * reset; int * check_link; int * setup_link; int (* identify ) (struct ixgbe_hw*) ;} ;
struct ixgbe_phy_info {int type; int sfp_type; TYPE_2__ ops; } ;
struct TYPE_3__ {scalar_t__ (* get_media_type ) (struct ixgbe_hw*) ;int * get_link_capabilities; int * setup_link; } ;
struct ixgbe_mac_info {TYPE_1__ ops; } ;
struct ixgbe_hw {struct ixgbe_phy_info phy; struct ixgbe_mac_info mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int *,int *) ;
 scalar_t__ VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*) ;

__attribute__((used)) static s32 FUNC_4(struct ixgbe_hw *VAR_8)
{
 struct ixgbe_mac_info *VAR_9 = &VAR_8->mac;
 struct ixgbe_phy_info *VAR_10 = &VAR_8->phy;
 s32 VAR_11;
 u16 VAR_12, VAR_13;


 VAR_10->ops.identify(VAR_8);


 if (VAR_9->ops.get_media_type(VAR_8) == VAR_3) {
  VAR_9->ops.setup_link = &VAR_5;
  VAR_9->ops.get_link_capabilities =
   &VAR_2;
 }

 switch (VAR_8->phy.type) {
 case 128:
  VAR_10->ops.setup_link = &VAR_6;
  VAR_10->ops.check_link = &VAR_1;
  break;
 case 129:
  VAR_10->ops.reset = &VAR_4;


  VAR_11 = VAR_10->ops.identify_sfp(VAR_8);
  if (VAR_11)
   return VAR_11;
  if (VAR_8->phy.sfp_type == VAR_7)
   return VAR_0;


  VAR_11 = FUNC_0(VAR_8,
           &VAR_12,
           &VAR_13);
  if (VAR_11)
   return VAR_0;
  break;
 default:
  break;
 }

 return 0;
}
