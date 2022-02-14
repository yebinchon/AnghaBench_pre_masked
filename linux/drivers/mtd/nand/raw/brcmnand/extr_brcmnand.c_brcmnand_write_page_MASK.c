
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u32 ;
struct nand_chip {int * oob_poi; } ;
struct mtd_info {int dummy; } ;
struct brcmnand_host {int last_addr; } ;


 int FUNC_0 (struct mtd_info*,struct nand_chip*,int ,int const*,void*) ;
 struct brcmnand_host* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct nand_chip*,int,int ,int *,int ) ;
 int FUNC_3 (struct nand_chip*) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_0, const uint8_t *VAR_1,
          int VAR_2, int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_4(VAR_0);
 struct brcmnand_host *VAR_5 = FUNC_1(VAR_0);
 void *VAR_6 = VAR_2 ? VAR_0->oob_poi : ((void*)0);

 FUNC_2(VAR_0, VAR_3, 0, ((void*)0), 0);
 FUNC_0(VAR_4, VAR_0, VAR_5->last_addr, (const u32 *)VAR_1, VAR_6);

 return FUNC_3(VAR_0);
}
