
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nand_chip {int dummy; } ;
struct nand_bbt_descr {int dummy; } ;


 int FUNC_0 (struct nand_chip*,int *,struct nand_bbt_descr*,int) ;
 int * FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static inline int FUNC_2(struct nand_chip *VAR_0,
      struct nand_bbt_descr *VAR_1)
{
 u8 *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_0, VAR_2, VAR_1, -1);
}
