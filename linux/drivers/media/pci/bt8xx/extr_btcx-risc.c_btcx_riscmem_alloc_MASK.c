
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct btcx_riscmem {unsigned int size; int * cpu; scalar_t__ dma; } ;
typedef scalar_t__ dma_addr_t ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,struct btcx_riscmem*) ;
 int FUNC_1 (char*,int ,unsigned long,int *,unsigned int) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,unsigned int) ;
 int * FUNC_3 (struct pci_dev*,unsigned int,scalar_t__*) ;

int FUNC_4(struct pci_dev *VAR_2,
         struct btcx_riscmem *VAR_3,
         unsigned int VAR_4)
{
 __le32 *VAR_5;
 dma_addr_t VAR_6 = 0;

 if (((void*)0) != VAR_3->cpu && VAR_3->size < VAR_4)
  FUNC_0(VAR_2,VAR_3);
 if (((void*)0) == VAR_3->cpu) {
  VAR_5 = FUNC_3(VAR_2, VAR_4, &VAR_6);
  if (((void*)0) == VAR_5)
   return -VAR_0;
  VAR_3->cpu = VAR_5;
  VAR_3->dma = VAR_6;
  VAR_3->size = VAR_4;

  VAR_1++;
  FUNC_1("btcx: riscmem alloc [%d] dma=%lx cpu=%p size=%d\n",
   VAR_1, (unsigned long)VAR_6, VAR_5, VAR_4);
 }
 FUNC_2(VAR_3->cpu,0,VAR_3->size);
 return 0;
}
