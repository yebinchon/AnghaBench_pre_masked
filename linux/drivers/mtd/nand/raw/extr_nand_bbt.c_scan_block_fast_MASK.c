
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int dummy; } ;
struct nand_bbt_descr {int dummy; } ;
struct mtd_oob_ops {int mode; int * datbuf; scalar_t__ ooboffs; int * oobbuf; int ooblen; } ;
struct mtd_info {int writesize; int oobsize; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct nand_bbt_descr*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mtd_info*,scalar_t__,struct mtd_oob_ops*) ;
 int FUNC_3 (struct nand_chip*,int) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_1, struct nand_bbt_descr *VAR_2,
      loff_t VAR_3, uint8_t *VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_4(VAR_1);

 struct mtd_oob_ops VAR_6;
 int VAR_7, VAR_8;

 VAR_6.ooblen = VAR_5->oobsize;
 VAR_6.oobbuf = VAR_4;
 VAR_6.ooboffs = 0;
 VAR_6.datbuf = ((void*)0);
 VAR_6.mode = VAR_0;

 VAR_8 = FUNC_3(VAR_1, 0);

 while (VAR_8 >= 0) {




  VAR_7 = FUNC_2(VAR_5, VAR_3 + (VAR_8 * VAR_5->writesize),
       &VAR_6);

  if (VAR_7 && !FUNC_1(VAR_7))
   return VAR_7;

  if (FUNC_0(VAR_4, VAR_2))
   return 1;

  VAR_8 = FUNC_3(VAR_1, VAR_8 + 1);
 }

 return 0;
}
