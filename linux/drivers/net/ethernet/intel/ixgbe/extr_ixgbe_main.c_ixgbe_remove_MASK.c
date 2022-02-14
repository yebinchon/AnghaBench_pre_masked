
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct net_device {scalar_t__ reg_state; } ;
struct ixgbe_adapter {int flags; int state; int af_xdp_zc_qps; TYPE_1__* rss_key; TYPE_1__* mac_table; TYPE_1__** jump_tables; int io_addr; TYPE_1__* ixgbe_ieee_ets; TYPE_1__* ixgbe_ieee_pfc; int hw; scalar_t__ mii_bus; int service_task; struct net_device* netdev; } ;
struct TYPE_2__ {struct TYPE_2__* mask; struct TYPE_2__* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ixgbe_adapter*) ;
 int FUNC_8 (struct ixgbe_adapter*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct ixgbe_adapter*) ;
 int FUNC_11 (struct ixgbe_adapter*) ;
 int FUNC_12 (struct ixgbe_adapter*) ;
 int FUNC_13 (struct ixgbe_adapter*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (struct pci_dev*) ;
 struct ixgbe_adapter* FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (int ,int *) ;
 int FUNC_21 (int ,int *) ;
 int FUNC_22 (struct net_device*) ;

__attribute__((used)) static void FUNC_23(struct pci_dev *VAR_7)
{
 struct ixgbe_adapter *VAR_8 = FUNC_18(VAR_7);
 struct net_device *VAR_9;
 bool VAR_10;
 int VAR_11;


 if (!VAR_8)
  return;

 VAR_9 = VAR_8->netdev;
 FUNC_8(VAR_8);

 FUNC_20(VAR_6, &VAR_8->state);
 FUNC_2(&VAR_8->service_task);

 if (VAR_8->mii_bus)
  FUNC_15(VAR_8->mii_bus);
 FUNC_9(VAR_9);




 if (VAR_9->reg_state == VAR_4)
  FUNC_22(VAR_9);

 FUNC_12(VAR_8);
 FUNC_7(VAR_8);

 FUNC_11(VAR_8);






 FUNC_6(VAR_8->io_addr);
 FUNC_19(VAR_7);

 FUNC_4("complete\n");

 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  if (VAR_8->jump_tables[VAR_11]) {
   FUNC_14(VAR_8->jump_tables[VAR_11]->input);
   FUNC_14(VAR_8->jump_tables[VAR_11]->mask);
  }
  FUNC_14(VAR_8->jump_tables[VAR_11]);
 }

 FUNC_14(VAR_8->mac_table);
 FUNC_14(VAR_8->rss_key);
 FUNC_1(VAR_8->af_xdp_zc_qps);
 VAR_10 = !FUNC_21(VAR_5, &VAR_8->state);
 FUNC_5(VAR_9);

 FUNC_17(VAR_7);

 if (VAR_10)
  FUNC_16(VAR_7);
}
