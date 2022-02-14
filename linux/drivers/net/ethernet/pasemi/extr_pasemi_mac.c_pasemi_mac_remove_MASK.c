
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct pasemi_mac {TYPE_2__* rx; TYPE_1__* tx; int iob_pdev; int dma_pdev; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int chan; } ;
struct TYPE_3__ {int chan; } ;


 int FUNC_0 (struct net_device*) ;
 struct pasemi_mac* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pci_dev*) ;
 struct net_device* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_5(VAR_0);
 struct pasemi_mac *VAR_2;

 if (!VAR_1)
  return;

 VAR_2 = FUNC_1(VAR_1);

 FUNC_6(VAR_1);

 FUNC_4(VAR_0);
 FUNC_3(VAR_2->dma_pdev);
 FUNC_3(VAR_2->iob_pdev);

 FUNC_2(&VAR_2->tx->chan);
 FUNC_2(&VAR_2->rx->chan);

 FUNC_0(VAR_1);
}
