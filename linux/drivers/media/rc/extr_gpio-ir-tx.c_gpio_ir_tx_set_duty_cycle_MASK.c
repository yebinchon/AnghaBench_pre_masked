
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rc_dev {struct gpio_ir* priv; } ;
struct gpio_ir {int duty_cycle; } ;



__attribute__((used)) static int FUNC_0(struct rc_dev *VAR_0, u32 VAR_1)
{
 struct gpio_ir *VAR_2 = VAR_0->priv;

 VAR_2->duty_cycle = VAR_1;

 return 0;
}
