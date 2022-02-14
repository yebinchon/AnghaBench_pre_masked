
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int dummy; } ;
struct mtd_oob_ops {int len; int * oobbuf; int * datbuf; scalar_t__ ooblen; scalar_t__ ooboffs; int mode; } ;
struct mtd_info {scalar_t__ writesize; scalar_t__ oobsize; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct mtd_info*,int ,struct mtd_oob_ops*) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_1, uint8_t *VAR_2, loff_t VAR_3,
    size_t VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_4(VAR_1);
 struct mtd_oob_ops VAR_6;
 int VAR_7, VAR_8 = 0;

 VAR_6.mode = VAR_0;
 VAR_6.ooboffs = 0;
 VAR_6.ooblen = VAR_5->oobsize;

 while (VAR_4 > 0) {
  VAR_6.datbuf = VAR_2;
  VAR_6.len = FUNC_0(VAR_4, (size_t)VAR_5->writesize);
  VAR_6.oobbuf = VAR_2 + VAR_6.len;

  VAR_7 = FUNC_3(VAR_5, VAR_3, &VAR_6);
  if (VAR_7) {
   if (!FUNC_1(VAR_7))
    return VAR_7;
   else if (FUNC_2(VAR_7) || !VAR_8)
    VAR_8 = VAR_7;
  }

  VAR_2 += VAR_5->oobsize + VAR_5->writesize;
  VAR_4 -= VAR_5->writesize;
  VAR_3 += VAR_5->writesize;
 }
 return VAR_8;
}
