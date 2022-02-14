
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;
struct brcmnand_host {int cs; struct brcmnand_controller* ctrl; } ;
struct brcmnand_controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcmnand_controller*,int ) ;
 int FUNC_1 (struct brcmnand_controller*,int ,int) ;
 int FUNC_2 (int) ;
 struct nand_chip* FUNC_3 (struct mtd_info*) ;
 struct brcmnand_host* FUNC_4 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_5(struct mtd_info *VAR_2, u64 VAR_3)
{
 struct nand_chip *VAR_4 = FUNC_3(VAR_2);
 struct brcmnand_host *VAR_5 = FUNC_4(VAR_4);
 struct brcmnand_controller *VAR_6 = VAR_5->ctrl;

 FUNC_1(VAR_6, VAR_1,
      (VAR_5->cs << 16) | ((VAR_3 >> 32) & 0xffff));
 (void)FUNC_0(VAR_6, VAR_1);
 FUNC_1(VAR_6, VAR_0,
      FUNC_2(VAR_3));
 (void)FUNC_0(VAR_6, VAR_0);
}
