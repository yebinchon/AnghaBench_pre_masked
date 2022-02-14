
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int size; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct TYPE_5__ {int reg_size; } ;
struct mtk_nfc_nand_chip {TYPE_2__ fdm; } ;
struct TYPE_6__ {int op; int mode; } ;
struct mtk_nfc {TYPE_3__ ecc_cfg; int ecc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_3__*,int *,int) ;
 struct mtk_nfc* FUNC_1 (struct nand_chip*) ;
 struct mtk_nfc_nand_chip* FUNC_2 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_3(struct nand_chip *VAR_2, u8 *VAR_3)
{
 struct mtk_nfc *VAR_4 = FUNC_1(VAR_2);
 struct mtk_nfc_nand_chip *VAR_5 = FUNC_2(VAR_2);
 int VAR_6 = VAR_2->ecc.size + VAR_5->fdm.reg_size;

 VAR_4->ecc_cfg.mode = VAR_0;
 VAR_4->ecc_cfg.op = VAR_1;

 return FUNC_0(VAR_4->ecc, &VAR_4->ecc_cfg, VAR_3, VAR_6);
}
