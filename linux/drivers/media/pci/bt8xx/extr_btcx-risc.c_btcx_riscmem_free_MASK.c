
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct btcx_riscmem {scalar_t__ dma; int * cpu; int size; } ;


 int FUNC_0 (char*,int ,unsigned long) ;
 int VAR_0 ;
 int FUNC_1 (struct btcx_riscmem*,int ,int) ;
 int FUNC_2 (struct pci_dev*,int ,int *,scalar_t__) ;

void FUNC_3(struct pci_dev *VAR_1,
         struct btcx_riscmem *VAR_2)
{
 if (((void*)0) == VAR_2->cpu)
  return;

 VAR_0--;
 FUNC_0("btcx: riscmem free [%d] dma=%lx\n",
  VAR_0, (unsigned long)VAR_2->dma);

 FUNC_2(VAR_1, VAR_2->size, VAR_2->cpu, VAR_2->dma);
 FUNC_1(VAR_2,0,sizeof(*VAR_2));
}
