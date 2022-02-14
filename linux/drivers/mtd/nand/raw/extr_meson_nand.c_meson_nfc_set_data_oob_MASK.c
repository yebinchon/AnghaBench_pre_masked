
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const u8 ;
struct TYPE_2__ {int bytes; int steps; int size; } ;
struct nand_chip {TYPE_1__ ecc; } ;


 int FUNC_0 (int const*,int const*,int) ;
 int const* FUNC_1 (struct nand_chip*,int) ;
 int const* FUNC_2 (struct nand_chip*,int) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_0,
       const u8 *VAR_1, u8 *VAR_2)
{
 int VAR_3, VAR_4 = 0;
 u8 *VAR_5, *VAR_6;

 VAR_4 = VAR_0->ecc.bytes + 2;
 for (VAR_3 = 0; VAR_3 < VAR_0->ecc.steps; VAR_3++) {
  if (VAR_1) {
   VAR_5 = FUNC_1(VAR_0, VAR_3);
   FUNC_0(VAR_5, VAR_1, VAR_0->ecc.size);
   VAR_1 += VAR_0->ecc.size;
  }
  VAR_6 = FUNC_2(VAR_0, VAR_3);
  FUNC_0(VAR_6, VAR_2, VAR_4);
  VAR_2 += VAR_4;
 }
}
