
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan743x_gpio {int gpio_cfg0; int gpio_cfg1; int gpio_cfg2; int gpio_cfg3; int gpio_lock; } ;
struct lan743x_adapter {struct lan743x_gpio gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lan743x_adapter*,int ,int) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct lan743x_adapter *VAR_4)
{
 struct lan743x_gpio *VAR_5 = &VAR_4->gpio;

 FUNC_1(&VAR_5->gpio_lock);

 VAR_5->gpio_cfg0 = 0;
 VAR_5->gpio_cfg1 = 0x0FFF0000;
 VAR_5->gpio_cfg2 = 0;
 VAR_5->gpio_cfg3 = 0;
 FUNC_0(VAR_4, VAR_0, VAR_5->gpio_cfg0);
 FUNC_0(VAR_4, VAR_1, VAR_5->gpio_cfg1);
 FUNC_0(VAR_4, VAR_2, VAR_5->gpio_cfg2);
 FUNC_0(VAR_4, VAR_3, VAR_5->gpio_cfg3);

 return 0;
}
