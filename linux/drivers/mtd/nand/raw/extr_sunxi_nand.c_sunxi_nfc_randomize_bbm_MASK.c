
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nand_chip {int dummy; } ;


 int FUNC_0 (struct nand_chip*,int,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_0, int VAR_1, u8 *VAR_2)
{
 u16 VAR_3 = FUNC_0(VAR_0, VAR_1, 1);

 VAR_2[0] ^= VAR_3;
 VAR_2[1] ^= FUNC_1(VAR_3, 8);
}
