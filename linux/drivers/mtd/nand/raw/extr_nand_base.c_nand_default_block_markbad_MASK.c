
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int badblockpos; int options; } ;
struct mtd_oob_ops {int ooboffs; int len; int ooblen; int mode; int * oobbuf; } ;
struct mtd_info {int writesize; } ;
typedef int ops ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtd_oob_ops*,int ,int) ;
 int FUNC_1 (struct nand_chip*,int) ;
 int FUNC_2 (struct nand_chip*,scalar_t__,struct mtd_oob_ops*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_2, loff_t VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_3(VAR_2);
 struct mtd_oob_ops VAR_5;
 uint8_t VAR_6[2] = { 0, 0 };
 int VAR_7 = 0, VAR_8, VAR_9;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.oobbuf = VAR_6;
 VAR_5.ooboffs = VAR_2->badblockpos;
 if (VAR_2->options & VAR_1) {
  VAR_5.ooboffs &= ~0x01;
  VAR_5.len = VAR_5.ooblen = 2;
 } else {
  VAR_5.len = VAR_5.ooblen = 1;
 }
 VAR_5.mode = VAR_0;

 VAR_9 = FUNC_1(VAR_2, 0);

 while (VAR_9 >= 0) {
  VAR_8 = FUNC_2(VAR_2,
     VAR_3 + (VAR_9 * VAR_4->writesize),
     &VAR_5);

  if (!VAR_7)
   VAR_7 = VAR_8;

  VAR_9 = FUNC_1(VAR_2, VAR_9 + 1);
 }

 return VAR_7;
}
