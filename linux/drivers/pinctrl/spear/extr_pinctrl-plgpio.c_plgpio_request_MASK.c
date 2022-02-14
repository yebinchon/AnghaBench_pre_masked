
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enb; } ;
struct plgpio {unsigned int (* p2o ) (unsigned int) ;int p2o_regs; int clk; int lock; TYPE_1__ regs; int base; } ;
struct gpio_chip {unsigned int ngpio; int base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct plgpio* FUNC_3 (struct gpio_chip*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct gpio_chip*,unsigned int) ;
 int FUNC_7 (int ,unsigned int,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 unsigned int FUNC_10 (unsigned int) ;

__attribute__((used)) static int FUNC_11(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct plgpio *VAR_4 = FUNC_3(VAR_2);
 int VAR_5 = VAR_2->base + VAR_3;
 unsigned long VAR_6;
 int VAR_7 = 0;

 if (VAR_3 >= VAR_2->ngpio)
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7)
  return VAR_7;

 if (!FUNC_0(VAR_4->clk)) {
  VAR_7 = FUNC_2(VAR_4->clk);
  if (VAR_7)
   goto err0;
 }

 if (VAR_4->regs.enb == -1)
  return 0;




 VAR_7 = FUNC_6(VAR_2, VAR_3);
 if (VAR_7)
  goto err1;


 if (VAR_4->p2o && (VAR_4->p2o_regs & VAR_1)) {
  VAR_3 = VAR_4->p2o(VAR_3);
  if (VAR_3 == -1) {
   VAR_7 = -VAR_0;
   goto err1;
  }
 }

 FUNC_8(&VAR_4->lock, VAR_6);
 FUNC_7(VAR_4->base, VAR_3, VAR_4->regs.enb);
 FUNC_9(&VAR_4->lock, VAR_6);
 return 0;

err1:
 if (!FUNC_0(VAR_4->clk))
  FUNC_1(VAR_4->clk);
err0:
 FUNC_4(VAR_5);
 return VAR_7;
}
