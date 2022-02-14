
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nand_chip {int bbt_erase_shift; int page_shift; int base; } ;
struct nand_bbt_descr {int* pages; int options; int maxblocks; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nand_chip*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct nand_chip *VAR_3, struct nand_bbt_descr *VAR_4,
    struct nand_bbt_descr *VAR_5, int VAR_6)
{
 u64 VAR_7 = FUNC_2(&VAR_3->base);
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;






 if (VAR_4->pages[VAR_6] != -1)
  return VAR_4->pages[VAR_6] >>
    (VAR_3->bbt_erase_shift - VAR_3->page_shift);

 VAR_11 = (int)(VAR_7 >> VAR_3->bbt_erase_shift);
 if (!(VAR_4->options & VAR_2))
  VAR_11 *= FUNC_1(&VAR_3->base);





 if (VAR_4->options & VAR_1) {
  VAR_8 = VAR_11 * (VAR_6 + 1) - 1;
  VAR_9 = -1;
 } else {
  VAR_8 = VAR_6 * VAR_11;
  VAR_9 = 1;
 }

 for (VAR_12 = 0; VAR_12 < VAR_4->maxblocks; VAR_12++) {
  int VAR_13 = VAR_8 + VAR_9 * VAR_12;


  switch (FUNC_0(VAR_3, VAR_13)) {
  case 128:
  case 129:
   continue;
  }

  VAR_10 = VAR_13 << (VAR_3->bbt_erase_shift - VAR_3->page_shift);


  if (!VAR_5 || VAR_5->pages[VAR_6] != VAR_10)
   return VAR_13;
 }

 return -VAR_0;
}
