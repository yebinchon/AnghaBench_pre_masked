
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct nand_chip {int options; } ;
struct atmel_nand {TYPE_2__* activecs; } ;
struct TYPE_3__ {int virt; } ;
struct TYPE_4__ {TYPE_1__ io; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 struct atmel_nand* FUNC_2 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_1, u8 VAR_2)
{
 struct atmel_nand *VAR_3 = FUNC_2(VAR_1);

 if (VAR_1->options & VAR_0)
  FUNC_0(VAR_2 | (VAR_2 << 8), VAR_3->activecs->io.virt);
 else
  FUNC_1(VAR_2, VAR_3->activecs->io.virt);
}
