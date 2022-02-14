
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcraid_instance {int host; int mapped_dma_addr; int worker_q; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*) ;
 struct pmcraid_instance* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pmcraid_instance*,int ) ;
 int FUNC_6 (struct pmcraid_instance*) ;
 int FUNC_7 (struct pmcraid_instance*) ;
 int FUNC_8 (struct pmcraid_instance*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pmcraid_instance*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct pci_dev *VAR_0)
{
 struct pmcraid_instance *VAR_1 = FUNC_3(VAR_0);


 FUNC_8(VAR_1);


 FUNC_13(VAR_1->host);


 FUNC_11(VAR_1->host);


 FUNC_9(VAR_0);

 FUNC_5(VAR_1, ~0);
 FUNC_0(&VAR_1->worker_q);

 FUNC_6(VAR_1);
 FUNC_10(VAR_1);
 FUNC_7(VAR_1);
 FUNC_1(VAR_1->mapped_dma_addr);
 FUNC_4(VAR_0);
 FUNC_12(VAR_1->host);
 FUNC_2(VAR_0);

 return;
}
