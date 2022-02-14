
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int u64 ;
struct nand_chip {int bbt_erase_shift; int page_shift; int base; } ;
struct nand_bbt_descr {int options; int* pages; int maxblocks; scalar_t__ reserved_block_code; } ;
struct mtd_info {int size; } ;
typedef int loff_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct nand_chip*,int) ;
 int FUNC_1 (struct nand_chip*,int,scalar_t__) ;
 struct mtd_info* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct nand_chip *VAR_5, struct nand_bbt_descr *VAR_6)
{
 u64 VAR_7 = FUNC_5(&VAR_5->base);
 struct mtd_info *VAR_8 = FUNC_2(VAR_5);
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 uint8_t VAR_15;


 if (VAR_6->options & VAR_3) {
  VAR_11 = FUNC_4(&VAR_5->base);
  VAR_13 = (int)(VAR_7 >> VAR_5->bbt_erase_shift);
 } else {
  VAR_11 = 1;
  VAR_13 = (int)(VAR_8->size >> VAR_5->bbt_erase_shift);
 }

 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
  if ((VAR_6->options & VAR_1) ||
      !(VAR_6->options & VAR_4)) {
   if (VAR_6->pages[VAR_9] == -1)
    continue;
   VAR_12 = VAR_6->pages[VAR_9] >> (VAR_5->bbt_erase_shift - VAR_5->page_shift);
   VAR_15 = FUNC_0(VAR_5, VAR_12);
   FUNC_1(VAR_5, VAR_12, VAR_0);
   if ((VAR_15 != VAR_0) &&
     VAR_6->reserved_block_code)
    FUNC_3(VAR_5, (loff_t)VAR_12 <<
      VAR_5->bbt_erase_shift);
   continue;
  }
  VAR_14 = 0;
  if (VAR_6->options & VAR_2)
   VAR_12 = ((VAR_9 + 1) * VAR_13) - VAR_6->maxblocks;
  else
   VAR_12 = VAR_9 * VAR_13;
  for (VAR_10 = 0; VAR_10 < VAR_6->maxblocks; VAR_10++) {
   VAR_15 = FUNC_0(VAR_5, VAR_12);
   FUNC_1(VAR_5, VAR_12, VAR_0);
   if (VAR_15 != VAR_0)
    VAR_14 = 1;
   VAR_12++;
  }





  if (VAR_14 && VAR_6->reserved_block_code)
   FUNC_3(VAR_5, (loff_t)(VAR_12 - 1) <<
     VAR_5->bbt_erase_shift);
 }
}
