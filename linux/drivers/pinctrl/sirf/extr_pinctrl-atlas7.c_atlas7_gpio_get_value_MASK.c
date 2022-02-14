
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gpio_chip {int dummy; } ;
struct atlas7_gpio_chip {int lock; } ;
struct atlas7_gpio_bank {int gpio_offset; } ;


 int VAR_0 ;
 int FUNC_0 (struct atlas7_gpio_bank*,int) ;
 struct atlas7_gpio_bank* FUNC_1 (struct atlas7_gpio_chip*,unsigned int) ;
 struct atlas7_gpio_chip* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_1,
     unsigned int VAR_2)
{
 struct atlas7_gpio_chip *VAR_3 = FUNC_2(VAR_1);
 struct atlas7_gpio_bank *VAR_4;
 u32 VAR_5, VAR_6;
 unsigned long VAR_7;

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 VAR_6 = VAR_2 - VAR_4->gpio_offset;

 FUNC_3(&VAR_3->lock, VAR_7);

 VAR_5 = FUNC_5(FUNC_0(VAR_4, VAR_6));

 FUNC_4(&VAR_3->lock, VAR_7);

 return !!(VAR_5 & VAR_0);
}
