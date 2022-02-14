
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nand_chip {int dummy; } ;
struct TYPE_3__ {int (* bm_swap ) (struct mtd_info*,int *,int) ;} ;
struct mtk_nfc_nand_chip {TYPE_1__ bad_mark; } ;
struct TYPE_4__ {int mode; int op; } ;
struct mtk_nfc {int ecc; int * buffer; TYPE_2__ ecc_cfg; } ;
struct mtd_info {size_t writesize; size_t oobsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int const*,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (struct mtd_info*,struct nand_chip*,int const*,int,size_t) ;
 int FUNC_4 (struct nand_chip*) ;
 struct mtk_nfc* FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (struct nand_chip*,int,int ,int *,int ) ;
 int FUNC_7 (struct nand_chip*) ;
 int FUNC_8 (struct mtk_nfc*,int ) ;
 int FUNC_9 (struct mtk_nfc*,int,int ) ;
 int FUNC_10 (struct mtd_info*,int *,int) ;
 struct mtk_nfc_nand_chip* FUNC_11 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_12(struct mtd_info *VAR_5, struct nand_chip *VAR_6,
         const u8 *VAR_7, int VAR_8, int VAR_9)
{
 struct mtk_nfc *VAR_10 = FUNC_5(VAR_6);
 struct mtk_nfc_nand_chip *VAR_11 = FUNC_11(VAR_6);
 size_t VAR_12;
 const u8 *VAR_13;
 u32 VAR_14;
 int VAR_15;

 FUNC_6(VAR_6, VAR_8, 0, ((void*)0), 0);

 if (!VAR_9) {

  VAR_14 = FUNC_8(VAR_10, VAR_4) | VAR_0;
  FUNC_9(VAR_10, VAR_14 | VAR_1, VAR_4);

  VAR_10->ecc_cfg.op = VAR_2;
  VAR_10->ecc_cfg.mode = VAR_3;
  VAR_15 = FUNC_2(VAR_10->ecc, &VAR_10->ecc_cfg);
  if (VAR_15) {

   VAR_14 = FUNC_8(VAR_10, VAR_4);
   VAR_14 &= ~(VAR_0 | VAR_1);
   FUNC_9(VAR_10, VAR_14, VAR_4);

   return VAR_15;
  }

  FUNC_0(VAR_10->buffer, VAR_7, VAR_5->writesize);
  VAR_11->bad_mark.bm_swap(VAR_5, VAR_10->buffer, VAR_9);
  VAR_13 = VAR_10->buffer;


  FUNC_4(VAR_6);
 } else {
  VAR_13 = VAR_7;
 }

 VAR_12 = VAR_5->writesize + (VAR_9 ? VAR_5->oobsize : 0);
 VAR_15 = FUNC_3(VAR_5, VAR_6, VAR_13, VAR_8, VAR_12);

 if (!VAR_9)
  FUNC_1(VAR_10->ecc);

 if (VAR_15)
  return VAR_15;

 return FUNC_7(VAR_6);
}
