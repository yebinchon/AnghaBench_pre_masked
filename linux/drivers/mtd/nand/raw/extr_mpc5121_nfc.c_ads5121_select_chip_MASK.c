
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;
struct mpc5121_nfc_prv {int csreg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nand_chip*,int) ;
 struct mpc5121_nfc_prv* FUNC_2 (struct nand_chip*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct nand_chip *VAR_0, int VAR_1)
{
 struct mtd_info *VAR_2 = FUNC_3(VAR_0);
 struct mpc5121_nfc_prv *VAR_3 = FUNC_2(VAR_0);
 u8 VAR_4;

 VAR_4 = FUNC_0(VAR_3->csreg);
 VAR_4 |= 0x0F;

 if (VAR_1 >= 0) {
  FUNC_1(VAR_0, 0);
  VAR_4 &= ~(1 << VAR_1);
 } else
  FUNC_1(VAR_0, -1);

 FUNC_4(VAR_3->csreg, VAR_4);
}
