
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
typedef int u32 ;
struct nand_chip {scalar_t__ oob_poi; } ;
struct mtd_info {int writesize; } ;
struct brcmnand_host {int last_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,struct nand_chip*,int ,int,int *,int *) ;
 int FUNC_1 (struct brcmnand_host*,int) ;
 struct brcmnand_host* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*,int,int ,int *,int ) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_1, uint8_t *VAR_2,
      int VAR_3, int VAR_4)
{
 struct brcmnand_host *VAR_5 = FUNC_2(VAR_1);
 struct mtd_info *VAR_6 = FUNC_4(VAR_1);
 u8 *VAR_7 = VAR_3 ? (u8 *)VAR_1->oob_poi : ((void*)0);
 int VAR_8;

 FUNC_3(VAR_1, VAR_4, 0, ((void*)0), 0);

 FUNC_1(VAR_5, 0);
 VAR_8 = FUNC_0(VAR_6, VAR_1, VAR_5->last_addr,
   VAR_6->writesize >> VAR_0, (u32 *)VAR_2, VAR_7);
 FUNC_1(VAR_5, 1);
 return VAR_8;
}
