
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
struct nand_chip {int page_shift; } ;
struct nand_bbt_descr {int options; void** version; scalar_t__* pages; } ;
struct mtd_info {int writesize; } ;
typedef int loff_t ;


 int VAR_0 ;
 size_t FUNC_0 (struct nand_chip*,struct nand_bbt_descr*) ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (char*,scalar_t__,void*) ;
 int FUNC_3 (struct nand_chip*,void**,int,int ,struct nand_bbt_descr*) ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_1, uint8_t *VAR_2,
     struct nand_bbt_descr *VAR_3, struct nand_bbt_descr *VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_1(VAR_1);


 if (VAR_3->options & VAR_0) {
  FUNC_3(VAR_1, VAR_2, (loff_t)VAR_3->pages[0] << VAR_1->page_shift,
     VAR_5->writesize, VAR_3);
  VAR_3->version[0] = VAR_2[FUNC_0(VAR_1, VAR_3)];
  FUNC_2("Bad block table at page %d, version 0x%02X\n",
    VAR_3->pages[0], VAR_3->version[0]);
 }


 if (VAR_4 && (VAR_4->options & VAR_0)) {
  FUNC_3(VAR_1, VAR_2, (loff_t)VAR_4->pages[0] << VAR_1->page_shift,
     VAR_5->writesize, VAR_4);
  VAR_4->version[0] = VAR_2[FUNC_0(VAR_1, VAR_4)];
  FUNC_2("Bad block table at page %d, version 0x%02X\n",
    VAR_4->pages[0], VAR_4->version[0]);
 }
}
