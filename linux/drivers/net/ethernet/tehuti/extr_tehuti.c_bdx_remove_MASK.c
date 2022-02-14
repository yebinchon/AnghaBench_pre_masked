
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_nic {int port_num; scalar_t__ irq_type; int regs; TYPE_1__** priv; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct net_device* ndev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 struct pci_nic* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct pci_nic*) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_1)
{
 struct pci_nic *VAR_2 = FUNC_5(VAR_1);
 struct net_device *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->port_num; VAR_4++) {
  VAR_3 = VAR_2->priv[VAR_4]->ndev;
  FUNC_7(VAR_3);
  FUNC_1(VAR_3);
 }







 FUNC_2(VAR_2->regs);
 FUNC_6(VAR_1);
 FUNC_3(VAR_1);
 FUNC_8(VAR_2);

 FUNC_0();
}
