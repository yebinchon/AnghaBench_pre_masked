
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tango_chip {scalar_t__ base; } ;
struct nand_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int *,int) ;
 struct tango_chip* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_1, u8 *VAR_2, int VAR_3)
{
 struct tango_chip *VAR_4 = FUNC_1(VAR_1);

 FUNC_0(VAR_4->base + VAR_0, VAR_2, VAR_3);
}
