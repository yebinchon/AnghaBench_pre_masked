
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct nand_chip {int dummy; } ;


 int FUNC_0 (struct nand_chip*,int,int,int *,int) ;
 int FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int
FUNC_2(struct nand_chip *VAR_0, uint32_t VAR_1,
     uint32_t VAR_2, uint8_t *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_4, VAR_1,
    VAR_3 + VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 return FUNC_1(VAR_0);
}
