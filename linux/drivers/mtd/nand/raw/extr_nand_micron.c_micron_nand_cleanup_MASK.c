
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_chip {int dummy; } ;
struct TYPE_2__ {struct micron_nand* rawbuf; } ;
struct micron_nand {TYPE_1__ ecc; } ;


 int FUNC_0 (struct micron_nand*) ;
 struct micron_nand* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_0)
{
 struct micron_nand *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->ecc.rawbuf);
 FUNC_0(VAR_1);
}
