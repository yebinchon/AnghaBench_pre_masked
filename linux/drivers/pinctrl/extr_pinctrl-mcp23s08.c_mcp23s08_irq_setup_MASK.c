
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int parent; } ;
struct mcp23s08 {int irq; scalar_t__ irq_active_high; struct gpio_chip chip; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int ,unsigned long,int ,struct mcp23s08*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct mcp23s08 *VAR_5)
{
 struct gpio_chip *VAR_6 = &VAR_5->chip;
 int VAR_7;
 unsigned long VAR_8 = VAR_0 | VAR_1;

 if (VAR_5->irq_active_high)
  VAR_8 |= VAR_2;
 else
  VAR_8 |= VAR_3;

 VAR_7 = FUNC_2(VAR_6->parent, VAR_5->irq, ((void*)0),
     VAR_4,
     VAR_8, FUNC_1(VAR_6->parent), VAR_5);
 if (VAR_7 != 0) {
  FUNC_0(VAR_6->parent, "unable to request IRQ#%d: %d\n",
   VAR_5->irq, VAR_7);
  return VAR_7;
 }

 return 0;
}
