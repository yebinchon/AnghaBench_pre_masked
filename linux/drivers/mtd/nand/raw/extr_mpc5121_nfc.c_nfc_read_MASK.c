
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef int u16 ;
struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;
struct mpc5121_nfc_prv {scalar_t__ regs; } ;


 int FUNC_0 (scalar_t__) ;
 struct nand_chip* FUNC_1 (struct mtd_info*) ;
 struct mpc5121_nfc_prv* FUNC_2 (struct nand_chip*) ;

__attribute__((used)) static inline u16 FUNC_3(struct mtd_info *VAR_0, uint VAR_1)
{
 struct nand_chip *VAR_2 = FUNC_1(VAR_0);
 struct mpc5121_nfc_prv *VAR_3 = FUNC_2(VAR_2);

 return FUNC_0(VAR_3->regs + VAR_1);
}
