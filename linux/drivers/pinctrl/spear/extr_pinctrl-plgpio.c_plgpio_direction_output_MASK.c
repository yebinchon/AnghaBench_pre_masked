
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dir; int wdata; } ;
struct plgpio {unsigned int (* p2o ) (unsigned int) ;int p2o_regs; int lock; TYPE_1__ regs; int base; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct plgpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,unsigned int,int ) ;
 int FUNC_2 (int ,unsigned int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned int FUNC_5 (unsigned int) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_3, unsigned VAR_4,
  int VAR_5)
{
 struct plgpio *VAR_6 = FUNC_0(VAR_3);
 unsigned long VAR_7;
 unsigned VAR_8 = VAR_4, VAR_9 = VAR_4, VAR_10;


 if (VAR_6->p2o && (VAR_6->p2o_regs & (VAR_1 | VAR_2))) {
  VAR_10 = VAR_6->p2o(VAR_4);
  if (VAR_10 == -1)
   return -VAR_0;

  if (VAR_6->p2o_regs & VAR_1)
   VAR_8 = VAR_10;
  if (VAR_6->p2o_regs & VAR_2)
   VAR_9 = VAR_10;
 }

 FUNC_3(&VAR_6->lock, VAR_7);
 if (VAR_5)
  FUNC_2(VAR_6->base, VAR_9,
    VAR_6->regs.wdata);
 else
  FUNC_1(VAR_6->base, VAR_9,
    VAR_6->regs.wdata);

 FUNC_1(VAR_6->base, VAR_8, VAR_6->regs.dir);
 FUNC_4(&VAR_6->lock, VAR_7);

 return 0;
}
