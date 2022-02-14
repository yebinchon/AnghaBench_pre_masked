
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dir; } ;
struct plgpio {unsigned int (* p2o ) (unsigned int) ;int p2o_regs; int lock; TYPE_1__ regs; int base; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct plgpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,unsigned int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned int FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct plgpio *VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5;


 if (VAR_4->p2o && (VAR_4->p2o_regs & VAR_1)) {
  VAR_3 = VAR_4->p2o(VAR_3);
  if (VAR_3 == -1)
   return -VAR_0;
 }

 FUNC_2(&VAR_4->lock, VAR_5);
 FUNC_1(VAR_4->base, VAR_3, VAR_4->regs.dir);
 FUNC_3(&VAR_4->lock, VAR_5);

 return 0;
}
