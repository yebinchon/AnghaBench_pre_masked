
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ndfc_controller {scalar_t__ ndfcbase; } ;
struct nand_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct ndfc_controller* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_1, const uint8_t *VAR_2, int VAR_3)
{
 struct ndfc_controller *VAR_4 = FUNC_0(VAR_1);
 uint32_t *VAR_5 = (uint32_t *) VAR_2;

 for(;VAR_3 > 0; VAR_3 -= 4)
  FUNC_1(VAR_4->ndfcbase + VAR_0, *VAR_5++);
}
