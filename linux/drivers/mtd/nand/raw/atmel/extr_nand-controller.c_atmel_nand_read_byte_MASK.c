
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct nand_chip {int dummy; } ;
struct atmel_nand {TYPE_2__* activecs; } ;
struct TYPE_3__ {int virt; } ;
struct TYPE_4__ {TYPE_1__ io; } ;


 int FUNC_0 (int ) ;
 struct atmel_nand* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static u8 FUNC_2(struct nand_chip *VAR_0)
{
 struct atmel_nand *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1->activecs->io.virt);
}
