
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ (* identify ) (struct ixgbe_hw*) ;int * reset; int * write_reg; int * read_reg; int * setup_link; int handle_lasi; int enter_lplu; int setup_internal_link; } ;
struct ixgbe_phy_info {scalar_t__ sfp_type; int type; int nw_mng_if_sel; TYPE_3__ ops; int phy_semaphore_mask; } ;
struct TYPE_4__ {scalar_t__ (* get_media_type ) (struct ixgbe_hw*) ;int (* set_lan_id ) (struct ixgbe_hw*) ;} ;
struct TYPE_5__ {int type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; struct ixgbe_phy_info phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;







 int FUNC_3 (struct ixgbe_hw*) ;
 void* VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int FUNC_4 (struct ixgbe_hw*) ;
 scalar_t__ VAR_15 ;
 void* VAR_16 ;
 int FUNC_5 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*) ;

__attribute__((used)) static s32 FUNC_8(struct ixgbe_hw *VAR_17)
{
 struct ixgbe_phy_info *VAR_18 = &VAR_17->phy;
 s32 VAR_19;

 VAR_17->mac.ops.set_lan_id(VAR_17);

 FUNC_3(VAR_17);

 if (VAR_17->mac.ops.get_media_type(VAR_17) == VAR_8) {
  VAR_18->phy_semaphore_mask = VAR_3;
  FUNC_4(VAR_17);
 }


 VAR_19 = VAR_18->ops.identify(VAR_17);
 if (VAR_19 == VAR_1 ||
     VAR_19 == VAR_0)
  return VAR_19;


 FUNC_2(VAR_17);
 if (VAR_18->sfp_type != VAR_15)
  VAR_18->ops.reset = ((void*)0);


 switch (VAR_17->phy.type) {
 case 129:
  VAR_18->ops.setup_link = ((void*)0);
  VAR_18->ops.read_reg = VAR_9;
  VAR_18->ops.write_reg = VAR_16;
  break;
 case 130:
  VAR_18->ops.setup_link = VAR_14;
  VAR_18->ops.read_reg = VAR_9;
  VAR_18->ops.write_reg = VAR_16;
  break;
 case 128:

  VAR_18->ops.setup_link = ((void*)0);
  VAR_18->ops.read_reg = VAR_9;
  VAR_18->ops.write_reg = VAR_16;
  break;
 case 131:



  VAR_18->nw_mng_if_sel = FUNC_1(VAR_17, VAR_4);




  VAR_18->ops.setup_internal_link =
           VAR_13;


  if (VAR_17->mac.type == VAR_7 &&
      !(FUNC_1(VAR_17, FUNC_0(0)) &
        VAR_2))
   VAR_18->ops.enter_lplu = VAR_5;

  VAR_18->ops.handle_lasi = VAR_6;
  VAR_18->ops.reset = VAR_11;
  break;
 case 132:
  VAR_18->ops.setup_link = ((void*)0);
  break;
 case 133:
  VAR_18->ops.setup_link = VAR_12;
  VAR_18->ops.reset = VAR_10;
  break;
 case 134:
  VAR_18->ops.setup_link = ((void*)0);
  VAR_18->ops.read_reg = ((void*)0);
  VAR_18->ops.write_reg = ((void*)0);
  VAR_18->ops.reset = ((void*)0);
  break;
 default:
  break;
 }

 return VAR_19;
}
