
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nand_chip {int * oob_poi; } ;


 int FUNC_0 (struct nand_chip*,int const*,int *) ;
 int FUNC_1 (struct nand_chip*,int,int) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_0, const u8 *VAR_1,
        int VAR_2, int VAR_3)
{
 u8 *VAR_4 = VAR_0->oob_poi;

 FUNC_0(VAR_0, VAR_1, VAR_4);

 return FUNC_1(VAR_0, VAR_3, 1);
}
