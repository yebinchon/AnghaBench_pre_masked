
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_7__ {int (* set_phy_power ) (struct ixgbe_hw*,int) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct TYPE_5__ {int (* enable_tx_laser ) (struct ixgbe_hw*) ;int (* stop_link_on_d3 ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {int type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ phy; TYPE_2__ mac; } ;
struct ixgbe_adapter {int wol; int state; struct ixgbe_hw hw; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int FUNC_3 (struct ixgbe_adapter*) ;






 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct pci_dev*) ;
 struct ixgbe_adapter* FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (struct ixgbe_hw*) ;
 int FUNC_15 (struct ixgbe_hw*) ;
 int FUNC_16 (struct ixgbe_hw*,int) ;
 int FUNC_17 (int ,int *) ;

__attribute__((used)) static int FUNC_18(struct pci_dev *VAR_7, bool *VAR_8)
{
 struct ixgbe_adapter *VAR_9 = FUNC_9(VAR_7);
 struct net_device *VAR_10 = VAR_9->netdev;
 struct ixgbe_hw *VAR_11 = &VAR_9->hw;
 u32 VAR_12;
 u32 VAR_13 = VAR_9->wol;




 FUNC_12();
 FUNC_6(VAR_10);

 if (FUNC_7(VAR_10))
  FUNC_3(VAR_9);

 FUNC_2(VAR_9);
 FUNC_13();







 if (VAR_11->mac.ops.stop_link_on_d3)
  VAR_11->mac.ops.stop_link_on_d3(VAR_11);

 if (VAR_13) {
  u32 VAR_14;

  FUNC_5(VAR_10);


  if (VAR_11->mac.ops.enable_tx_laser)
   VAR_11->mac.ops.enable_tx_laser(VAR_11);


  VAR_14 = FUNC_0(VAR_11, VAR_2);
  VAR_14 |= VAR_3;
  FUNC_1(VAR_11, VAR_2, VAR_14);

  VAR_12 = FUNC_0(VAR_11, VAR_0);
  VAR_12 |= VAR_1;
  FUNC_1(VAR_11, VAR_0, VAR_12);

  FUNC_1(VAR_11, VAR_5, VAR_13);
 } else {
  FUNC_1(VAR_11, VAR_4, 0);
  FUNC_1(VAR_11, VAR_5, 0);
 }

 switch (VAR_11->mac.type) {
 case 133:
  FUNC_11(VAR_7, 0);
  break;
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  FUNC_11(VAR_7, !!VAR_13);
  break;
 default:
  break;
 }

 *VAR_8 = !!VAR_13;
 if (VAR_11->phy.ops.set_phy_power && !*VAR_8)
  VAR_11->phy.ops.set_phy_power(VAR_11, 0);

 FUNC_4(VAR_9);

 if (!FUNC_17(VAR_6, &VAR_9->state))
  FUNC_8(VAR_7);

 return 0;
}
