
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int steps; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtk_nfc_fdm {int reg_size; } ;
struct mtk_nfc_nand_chip {struct mtk_nfc_fdm fdm; } ;
struct mtk_nfc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct mtk_nfc* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct mtk_nfc*,int,int ) ;
 int* FUNC_4 (struct nand_chip*,int) ;
 struct mtk_nfc_nand_chip* FUNC_5 (struct nand_chip*) ;

__attribute__((used)) static inline void FUNC_6(struct nand_chip *VAR_0)
{
 struct mtk_nfc *VAR_1 = FUNC_2(VAR_0);
 struct mtk_nfc_nand_chip *VAR_2 = FUNC_5(VAR_0);
 struct mtk_nfc_fdm *VAR_3 = &VAR_2->fdm;
 u32 VAR_4, VAR_5;
 u8 *VAR_6;
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_0->ecc.steps; VAR_7++) {
  VAR_6 = FUNC_4(VAR_0, VAR_7);
  VAR_4 = 0;
  VAR_5 = 0;
  for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
   if (VAR_8 < 4)
    VAR_4 |= (VAR_8 < VAR_3->reg_size ? VAR_6[VAR_8] : 0xff)
      << (VAR_8 * 8);
   else
    VAR_5 |= (VAR_8 < VAR_3->reg_size ? VAR_6[VAR_8] : 0xff)
      << ((VAR_8 - 4) * 8);
  }
  FUNC_3(VAR_1, VAR_4, FUNC_0(VAR_7));
  FUNC_3(VAR_1, VAR_5, FUNC_1(VAR_7));
 }
}
