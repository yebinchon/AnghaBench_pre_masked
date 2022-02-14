
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scatterlist {int dummy; } ;
struct pci_dev {int dummy; } ;
struct cx25821_riscmem {int size; int * cpu; int * jmp; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int * FUNC_1 (int *,struct scatterlist*,unsigned int,int,unsigned int,unsigned int,unsigned int,int) ;
 int FUNC_2 (struct pci_dev*,struct cx25821_riscmem*,int) ;

int FUNC_3(struct pci_dev *VAR_2, struct cx25821_riscmem *VAR_3,
   struct scatterlist *VAR_4, unsigned int VAR_5,
   unsigned int VAR_6, unsigned int VAR_7,
   unsigned int VAR_8, unsigned int VAR_9)
{
 u32 VAR_10;
 u32 VAR_11;
 __le32 *VAR_12;
 int VAR_13;

 VAR_11 = 0;
 if (VAR_1 != VAR_5)
  VAR_11++;
 if (VAR_1 != VAR_6)
  VAR_11++;






 VAR_10 = VAR_11 * (1 + ((VAR_7 + VAR_8) * VAR_9) / VAR_0 +
   VAR_9);
 VAR_10 += 5;
 VAR_13 = FUNC_2(VAR_2, VAR_3, VAR_10 * 12);

 if (VAR_13 < 0)
  return VAR_13;


 VAR_12 = VAR_3->cpu;

 if (VAR_1 != VAR_5) {
  VAR_12 = FUNC_1(VAR_12, VAR_4, VAR_5, 0, VAR_7, VAR_8,
     VAR_9, 1);
 }

 if (VAR_1 != VAR_6) {
  VAR_12 = FUNC_1(VAR_12, VAR_4, VAR_6, 0x200, VAR_7,
     VAR_8, VAR_9, VAR_1 == VAR_5);
 }


 VAR_3->jmp = VAR_12;
 FUNC_0((VAR_3->jmp - VAR_3->cpu + 3) * sizeof(*VAR_3->cpu) > VAR_3->size);

 return 0;
}
