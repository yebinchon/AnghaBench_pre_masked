
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {unsigned int length; scalar_t__ offset; } ;
struct saa7134_pgtable {int * cpu; } ;
struct pci_dev {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct scatterlist*) ;
 struct scatterlist* FUNC_3 (struct scatterlist*) ;

int FUNC_4(struct pci_dev *VAR_0, struct saa7134_pgtable *VAR_1,
     struct scatterlist *VAR_2, unsigned int VAR_3,
     unsigned int VAR_4)
{
 __le32 *VAR_5;
 unsigned int VAR_6, VAR_7;

 FUNC_0(((void*)0) == VAR_1 || ((void*)0) == VAR_1->cpu);

 VAR_5 = VAR_1->cpu + VAR_4;
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++, VAR_2 = FUNC_3(VAR_2)) {
  for (VAR_7 = 0; VAR_7 * 4096 < VAR_2->length; VAR_7++, VAR_5++)
   *VAR_5 = FUNC_1(FUNC_2(VAR_2) +
      VAR_2->offset + VAR_7 * 4096);
 }
 return 0;
}
