
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int u64 ;
struct nand_chip {int bbt_erase_shift; int page_shift; int base; } ;
struct nand_bbt_descr {int options; int* pages; int maxblocks; scalar_t__* version; } ;
struct mtd_info {int writesize; int oobsize; int size; } ;
typedef size_t loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (struct nand_chip*,struct nand_bbt_descr*) ;
 int FUNC_1 (scalar_t__*,int,int,struct nand_bbt_descr*) ;
 struct mtd_info* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,scalar_t__) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct nand_chip*,scalar_t__*,size_t,int,struct nand_bbt_descr*) ;

__attribute__((used)) static int FUNC_8(struct nand_chip *VAR_3, uint8_t *VAR_4,
        struct nand_bbt_descr *VAR_5)
{
 u64 VAR_6 = FUNC_4(&VAR_3->base);
 struct mtd_info *VAR_7 = FUNC_2(VAR_3);
 int VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12;
 int VAR_13 = VAR_7->writesize + VAR_7->oobsize;
 int VAR_14;
 int VAR_15 = VAR_3->bbt_erase_shift - VAR_3->page_shift;


 if (VAR_5->options & VAR_0) {
  VAR_10 = (VAR_7->size >> VAR_3->bbt_erase_shift) - 1;
  VAR_12 = -1;
 } else {
  VAR_10 = 0;
  VAR_12 = 1;
 }


 if (VAR_5->options & VAR_1) {
  VAR_9 = FUNC_3(&VAR_3->base);
  VAR_14 = VAR_6 >> VAR_3->bbt_erase_shift;
  VAR_10 &= VAR_14 - 1;
 } else {
  VAR_9 = 1;
  VAR_14 = VAR_7->size >> VAR_3->bbt_erase_shift;
 }

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {

  VAR_5->version[VAR_8] = 0;
  VAR_5->pages[VAR_8] = -1;

  for (VAR_11 = 0; VAR_11 < VAR_5->maxblocks; VAR_11++) {

   int VAR_16 = VAR_10 + VAR_12 * VAR_11;
   loff_t VAR_17 = (loff_t)VAR_16 << VAR_3->bbt_erase_shift;


   FUNC_7(VAR_3, VAR_4, VAR_17, VAR_7->writesize, VAR_5);
   if (!FUNC_1(VAR_4, VAR_13, VAR_7->writesize, VAR_5)) {
    VAR_5->pages[VAR_8] = VAR_16 << VAR_15;
    if (VAR_5->options & VAR_2) {
     VAR_17 = FUNC_0(VAR_3, VAR_5);
     VAR_5->version[VAR_8] = VAR_4[VAR_17];
    }
    break;
   }
  }
  VAR_10 += VAR_6 >> VAR_3->bbt_erase_shift;
 }

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  if (VAR_5->pages[VAR_8] == -1)
   FUNC_6("Bad block table not found for chip %d\n", VAR_8);
  else
   FUNC_5("Bad block table found at page %d, version 0x%02X\n",
    VAR_5->pages[VAR_8], VAR_5->version[VAR_8]);
 }
 return 0;
}
