
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {scalar_t__ base; } ;
struct atlas7_gpio_chip {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct atlas7_gpio_chip*,unsigned int) ;
 int FUNC_1 (struct atlas7_gpio_chip*,unsigned int) ;
 int FUNC_2 (struct atlas7_gpio_chip*,unsigned int) ;
 struct atlas7_gpio_chip* FUNC_3 (struct gpio_chip*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct gpio_chip *VAR_1,
    unsigned int VAR_2)
{
 struct atlas7_gpio_chip *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;
 unsigned long VAR_5;

 VAR_4 = FUNC_2(VAR_3, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 if (FUNC_4(VAR_1->base + VAR_2))
  return -VAR_0;

 FUNC_5(&VAR_3->lock, VAR_5);





 FUNC_1(VAR_3, VAR_2);
 FUNC_0(VAR_3, VAR_2);

 FUNC_6(&VAR_3->lock, VAR_5);

 return 0;
}
