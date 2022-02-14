
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int * rx_cpu_rmap; } ;
struct ena_com_dev {int dummy; } ;
struct ena_adapter {int msix_vecs; int reset_task; int timer_service; struct net_device* netdev; struct ena_com_dev* ena_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ena_com_dev*) ;
 int FUNC_3 (struct ena_com_dev*) ;
 int FUNC_4 (struct ena_com_dev*) ;
 int FUNC_5 (struct ena_adapter*,int) ;
 int FUNC_6 (struct ena_com_dev*,struct pci_dev*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct pci_dev*) ;
 struct ena_adapter* FUNC_10 (struct pci_dev*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct ena_com_dev*) ;

__attribute__((used)) static void FUNC_15(struct pci_dev *VAR_0)
{
 struct ena_adapter *VAR_1 = FUNC_10(VAR_0);
 struct ena_com_dev *VAR_2;
 struct net_device *VAR_3;

 VAR_2 = VAR_1->ena_dev;
 VAR_3 = VAR_1->netdev;







 FUNC_1(&VAR_1->timer_service);

 FUNC_0(&VAR_1->reset_task);

 FUNC_11();
 FUNC_5(VAR_1, 1);
 FUNC_12();

 FUNC_13(VAR_3);

 FUNC_8(VAR_3);

 FUNC_4(VAR_2);

 FUNC_2(VAR_2);

 FUNC_3(VAR_2);

 FUNC_6(VAR_2, VAR_0);

 FUNC_9(VAR_0);

 FUNC_14(VAR_2);
}
