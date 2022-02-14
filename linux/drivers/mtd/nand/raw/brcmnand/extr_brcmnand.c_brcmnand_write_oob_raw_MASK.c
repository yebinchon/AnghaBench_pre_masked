
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct nand_chip {int page_shift; scalar_t__ oob_poi; } ;
struct mtd_info {int dummy; } ;
struct brcmnand_host {int dummy; } ;


 int FUNC_0 (struct brcmnand_host*,int) ;
 int FUNC_1 (struct mtd_info*,struct nand_chip*,int,int *,int *) ;
 struct brcmnand_host* FUNC_2 (struct nand_chip*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_0, int VAR_1)
{
 struct mtd_info *VAR_2 = FUNC_3(VAR_0);
 struct brcmnand_host *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 FUNC_0(VAR_3, 0);
 VAR_4 = FUNC_1(VAR_2, VAR_0, (u64)VAR_1 << VAR_0->page_shift, ((void*)0),
     (u8 *)VAR_0->oob_poi);
 FUNC_0(VAR_3, 1);

 return VAR_4;
}
