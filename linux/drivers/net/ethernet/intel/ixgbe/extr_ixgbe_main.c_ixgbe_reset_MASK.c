
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_7__ {int (* set_phy_power ) (struct ixgbe_hw*,int) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct TYPE_5__ {int (* init_hw ) (struct ixgbe_hw*) ;int (* set_vmdq_san_mac ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_6__ {TYPE_1__ ops; scalar_t__ san_mac_rar_index; } ;
struct ixgbe_hw {TYPE_4__ phy; TYPE_2__ mac; int hw_addr; } ;
struct ixgbe_adapter {int flags2; int wol; struct net_device* netdev; int state; int flags; struct ixgbe_hw hw; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct net_device*,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct ixgbe_adapter*) ;
 int FUNC_6 (struct ixgbe_adapter*) ;
 int FUNC_7 (struct ixgbe_adapter*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct ixgbe_hw*) ;
 int FUNC_11 (struct ixgbe_hw*,int ) ;
 int FUNC_12 (struct ixgbe_hw*,int) ;
 int FUNC_13 (struct ixgbe_hw*,int) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 int FUNC_16 (int,int) ;

void FUNC_17(struct ixgbe_adapter *VAR_5)
{
 struct ixgbe_hw *VAR_6 = &VAR_5->hw;
 struct net_device *VAR_7 = VAR_5->netdev;
 int VAR_8;

 if (FUNC_8(VAR_6->hw_addr))
  return;

 while (FUNC_14(VAR_3, &VAR_5->state))
  FUNC_16(1000, 2000);


 VAR_5->flags2 &= ~(VAR_0 |
        VAR_1);
 VAR_5->flags &= ~VAR_2;

 VAR_8 = VAR_6->mac.ops.init_hw(VAR_6);
 switch (VAR_8) {
 case 0:
 case 129:
 case 128:
  break;
 case 130:
  FUNC_3("master disable timed out\n");
  break;
 case 131:

  FUNC_4("This device is a pre-production adapter/LOM. "
      "Please be aware there may be issues associated with "
      "your hardware.  If you are experiencing problems "
      "please contact your Intel or hardware "
      "representative who provided you with this "
      "hardware.\n");
  break;
 default:
  FUNC_3("Hardware Error: %d\n", VAR_8);
 }

 FUNC_2(VAR_3, &VAR_5->state);


 FUNC_5(VAR_5);
 FUNC_1(VAR_7, ((void*)0));


 FUNC_6(VAR_5);


 if (VAR_6->mac.san_mac_rar_index)
  VAR_6->mac.ops.set_vmdq_san_mac(VAR_6, FUNC_0(0));

 if (FUNC_15(VAR_4, &VAR_5->state))
  FUNC_7(VAR_5);

 if (VAR_6->phy.ops.set_phy_power) {
  if (!FUNC_9(VAR_5->netdev) && !VAR_5->wol)
   VAR_6->phy.ops.set_phy_power(VAR_6, 0);
  else
   VAR_6->phy.ops.set_phy_power(VAR_6, 1);
 }
}
