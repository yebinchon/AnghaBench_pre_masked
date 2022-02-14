
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enb; } ;
struct plgpio {unsigned int (* p2o ) (unsigned int) ;int p2o_regs; int clk; int lock; TYPE_1__ regs; int base; } ;
struct gpio_chip {unsigned int ngpio; int base; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct plgpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,unsigned int,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 unsigned int FUNC_7 (unsigned int) ;

__attribute__((used)) static void FUNC_8(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct plgpio *VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = VAR_1->base + VAR_2;
 unsigned long VAR_5;

 if (VAR_2 >= VAR_1->ngpio)
  return;

 if (VAR_3->regs.enb == -1)
  goto disable_clk;


 if (VAR_3->p2o && (VAR_3->p2o_regs & VAR_0)) {
  VAR_2 = VAR_3->p2o(VAR_2);
  if (VAR_2 == -1)
   return;
 }

 FUNC_5(&VAR_3->lock, VAR_5);
 FUNC_4(VAR_3->base, VAR_2, VAR_3->regs.enb);
 FUNC_6(&VAR_3->lock, VAR_5);

disable_clk:
 if (!FUNC_0(VAR_3->clk))
  FUNC_1(VAR_3->clk);

 FUNC_3(VAR_4);
}
