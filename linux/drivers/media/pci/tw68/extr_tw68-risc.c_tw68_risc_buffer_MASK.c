
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tw68_buf {int size; int * cpu; int * jmp; scalar_t__ dma; } ;
struct scatterlist {int dummy; } ;
struct pci_dev {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int * FUNC_2 (struct pci_dev*,int,scalar_t__*) ;
 int * FUNC_3 (int *,struct scatterlist*,unsigned int,int,unsigned int,unsigned int,unsigned int,int) ;

int FUNC_4(struct pci_dev *VAR_3,
   struct tw68_buf *VAR_4,
   struct scatterlist *VAR_5,
   unsigned int VAR_6,
   unsigned int VAR_7,
   unsigned int VAR_8,
   unsigned int VAR_9,
   unsigned int VAR_10)
{
 u32 VAR_11, VAR_12;
 __le32 *VAR_13;

 VAR_12 = 0;
 if (VAR_2 != VAR_6)
  VAR_12++;
 if (VAR_2 != VAR_7)
  VAR_12++;






 VAR_11 = VAR_12 * (1 + (((VAR_8 + VAR_9) * VAR_10) /
    VAR_1) + VAR_10) + 4;
 VAR_4->size = VAR_11 * 8;
 VAR_4->cpu = FUNC_2(VAR_3, VAR_4->size, &VAR_4->dma);
 if (VAR_4->cpu == ((void*)0))
  return -VAR_0;


 VAR_13 = VAR_4->cpu;
 if (VAR_2 != VAR_6)
  VAR_13 = FUNC_3(VAR_13, VAR_5, VAR_6, 1,
         VAR_8, VAR_9, VAR_10, 1);
 if (VAR_2 != VAR_7)
  VAR_13 = FUNC_3(VAR_13, VAR_5, VAR_7, 2,
         VAR_8, VAR_9, VAR_10, VAR_6 == VAR_2);


 VAR_4->jmp = VAR_13;
 VAR_4->cpu[1] = FUNC_1(VAR_4->dma + 8);

 FUNC_0((VAR_4->jmp - VAR_4->cpu + 2) * sizeof(VAR_4->cpu[0]) > VAR_4->size);
 return 0;
}
