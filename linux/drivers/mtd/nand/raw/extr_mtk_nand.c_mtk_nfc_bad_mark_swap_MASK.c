
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_3__ {size_t size; } ;
struct nand_chip {int * oob_poi; TYPE_1__ ecc; } ;
struct TYPE_4__ {size_t pos; size_t sec; } ;
struct mtk_nfc_nand_chip {TYPE_2__ bad_mark; } ;
struct mtd_info {int dummy; } ;


 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 size_t FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (int ,int ) ;
 struct mtk_nfc_nand_chip* FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_4(struct mtd_info *VAR_0, u8 *VAR_1, int VAR_2)
{
 struct nand_chip *VAR_3 = FUNC_0(VAR_0);
 struct mtk_nfc_nand_chip *VAR_4 = FUNC_3(VAR_3);
 u32 VAR_5 = VAR_4->bad_mark.pos;

 if (VAR_2)
  VAR_5 += VAR_4->bad_mark.sec * FUNC_1(VAR_3);
 else
  VAR_5 += VAR_4->bad_mark.sec * VAR_3->ecc.size;

 FUNC_2(VAR_3->oob_poi[0], VAR_1[VAR_5]);
}
