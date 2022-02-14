
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int bbt_erase_shift; int page_shift; int * bbt; struct nand_bbt_descr* bbt_md; struct nand_bbt_descr* bbt_td; } ;
struct nand_bbt_descr {int options; } ;
struct mtd_info {int size; int oobsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nand_chip*,int *,struct nand_bbt_descr*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (struct nand_chip*,struct nand_bbt_descr*) ;
 int FUNC_4 (struct nand_chip*,struct nand_bbt_descr*) ;
 struct mtd_info* FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct nand_chip*,int *,struct nand_bbt_descr*,struct nand_bbt_descr*) ;
 int FUNC_8 (struct nand_chip*,int *,struct nand_bbt_descr*,struct nand_bbt_descr*) ;
 int FUNC_9 (struct nand_chip*,struct nand_bbt_descr*) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct nand_chip *VAR_3, struct nand_bbt_descr *VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_5(VAR_3);
 int VAR_6, VAR_7;
 uint8_t *VAR_8;
 struct nand_bbt_descr *VAR_9 = VAR_3->bbt_td;
 struct nand_bbt_descr *VAR_10 = VAR_3->bbt_md;

 VAR_6 = (VAR_5->size >> (VAR_3->bbt_erase_shift + 2)) ? : 1;




 VAR_3->bbt = FUNC_2(VAR_6, VAR_1);
 if (!VAR_3->bbt)
  return -VAR_0;





 if (!VAR_9) {
  if ((VAR_7 = FUNC_4(VAR_3, VAR_4))) {
   FUNC_6("nand_bbt: can't scan flash and build the RAM-based BBT\n");
   goto err_free_bbt;
  }
  return 0;
 }
 FUNC_9(VAR_3, VAR_9);
 FUNC_9(VAR_3, VAR_10);


 VAR_6 = (1 << VAR_3->bbt_erase_shift);
 VAR_6 += (VAR_6 >> VAR_3->page_shift) * VAR_5->oobsize;
 VAR_8 = FUNC_11(VAR_6);
 if (!VAR_8) {
  VAR_7 = -VAR_0;
  goto err_free_bbt;
 }


 if (VAR_9->options & VAR_2) {
  FUNC_7(VAR_3, VAR_8, VAR_9, VAR_10);
 } else {

  FUNC_8(VAR_3, VAR_8, VAR_9, VAR_10);
 }

 VAR_7 = FUNC_0(VAR_3, VAR_8, VAR_4);
 if (VAR_7)
  goto err_free_buf;


 FUNC_3(VAR_3, VAR_9);
 if (VAR_10)
  FUNC_3(VAR_3, VAR_10);

 FUNC_10(VAR_8);
 return 0;

err_free_buf:
 FUNC_10(VAR_8);
err_free_bbt:
 FUNC_1(VAR_3->bbt);
 VAR_3->bbt = ((void*)0);
 return VAR_7;
}
