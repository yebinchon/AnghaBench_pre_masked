
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct mtk_nfc_nand_chip {int * sels; } ;
struct mtk_nfc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct mtk_nfc* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct mtk_nfc*,int ,int ) ;
 struct mtk_nfc_nand_chip* FUNC_4 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_5(struct nand_chip *VAR_1, int VAR_2)
{
 struct mtk_nfc *VAR_3 = FUNC_1(VAR_1);
 struct mtk_nfc_nand_chip *VAR_4 = FUNC_4(VAR_1);

 if (VAR_2 < 0)
  return;

 FUNC_0(FUNC_2(VAR_1));

 FUNC_3(VAR_3, VAR_4->sels[VAR_2], VAR_0);
}
