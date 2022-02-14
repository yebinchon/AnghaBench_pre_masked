
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct nand_chip {int page_shift; scalar_t__ oob_poi; } ;
struct mtd_info {int writesize; } ;
struct brcmnand_host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,struct nand_chip*,int,int,int *,int *) ;
 int FUNC_1 (struct brcmnand_host*,int) ;
 struct brcmnand_host* FUNC_2 (struct nand_chip*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_1, int VAR_2)
{
 struct mtd_info *VAR_3 = FUNC_3(VAR_1);
 struct brcmnand_host *VAR_4 = FUNC_2(VAR_1);

 FUNC_1(VAR_4, 0);
 FUNC_0(VAR_3, VAR_1, (u64)VAR_2 << VAR_1->page_shift,
  VAR_3->writesize >> VAR_0,
  ((void*)0), (u8 *)VAR_1->oob_poi);
 FUNC_1(VAR_4, 1);
 return 0;
}
