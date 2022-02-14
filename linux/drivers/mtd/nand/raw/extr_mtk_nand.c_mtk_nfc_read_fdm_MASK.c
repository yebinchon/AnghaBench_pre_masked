
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nand_chip {int dummy; } ;
struct mtk_nfc_fdm {int reg_size; } ;
struct mtk_nfc_nand_chip {struct mtk_nfc_fdm fdm; } ;
struct mtk_nfc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct mtk_nfc* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct mtk_nfc*,int ) ;
 int* FUNC_4 (struct nand_chip*,int) ;
 struct mtk_nfc_nand_chip* FUNC_5 (struct nand_chip*) ;

__attribute__((used)) static inline void FUNC_6(struct nand_chip *VAR_0, u32 VAR_1,
        u32 VAR_2)
{
 struct mtk_nfc *VAR_3 = FUNC_2(VAR_0);
 struct mtk_nfc_nand_chip *VAR_4 = FUNC_5(VAR_0);
 struct mtk_nfc_fdm *VAR_5 = &VAR_4->fdm;
 u32 VAR_6, VAR_7;
 u8 *VAR_8;
 int VAR_9, VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_8 = FUNC_4(VAR_0, VAR_1 + VAR_9);
  VAR_6 = FUNC_3(VAR_3, FUNC_0(VAR_9));
  VAR_7 = FUNC_3(VAR_3, FUNC_1(VAR_9));

  for (VAR_10 = 0; VAR_10 < VAR_5->reg_size; VAR_10++)
   VAR_8[VAR_10] = (VAR_10 >= 4 ? VAR_7 : VAR_6) >> ((VAR_10 % 4) * 8);
 }
}
