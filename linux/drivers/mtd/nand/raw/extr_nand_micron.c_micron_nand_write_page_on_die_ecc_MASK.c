
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int dummy; } ;


 int FUNC_0 (struct nand_chip*,int) ;
 int FUNC_1 (struct nand_chip*,int const*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct nand_chip *VAR_0, const uint8_t *VAR_1,
      int VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, 1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_0, 0);

 return VAR_4;
}
