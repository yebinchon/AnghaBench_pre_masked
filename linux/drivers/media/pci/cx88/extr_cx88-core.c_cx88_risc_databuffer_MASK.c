
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scatterlist {int dummy; } ;
struct pci_dev {int dummy; } ;
struct cx88_riscmem {int size; int * cpu; int * jmp; scalar_t__ dma; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *,struct scatterlist*,int ,int ,unsigned int,int ,unsigned int,unsigned int,int) ;
 int * FUNC_2 (struct pci_dev*,int,scalar_t__*) ;

int FUNC_3(struct pci_dev *VAR_3, struct cx88_riscmem *VAR_4,
    struct scatterlist *VAR_5, unsigned int VAR_6,
    unsigned int VAR_7, unsigned int VAR_8)
{
 u32 VAR_9;
 __le32 *VAR_10;







 VAR_9 = 1 + (VAR_6 * VAR_7) / VAR_2 + VAR_7;
 VAR_9 += 3;
 VAR_4->size = VAR_9 * 8;
 VAR_4->dma = 0;
 VAR_4->cpu = FUNC_2(VAR_3, VAR_4->size, &VAR_4->dma);
 if (!VAR_4->cpu)
  return -VAR_0;


 VAR_10 = VAR_4->cpu;
 VAR_10 = FUNC_1(VAR_10, VAR_5, 0, VAR_1, VAR_6, 0,
        VAR_7, VAR_8, !VAR_8);


 VAR_4->jmp = VAR_10;
 FUNC_0((VAR_4->jmp - VAR_4->cpu + 2) * sizeof(*VAR_4->cpu) > VAR_4->size);
 return 0;
}
