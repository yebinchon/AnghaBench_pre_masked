
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int strength; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtk_nfc_nand_chip {scalar_t__ spare_per_sector; } ;
struct mtk_nfc_fdm {scalar_t__ reg_size; int ecc_size; } ;
struct mtk_nfc {int ecc; } ;
struct mtd_info {int dummy; } ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 struct nand_chip* FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (int ) ;
 struct mtk_nfc* FUNC_3 (struct nand_chip*) ;
 struct mtk_nfc_nand_chip* FUNC_4 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_5(struct mtk_nfc_fdm *VAR_1, struct mtd_info *VAR_2)
{
 struct nand_chip *VAR_3 = FUNC_1(VAR_2);
 struct mtk_nfc_nand_chip *VAR_4 = FUNC_4(VAR_3);
 struct mtk_nfc *VAR_5 = FUNC_3(VAR_3);
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_3->ecc.strength *
     FUNC_2(VAR_5->ecc), 8);

 VAR_1->reg_size = VAR_4->spare_per_sector - VAR_6;
 if (VAR_1->reg_size > VAR_0)
  VAR_1->reg_size = VAR_0;


 VAR_1->ecc_size = 1;
}
