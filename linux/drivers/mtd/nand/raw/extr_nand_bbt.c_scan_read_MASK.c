
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int dummy; } ;
struct nand_bbt_descr {int options; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct nand_chip*,int *,int ,struct nand_bbt_descr*) ;
 int FUNC_1 (struct nand_chip*,int *,int ,size_t) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_1, uint8_t *VAR_2, loff_t VAR_3,
       size_t VAR_4, struct nand_bbt_descr *VAR_5)
{
 if (VAR_5->options & VAR_0)
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5);
 else
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
}
