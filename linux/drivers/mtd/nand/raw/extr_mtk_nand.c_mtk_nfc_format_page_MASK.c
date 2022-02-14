
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ steps; int size; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct TYPE_4__ {scalar_t__ sec; int (* bm_swap ) (struct mtd_info*,int ,int) ;} ;
struct mtk_nfc_fdm {int reg_size; } ;
struct mtk_nfc_nand_chip {TYPE_2__ bad_mark; struct mtk_nfc_fdm fdm; } ;
struct mtk_nfc {int buffer; } ;
struct mtd_info {scalar_t__ oobsize; scalar_t__ writesize; } ;


 int FUNC_0 (struct nand_chip*,int const*,scalar_t__) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int,scalar_t__) ;
 struct nand_chip* FUNC_3 (struct mtd_info*) ;
 int FUNC_4 (struct nand_chip*,scalar_t__) ;
 int FUNC_5 (struct nand_chip*,scalar_t__) ;
 struct mtk_nfc* FUNC_6 (struct nand_chip*) ;
 int FUNC_7 (struct nand_chip*,scalar_t__) ;
 int FUNC_8 (struct mtd_info*,int ,int) ;
 struct mtk_nfc_nand_chip* FUNC_9 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_10(struct mtd_info *VAR_0, const u8 *VAR_1)
{
 struct nand_chip *VAR_2 = FUNC_3(VAR_0);
 struct mtk_nfc_nand_chip *VAR_3 = FUNC_9(VAR_2);
 struct mtk_nfc *VAR_4 = FUNC_6(VAR_2);
 struct mtk_nfc_fdm *VAR_5 = &VAR_3->fdm;
 u32 VAR_6;

 FUNC_2(VAR_4->buffer, 0xff, VAR_0->writesize + VAR_0->oobsize);
 for (VAR_6 = 0; VAR_6 < VAR_2->ecc.steps; VAR_6++) {
  if (VAR_1)
   FUNC_1(FUNC_4(VAR_2, VAR_6), FUNC_0(VAR_2, VAR_1, VAR_6),
          VAR_2->ecc.size);

  if (VAR_6 == VAR_3->bad_mark.sec)
   VAR_3->bad_mark.bm_swap(VAR_0, VAR_4->buffer, 1);

  FUNC_1(FUNC_5(VAR_2, VAR_6), FUNC_7(VAR_2, VAR_6), VAR_5->reg_size);
 }
}
