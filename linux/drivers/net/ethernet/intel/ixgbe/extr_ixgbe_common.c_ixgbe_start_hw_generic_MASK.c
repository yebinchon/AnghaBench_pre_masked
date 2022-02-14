
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {int (* get_device_caps ) (struct ixgbe_hw*,int*) ;scalar_t__ (* setup_fc ) (struct ixgbe_hw*) ;int (* clear_hw_cntrs ) (struct ixgbe_hw*) ;int (* clear_vfta ) (struct ixgbe_hw*) ;int (* get_media_type ) (struct ixgbe_hw*) ;} ;
struct TYPE_8__ {int type; TYPE_3__ ops; } ;
struct TYPE_5__ {int (* identify ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {TYPE_1__ ops; int media_type; } ;
struct ixgbe_hw {int need_crosstalk_fix; int adapter_stopped; TYPE_4__ mac; TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;



 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*) ;
 int FUNC_8 (struct ixgbe_hw*,int*) ;

s32 FUNC_9(struct ixgbe_hw *VAR_3)
{
 s32 VAR_4;
 u32 VAR_5;
 u16 VAR_6;


 VAR_3->phy.media_type = VAR_3->mac.ops.get_media_type(VAR_3);


 VAR_3->phy.ops.identify(VAR_3);


 VAR_3->mac.ops.clear_vfta(VAR_3);


 VAR_3->mac.ops.clear_hw_cntrs(VAR_3);


 VAR_5 = FUNC_0(VAR_3, VAR_0);
 VAR_5 |= VAR_1;
 FUNC_2(VAR_3, VAR_0, VAR_5);
 FUNC_1(VAR_3);


 if (VAR_3->mac.ops.setup_fc) {
  VAR_4 = VAR_3->mac.ops.setup_fc(VAR_3);
  if (VAR_4)
   return VAR_4;
 }


 switch (VAR_3->mac.type) {
 case 130:
 case 129:
 case 128:
  VAR_3->mac.ops.get_device_caps(VAR_3, &VAR_6);
  if (VAR_6 & VAR_2)
   VAR_3->need_crosstalk_fix = 0;
  else
   VAR_3->need_crosstalk_fix = 1;
  break;
 default:
  VAR_3->need_crosstalk_fix = 0;
  break;
 }


 VAR_3->adapter_stopped = 0;

 return 0;
}
