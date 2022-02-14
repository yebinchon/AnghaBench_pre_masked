
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pin_bank {int slock; } ;
struct gpio_chip {int dummy; } ;


 struct samsung_pin_bank* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct gpio_chip*,unsigned int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct samsung_pin_bank *VAR_2 = FUNC_0(VAR_0);
 unsigned long VAR_3;
 int VAR_4;

 FUNC_2(&VAR_2->slock, VAR_3);
 VAR_4 = FUNC_1(VAR_0, VAR_1, 1);
 FUNC_3(&VAR_2->slock, VAR_3);
 return VAR_4;
}
