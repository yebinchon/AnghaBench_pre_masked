
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int size; } ;
struct nand_chip {TYPE_2__ ecc; } ;
struct TYPE_4__ {int reg_size; } ;
struct mtk_nfc_nand_chip {TYPE_1__ fdm; } ;
struct mtk_nfc {int ecc; } ;
struct mtk_ecc_stats {int bitflips; scalar_t__ failed; scalar_t__ corrected; } ;
struct TYPE_6__ {int failed; int corrected; } ;
struct mtd_info {TYPE_3__ ecc_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int) ;
 struct nand_chip* FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (int ,struct mtk_ecc_stats*,int) ;
 struct mtk_nfc* FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct mtk_nfc*,int ) ;
 int * FUNC_5 (struct nand_chip*,int) ;
 struct mtk_nfc_nand_chip* FUNC_6 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_7(struct mtd_info *VAR_2, u8 *VAR_3, u32 VAR_4,
        u32 VAR_5)
{
 struct nand_chip *VAR_6 = FUNC_1(VAR_2);
 struct mtk_nfc *VAR_7 = FUNC_3(VAR_6);
 struct mtk_nfc_nand_chip *VAR_8 = FUNC_6(VAR_6);
 struct mtk_ecc_stats VAR_9;
 u32 VAR_10 = VAR_8->fdm.reg_size;
 int VAR_11, VAR_12;

 VAR_11 = FUNC_4(VAR_7, VAR_0) & VAR_1;
 if (VAR_11) {
  FUNC_0(VAR_3, 0xff, VAR_5 * VAR_6->ecc.size);
  for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++)
   FUNC_0(FUNC_5(VAR_6, VAR_4 + VAR_12), 0xff, VAR_10);
  return 0;
 }

 FUNC_2(VAR_7->ecc, &VAR_9, VAR_5);
 VAR_2->ecc_stats.corrected += VAR_9.corrected;
 VAR_2->ecc_stats.failed += VAR_9.failed;

 return VAR_9.bitflips;
}
