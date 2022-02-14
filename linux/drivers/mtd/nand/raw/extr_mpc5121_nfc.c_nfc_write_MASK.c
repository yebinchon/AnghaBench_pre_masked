
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef int u16 ;
struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;
struct mpc5121_nfc_prv {scalar_t__ regs; } ;


 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 struct mpc5121_nfc_prv* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_3(struct mtd_info *VAR_0, uint VAR_1, u16 VAR_2)
{
 struct nand_chip *VAR_3 = FUNC_0(VAR_0);
 struct mpc5121_nfc_prv *VAR_4 = FUNC_1(VAR_3);

 FUNC_2(VAR_4->regs + VAR_1, VAR_2);
}
