
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct nand_chip {int options; int controller; } ;
struct atmel_nand_controller {scalar_t__ dmac; } ;
struct atmel_nand {TYPE_2__* activecs; } ;
struct TYPE_3__ {int virt; int dma; } ;
struct TYPE_4__ {TYPE_1__ io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct atmel_nand_controller*,void*,int ,int,int ) ;
 int FUNC_1 (int ,int const*,int) ;
 int FUNC_2 (int ,int const*,int) ;
 struct atmel_nand* FUNC_3 (struct nand_chip*) ;
 struct atmel_nand_controller* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int const*) ;

__attribute__((used)) static void FUNC_6(struct nand_chip *VAR_3, const u8 *VAR_4, int VAR_5)
{
 struct atmel_nand *VAR_6 = FUNC_3(VAR_3);
 struct atmel_nand_controller *VAR_7;

 VAR_7 = FUNC_4(VAR_3->controller);






 if (VAR_7->dmac && FUNC_5(VAR_4) &&
     VAR_5 >= VAR_1 &&
     !FUNC_0(VAR_7, (void *)VAR_4, VAR_6->activecs->io.dma,
         VAR_5, VAR_0))
  return;

 if (VAR_3->options & VAR_2)
  FUNC_1(VAR_6->activecs->io.virt, VAR_4, VAR_5 / 2);
 else
  FUNC_2(VAR_6->activecs->io.virt, VAR_4, VAR_5);
}
