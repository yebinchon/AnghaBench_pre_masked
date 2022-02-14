
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int (* u16 ) (int,int ) ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int (* fc_enable ) (struct ixgbe_hw*) ;} ;
struct TYPE_7__ {TYPE_2__ ops; } ;
struct ixgbe_hw {TYPE_3__ mac; } ;
struct ixgbe_dcb_config {scalar_t__ pfc_mode_enable; } ;
struct TYPE_8__ {scalar_t__ up; } ;
struct ixgbe_adapter {int dcbx_cap; int dcb_set_bitmap; TYPE_4__ fcoe; TYPE_1__* netdev; struct ixgbe_hw hw; struct ixgbe_dcb_config dcb_cfg; } ;
struct dcb_app {int protocol; int selector; } ;
struct TYPE_5__ {int mtu; int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct net_device*,struct dcb_app*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ixgbe_adapter*,int) ;
 int FUNC_3 (struct ixgbe_hw*,struct ixgbe_dcb_config*,int,int ) ;
 int FUNC_4 (struct ixgbe_hw*,int (*) (int,int ),int (*) (int,int ),int*,int*,int*) ;
 int FUNC_5 (struct ixgbe_hw*,int,int*) ;
 int FUNC_6 (struct ixgbe_dcb_config*,int ,int*) ;
 int FUNC_7 (struct ixgbe_dcb_config*,int ,int*) ;
 int FUNC_8 (struct ixgbe_dcb_config*,int (*) (int,int )) ;
 int FUNC_9 (struct ixgbe_dcb_config*,int*) ;
 int FUNC_10 (struct ixgbe_dcb_config*,int ,int*) ;
 int FUNC_11 (struct ixgbe_dcb_config*,int ,int (*) (int,int )) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct ixgbe_adapter*) ;
 struct ixgbe_adapter* FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*,int,int) ;
 int FUNC_16 (struct ixgbe_hw*) ;

__attribute__((used)) static u8 FUNC_17(struct net_device *VAR_19)
{
 struct ixgbe_adapter *VAR_20 = FUNC_14(VAR_19);
 struct ixgbe_dcb_config *VAR_21 = &VAR_20->dcb_cfg;
 struct ixgbe_hw *VAR_22 = &VAR_20->hw;
 int VAR_23 = VAR_8;
 int VAR_24;


 if (!(VAR_20->dcbx_cap & VAR_5))
  return VAR_8;

 VAR_20->dcb_set_bitmap |= FUNC_2(VAR_20,
            VAR_16);
 if (!VAR_20->dcb_set_bitmap)
  return VAR_8;

 if (VAR_20->dcb_set_bitmap & (VAR_3|VAR_2)) {
  u16 VAR_25[VAR_16], VAR_26[VAR_16];
  u8 VAR_27[VAR_16], VAR_28[VAR_16];

  u8 VAR_29[VAR_17];
  int VAR_30 = VAR_20->netdev->mtu + VAR_12 + VAR_11;






  FUNC_3(VAR_22, VAR_21, VAR_30,
            VAR_10);
  FUNC_3(VAR_22, VAR_21, VAR_30,
            VAR_9);

  FUNC_11(VAR_21, VAR_10, VAR_25);
  FUNC_8(VAR_21, VAR_26);
  FUNC_6(VAR_21, VAR_10, VAR_27);
  FUNC_10(VAR_21, VAR_10, VAR_28);
  FUNC_7(VAR_21, VAR_10, VAR_29);

  FUNC_4(VAR_22, VAR_25, VAR_26, VAR_27,
     VAR_28, VAR_29);

  for (VAR_24 = 0; VAR_24 < VAR_14; VAR_24++)
   FUNC_15(VAR_19, VAR_24, VAR_29[VAR_24]);

  VAR_23 = VAR_7;
 }

 if (VAR_20->dcb_set_bitmap & VAR_1) {
  if (VAR_21->pfc_mode_enable) {
   u8 VAR_31;
   u8 VAR_32[VAR_17];

   FUNC_7(VAR_21, VAR_10, VAR_32);
   FUNC_9(VAR_21, &VAR_31);
   FUNC_5(VAR_22, VAR_31, VAR_32);
  } else {
   VAR_22->mac.ops.fc_enable(VAR_22);
  }

  FUNC_13(VAR_20);

  VAR_23 = VAR_6;
 }
 VAR_20->dcb_set_bitmap = 0x00;
 return VAR_23;
}
