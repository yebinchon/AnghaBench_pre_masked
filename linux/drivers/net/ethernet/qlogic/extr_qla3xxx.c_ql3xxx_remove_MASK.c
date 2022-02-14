
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql3_adapter {int mem_map_registers; int * workqueue; int tx_timeout_work; int reset_work; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 struct ql3_adapter* FUNC_4 (struct net_device*) ;
 struct net_device* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct ql3_adapter*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_5(VAR_0);
 struct ql3_adapter *VAR_2 = FUNC_4(VAR_1);

 FUNC_8(VAR_1);

 FUNC_7(VAR_2);

 if (VAR_2->workqueue) {
  FUNC_0(&VAR_2->reset_work);
  FUNC_0(&VAR_2->tx_timeout_work);
  FUNC_1(VAR_2->workqueue);
  VAR_2->workqueue = ((void*)0);
 }

 FUNC_3(VAR_2->mem_map_registers);
 FUNC_6(VAR_0);
 FUNC_2(VAR_1);
}
