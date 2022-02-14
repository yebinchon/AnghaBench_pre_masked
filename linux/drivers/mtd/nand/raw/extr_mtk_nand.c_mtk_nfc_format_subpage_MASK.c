
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int size; int steps; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct TYPE_4__ {int sec; int (* bm_swap ) (struct mtd_info*,int ,int) ;} ;
struct mtk_nfc_fdm {int reg_size; } ;
struct mtk_nfc_nand_chip {TYPE_2__ bad_mark; struct mtk_nfc_fdm fdm; } ;
struct mtk_nfc {int buffer; } ;
struct mtd_info {scalar_t__ oobsize; scalar_t__ writesize; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct nand_chip*,int const*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int,scalar_t__) ;
 struct nand_chip* FUNC_4 (struct mtd_info*) ;
 int FUNC_5 (struct nand_chip*,int) ;
 int FUNC_6 (struct nand_chip*,int ) ;
 int FUNC_7 (struct nand_chip*,int) ;
 struct mtk_nfc* FUNC_8 (struct nand_chip*) ;
 int FUNC_9 (struct nand_chip*,int) ;
 int FUNC_10 (struct mtd_info*,int ,int) ;
 struct mtk_nfc_nand_chip* FUNC_11 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_12(struct mtd_info *VAR_0, u32 VAR_1,
      u32 VAR_2, const u8 *VAR_3)
{
 struct nand_chip *VAR_4 = FUNC_4(VAR_0);
 struct mtk_nfc_nand_chip *VAR_5 = FUNC_11(VAR_4);
 struct mtk_nfc *VAR_6 = FUNC_8(VAR_4);
 struct mtk_nfc_fdm *VAR_7 = &VAR_5->fdm;
 u32 VAR_8, VAR_9;
 int VAR_10, VAR_11;

 VAR_8 = VAR_1 / VAR_4->ecc.size;
 VAR_9 = FUNC_0(VAR_1 + VAR_2, VAR_4->ecc.size);

 FUNC_3(VAR_6->buffer, 0xff, VAR_0->writesize + VAR_0->oobsize);
 for (VAR_10 = 0; VAR_10 < VAR_4->ecc.steps; VAR_10++) {
  FUNC_2(FUNC_5(VAR_4, VAR_10), FUNC_1(VAR_4, VAR_3, VAR_10),
         VAR_4->ecc.size);

  if (VAR_8 > VAR_10 || VAR_10 >= VAR_9)
   continue;

  if (VAR_10 == VAR_5->bad_mark.sec)
   VAR_5->bad_mark.bm_swap(VAR_0, VAR_6->buffer, 1);

  FUNC_2(FUNC_7(VAR_4, VAR_10), FUNC_9(VAR_4, VAR_10), VAR_7->reg_size);


  VAR_11 = FUNC_6(VAR_4, FUNC_5(VAR_4, VAR_10));
  if (VAR_11 < 0)
   return VAR_11;
 }

 return 0;
}
