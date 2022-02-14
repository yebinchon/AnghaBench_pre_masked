
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct stm32_fmc2_nfc {int dummy; } ;
struct TYPE_2__ {int (* correct ) (struct nand_chip*,int *,int *,int *) ;int total; int * code_buf; int * calc_buf; } ;
struct nand_chip {TYPE_1__ ecc; int oob_poi; int cur_cs; int controller; } ;
struct mtd_info {int oobsize; int writesize; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mtd_info*,int *,int ,int ,int ) ;
 int FUNC_2 (struct nand_chip*,int ,int ,int ,int) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct stm32_fmc2_nfc*) ;
 int FUNC_5 (struct nand_chip*,int,int ,int) ;
 int FUNC_6 (struct nand_chip*,int ) ;
 int FUNC_7 (struct nand_chip*,int *,int ,int) ;
 int FUNC_8 (struct nand_chip*,int *,int *,int *) ;
 struct stm32_fmc2_nfc* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct nand_chip *VAR_0, u8 *VAR_1,
       int VAR_2, int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_3(VAR_0);
 struct stm32_fmc2_nfc *VAR_5 = FUNC_9(VAR_0->controller);
 u8 *VAR_6 = VAR_0->ecc.calc_buf;
 u8 *VAR_7 = VAR_0->ecc.code_buf;
 u16 VAR_8;
 int VAR_9;


 VAR_9 = FUNC_6(VAR_0, VAR_0->cur_cs);
 if (VAR_9)
  return VAR_9;


 FUNC_5(VAR_0, VAR_3, 0, 0);


 VAR_9 = FUNC_7(VAR_0, VAR_1, 0, 0);
 if (VAR_9)
  return VAR_9;

 VAR_8 = FUNC_4(VAR_5);


 if (FUNC_0(!VAR_8)) {
  if (VAR_2)
   return FUNC_2(VAR_0, VAR_4->writesize,
         VAR_0->oob_poi,
         VAR_4->oobsize, 0);

  return 0;
 }


 VAR_9 = FUNC_2(VAR_0, VAR_4->writesize,
      VAR_0->oob_poi, VAR_4->oobsize, 0);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_4, VAR_7, VAR_0->oob_poi, 0,
      VAR_0->ecc.total);
 if (VAR_9)
  return VAR_9;


 return VAR_0->ecc.correct(VAR_0, VAR_1, VAR_7, VAR_6);
}
