
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct cx25821_riscmem {unsigned int size; int dma; int * cpu; } ;
typedef int dma_addr_t ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,unsigned int,int *,int ) ;
 int * FUNC_1 (struct pci_dev*,unsigned int,int *) ;

int FUNC_2(struct pci_dev *VAR_1,
         struct cx25821_riscmem *VAR_2,
         unsigned int VAR_3)
{
 __le32 *VAR_4;
 dma_addr_t VAR_5 = 0;

 if (((void*)0) != VAR_2->cpu && VAR_2->size < VAR_3)
  FUNC_0(VAR_1, VAR_2->size, VAR_2->cpu, VAR_2->dma);
 if (((void*)0) == VAR_2->cpu) {
  VAR_4 = FUNC_1(VAR_1, VAR_3, &VAR_5);
  if (((void*)0) == VAR_4)
   return -VAR_0;
  VAR_2->cpu = VAR_4;
  VAR_2->dma = VAR_5;
  VAR_2->size = VAR_3;
 }
 return 0;
}
