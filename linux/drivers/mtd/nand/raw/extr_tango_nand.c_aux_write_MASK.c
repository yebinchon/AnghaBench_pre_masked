
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nand_chip {int dummy; } ;


 int FUNC_0 (struct nand_chip*,int,int *,int ,int) ;
 int FUNC_1 (struct nand_chip*,int const*,int) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_0, const u8 **VAR_1, int VAR_2, int *VAR_3)
{
 *VAR_3 += VAR_2;

 if (!*VAR_1) {

  FUNC_0(VAR_0, *VAR_3, ((void*)0), 0, 0);
 } else {
  FUNC_1(VAR_0, *VAR_1, VAR_2);
  *VAR_1 += VAR_2;
 }
}
