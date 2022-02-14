
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s2io_nic {int bar1; int bar0; int set_link_task; int rst_timer_task; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct s2io_nic*) ;
 int FUNC_4 (int ) ;
 struct s2io_nic* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct pci_dev*) ;
 struct net_device* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static void FUNC_10(struct pci_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_7(VAR_1);
 struct s2io_nic *VAR_3;

 if (VAR_2 == ((void*)0)) {
  FUNC_0(VAR_0, "Driver Data is NULL!!\n");
  return;
 }

 VAR_3 = FUNC_5(VAR_2);

 FUNC_1(&VAR_3->rst_timer_task);
 FUNC_1(&VAR_3->set_link_task);

 FUNC_9(VAR_2);

 FUNC_3(VAR_3);
 FUNC_4(VAR_3->bar0);
 FUNC_4(VAR_3->bar1);
 FUNC_8(VAR_1);
 FUNC_2(VAR_2);
 FUNC_6(VAR_1);
}
