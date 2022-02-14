
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wdata; } ;
struct plgpio {unsigned int (* p2o ) (unsigned int) ;int p2o_regs; TYPE_1__ regs; int base; } ;
struct gpio_chip {unsigned int ngpio; } ;


 int VAR_0 ;
 struct plgpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,unsigned int,int ) ;
 int FUNC_2 (int ,unsigned int,int ) ;
 unsigned int FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_1, unsigned VAR_2, int VAR_3)
{
 struct plgpio *VAR_4 = FUNC_0(VAR_1);

 if (VAR_2 >= VAR_1->ngpio)
  return;


 if (VAR_4->p2o && (VAR_4->p2o_regs & VAR_0)) {
  VAR_2 = VAR_4->p2o(VAR_2);
  if (VAR_2 == -1)
   return;
 }

 if (VAR_3)
  FUNC_2(VAR_4->base, VAR_2, VAR_4->regs.wdata);
 else
  FUNC_1(VAR_4->base, VAR_2, VAR_4->regs.wdata);
}
