
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct mtk_nfc {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mtk_nfc*) ;
 int FUNC_1 (struct mtk_nfc*,int) ;
 int FUNC_2 (struct mtk_nfc*,int) ;
 struct mtk_nfc* FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct mtk_nfc*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct nand_chip *VAR_4, int VAR_5,
        unsigned int VAR_6)
{
 struct mtk_nfc *VAR_7 = FUNC_3(VAR_4);

 if (VAR_6 & VAR_1) {
  FUNC_1(VAR_7, VAR_5);
 } else if (VAR_6 & VAR_2) {
  FUNC_0(VAR_7);

  FUNC_4(VAR_7, VAR_0, VAR_3);
  FUNC_2(VAR_7, VAR_5);
 }
}
