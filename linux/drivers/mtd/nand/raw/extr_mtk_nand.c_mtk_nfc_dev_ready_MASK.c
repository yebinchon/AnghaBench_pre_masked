
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct mtk_nfc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mtk_nfc* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct mtk_nfc*,int ) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_2)
{
 struct mtk_nfc *VAR_3 = FUNC_0(VAR_2);

 if (FUNC_1(VAR_3, VAR_0) & VAR_1)
  return 0;

 return 1;
}
