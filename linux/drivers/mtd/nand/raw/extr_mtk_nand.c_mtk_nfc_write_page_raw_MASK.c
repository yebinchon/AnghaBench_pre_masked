
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nand_chip {int dummy; } ;
struct mtk_nfc {int buffer; } ;
struct mtd_info {int dummy; } ;


 int FUNC_0 (struct mtd_info*,int const*) ;
 int FUNC_1 (struct mtd_info*,struct nand_chip*,int ,int,int) ;
 struct mtk_nfc* FUNC_2 (struct nand_chip*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_0, const u8 *VAR_1,
      int VAR_2, int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_3(VAR_0);
 struct mtk_nfc *VAR_5 = FUNC_2(VAR_0);

 FUNC_0(VAR_4, VAR_1);
 return FUNC_1(VAR_4, VAR_0, VAR_5->buffer, VAR_3, 1);
}
