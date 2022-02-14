
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int coherent_dma_mask; int * dma_parms; int * dma_mask; int release; } ;
struct pci_dev {int state_saved; int match_driver; TYPE_1__ dev; int bus_list; int dma_parms; int dma_mask; } ;
struct pci_bus {int devices; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int VAR_0 ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (int ,struct pci_dev*) ;
 int VAR_1 ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int VAR_2 ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_bus*) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (int *) ;

void FUNC_16(struct pci_dev *VAR_3, struct pci_bus *VAR_4)
{
 int VAR_5;

 FUNC_7(VAR_3);

 FUNC_2(&VAR_3->dev);
 VAR_3->dev.release = VAR_2;

 FUNC_14(&VAR_3->dev, FUNC_13(VAR_4));
 VAR_3->dev.dma_mask = &VAR_3->dma_mask;
 VAR_3->dev.dma_parms = &VAR_3->dma_parms;
 VAR_3->dev.coherent_dma_mask = 0xffffffffull;

 FUNC_3(&VAR_3->dev, 65536);
 FUNC_4(&VAR_3->dev, 0xffffffff);


 FUNC_8(VAR_1, VAR_3);


 FUNC_10(VAR_3);


 VAR_3->state_saved = 0;


 FUNC_9(VAR_3);





 FUNC_5(&VAR_0);
 FUNC_6(&VAR_3->bus_list, &VAR_4->devices);
 FUNC_15(&VAR_0);

 VAR_5 = FUNC_12(VAR_3);
 FUNC_0(VAR_5 < 0);


 FUNC_11(VAR_3);


 VAR_3->match_driver = 0;
 VAR_5 = FUNC_1(&VAR_3->dev);
 FUNC_0(VAR_5 < 0);
}
