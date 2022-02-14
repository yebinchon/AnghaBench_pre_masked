
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xway_nand_data {scalar_t__ nandaddr; } ;
struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;


 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 struct xway_nand_data* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_0, int VAR_1, u8 VAR_2)
{
 struct nand_chip *VAR_3 = FUNC_0(VAR_0);
 struct xway_nand_data *VAR_4 = FUNC_1(VAR_3);

 FUNC_2(VAR_2, VAR_4->nandaddr + VAR_1);
}
