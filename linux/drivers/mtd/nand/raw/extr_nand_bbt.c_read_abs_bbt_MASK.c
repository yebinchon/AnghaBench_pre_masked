
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u64 ;
struct nand_chip {int bbt_erase_shift; int base; } ;
struct nand_bbt_descr {int options; int * pages; } ;
struct mtd_info {int size; } ;


 int VAR_0 ;
 struct mtd_info* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nand_chip*,int *,int ,int,struct nand_bbt_descr*,int) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_1, uint8_t *VAR_2,
   struct nand_bbt_descr *VAR_3, int VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_0(VAR_1);
 u64 VAR_6 = FUNC_2(&VAR_1->base);
 int VAR_7 = 0, VAR_8;

 if (VAR_3->options & VAR_0) {
  int VAR_9 = 0;
  for (VAR_8 = 0; VAR_8 < FUNC_1(&VAR_1->base); VAR_8++) {
   if (VAR_4 == -1 || VAR_4 == VAR_8)
    VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3->pages[VAR_8],
     VAR_6 >> VAR_1->bbt_erase_shift,
     VAR_3, VAR_9);
   if (VAR_7)
    return VAR_7;
   VAR_9 += VAR_6 >> VAR_1->bbt_erase_shift;
  }
 } else {
  VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3->pages[0],
    VAR_5->size >> VAR_1->bbt_erase_shift, VAR_3, 0);
  if (VAR_7)
   return VAR_7;
 }
 return 0;
}
