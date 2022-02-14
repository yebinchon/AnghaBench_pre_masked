
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nand_chip {int controller; } ;
struct atmel_nand_controller {TYPE_3__* caps; } ;
struct atmel_nand {TYPE_2__* activecs; } ;
struct TYPE_6__ {scalar_t__ cle_offs; scalar_t__ ale_offs; } ;
struct TYPE_4__ {scalar_t__ virt; } ;
struct TYPE_5__ {TYPE_1__ io; scalar_t__ csgpio; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (scalar_t__,int) ;
 struct atmel_nand* FUNC_1 (struct nand_chip*) ;
 struct atmel_nand_controller* FUNC_2 (int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_4, int VAR_5,
    unsigned int VAR_6)
{
 struct atmel_nand *VAR_7 = FUNC_1(VAR_4);
 struct atmel_nand_controller *VAR_8;

 VAR_8 = FUNC_2(VAR_4->controller);

 if ((VAR_6 & VAR_2) && VAR_7->activecs->csgpio) {
  if (VAR_6 & VAR_3)
   FUNC_0(VAR_7->activecs->csgpio, 0);
  else
   FUNC_0(VAR_7->activecs->csgpio, 1);
 }

 if (VAR_6 & VAR_0)
  FUNC_3(VAR_5, VAR_7->activecs->io.virt + VAR_8->caps->ale_offs);
 else if (VAR_6 & VAR_1)
  FUNC_3(VAR_5, VAR_7->activecs->io.virt + VAR_8->caps->cle_offs);
}
