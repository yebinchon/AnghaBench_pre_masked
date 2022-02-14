
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct onenand_chip {int badblockpos; struct bbm_info* bbm; } ;
struct mtd_oob_ops {int ooblen; int ooboffs; int * oobbuf; int mode; } ;
struct mtd_info {scalar_t__ oobsize; struct onenand_chip* priv; } ;
struct bbm_info {int* bbt; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct onenand_chip*,int ) ;
 int FUNC_1 (struct mtd_info*,int ,struct mtd_oob_ops*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_1, loff_t VAR_2)
{
 struct onenand_chip *VAR_3 = VAR_1->priv;
 struct bbm_info *VAR_4 = VAR_3->bbm;
 u_char VAR_5[2] = {0, 0};
 struct mtd_oob_ops VAR_6 = {
  .mode = VAR_0,
  .ooblen = 2,
  .oobbuf = VAR_5,
  .ooboffs = 0,
 };
 int VAR_7;


 VAR_7 = FUNC_0(VAR_3, VAR_2);
        if (VAR_4->bbt)
                VAR_4->bbt[VAR_7 >> 2] |= 0x01 << ((VAR_7 & 0x03) << 1);


        VAR_2 += VAR_1->oobsize + (VAR_3->badblockpos & ~0x01);




 return FUNC_1(VAR_1, VAR_2, &VAR_6);
}
