
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int (* set_phy_power ) (struct ixgbe_hw*,int) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct TYPE_5__ {int (* enable_tx_laser ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ phy; TYPE_2__ mac; } ;
struct ixgbe_adapter {int flags; int service_timer; int link_check_timeout; int state; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int VAR_8 ;
 int FUNC_2 (int ,int *) ;
 int VAR_9 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct ixgbe_adapter*) ;
 int FUNC_6 (struct ixgbe_adapter*) ;
 int FUNC_7 (struct ixgbe_adapter*) ;
 int FUNC_8 (struct ixgbe_adapter*,int,int) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*) ;
 int FUNC_10 (struct ixgbe_adapter*) ;
 int FUNC_11 (struct ixgbe_hw*) ;
 int FUNC_12 (struct ixgbe_adapter*) ;
 int FUNC_13 (struct ixgbe_adapter*) ;
 int VAR_10 ;
 int FUNC_14 (int *,int ) ;
 int VAR_11 ;
 int FUNC_15 () ;
 int FUNC_16 (struct ixgbe_hw*) ;
 int FUNC_17 (struct ixgbe_hw*,int) ;

__attribute__((used)) static void FUNC_18(struct ixgbe_adapter *VAR_12)
{
 struct ixgbe_hw *VAR_13 = &VAR_12->hw;
 int VAR_14;
 u32 VAR_15;

 FUNC_7(VAR_12);
 FUNC_12(VAR_12);

 if (VAR_12->flags & VAR_6)
  FUNC_6(VAR_12);
 else
  FUNC_5(VAR_12);


 if (VAR_13->mac.ops.enable_tx_laser)
  VAR_13->mac.ops.enable_tx_laser(VAR_13);

 if (VAR_13->phy.ops.set_phy_power)
  VAR_13->phy.ops.set_phy_power(VAR_13, 1);

 FUNC_15();
 FUNC_2(VAR_8, &VAR_12->state);
 FUNC_10(VAR_12);

 if (FUNC_9(VAR_13)) {
  FUNC_13(VAR_12);
 } else {
  VAR_14 = FUNC_11(VAR_13);
  if (VAR_14)
   FUNC_4(VAR_11, "link_config FAILED %d\n", VAR_14);
 }


 FUNC_0(VAR_13, VAR_2);
 FUNC_8(VAR_12, 1, 1);





 if (VAR_12->flags & VAR_5) {
  u32 VAR_16 = FUNC_0(VAR_13, VAR_3);
  if (VAR_16 & VAR_4)
   FUNC_3(VAR_9, "Fan has stopped, replace the adapter\n");
 }



 VAR_12->flags |= VAR_7;
 VAR_12->link_check_timeout = VAR_10;
 FUNC_14(&VAR_12->service_timer, VAR_10);


 VAR_15 = FUNC_0(VAR_13, VAR_0);
 VAR_15 |= VAR_1;
 FUNC_1(VAR_13, VAR_0, VAR_15);
}
