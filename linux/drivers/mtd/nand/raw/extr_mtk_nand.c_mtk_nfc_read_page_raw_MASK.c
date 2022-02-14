
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int steps; int size; } ;
struct nand_chip {TYPE_2__ ecc; } ;
struct TYPE_3__ {int sec; int (* bm_swap ) (struct mtd_info*,int ,int) ;} ;
struct mtk_nfc_fdm {int reg_size; } ;
struct mtk_nfc_nand_chip {TYPE_1__ bad_mark; struct mtk_nfc_fdm fdm; } ;
struct mtk_nfc {int buffer; } ;
struct mtd_info {scalar_t__ writesize; scalar_t__ oobsize; } ;


 int FUNC_0 (struct nand_chip*,int *,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int,scalar_t__) ;
 int FUNC_3 (struct nand_chip*,int) ;
 int FUNC_4 (struct mtd_info*,struct nand_chip*,int ,scalar_t__,int ,int,int) ;
 int FUNC_5 (struct nand_chip*,int) ;
 struct mtk_nfc* FUNC_6 (struct nand_chip*) ;
 struct mtd_info* FUNC_7 (struct nand_chip*) ;
 int FUNC_8 (struct nand_chip*,int) ;
 int FUNC_9 (struct mtd_info*,int ,int) ;
 struct mtk_nfc_nand_chip* FUNC_10 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_11(struct nand_chip *VAR_0, u8 *VAR_1, int VAR_2,
     int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_7(VAR_0);
 struct mtk_nfc_nand_chip *VAR_5 = FUNC_10(VAR_0);
 struct mtk_nfc *VAR_6 = FUNC_6(VAR_0);
 struct mtk_nfc_fdm *VAR_7 = &VAR_5->fdm;
 int VAR_8, VAR_9;

 FUNC_2(VAR_6->buffer, 0xff, VAR_4->writesize + VAR_4->oobsize);
 VAR_9 = FUNC_4(VAR_4, VAR_0, 0, VAR_4->writesize, VAR_6->buffer,
       VAR_3, 1);
 if (VAR_9 < 0)
  return VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_0->ecc.steps; VAR_8++) {
  FUNC_1(FUNC_8(VAR_0, VAR_8), FUNC_5(VAR_0, VAR_8), VAR_7->reg_size);

  if (VAR_8 == VAR_5->bad_mark.sec)
   VAR_5->bad_mark.bm_swap(VAR_4, VAR_6->buffer, 1);

  if (VAR_1)
   FUNC_1(FUNC_0(VAR_0, VAR_1, VAR_8), FUNC_3(VAR_0, VAR_8),
          VAR_0->ecc.size);
 }

 return VAR_9;
}
