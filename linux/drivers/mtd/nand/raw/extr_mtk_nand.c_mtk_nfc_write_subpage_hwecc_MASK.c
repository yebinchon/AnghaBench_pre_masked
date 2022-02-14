
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nand_chip {int dummy; } ;
struct mtk_nfc {int buffer; } ;
struct mtd_info {int dummy; } ;


 int FUNC_0 (struct mtd_info*,int ,int ,int const*) ;
 int FUNC_1 (struct mtd_info*,struct nand_chip*,int ,int,int) ;
 struct mtk_nfc* FUNC_2 (struct nand_chip*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_0, u32 VAR_1,
           u32 VAR_2, const u8 *VAR_3,
           int VAR_4, int VAR_5)
{
 struct mtd_info *VAR_6 = FUNC_3(VAR_0);
 struct mtk_nfc *VAR_7 = FUNC_2(VAR_0);
 int VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_1, VAR_2, VAR_3);
 if (VAR_8 < 0)
  return VAR_8;


 return FUNC_1(VAR_6, VAR_0, VAR_7->buffer, VAR_5, 1);
}
