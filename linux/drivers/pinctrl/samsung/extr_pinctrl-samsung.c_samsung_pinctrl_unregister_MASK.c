
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pinctrl_drv_data {int nr_banks; int pctl_dev; struct samsung_pin_bank* pin_banks; } ;
struct samsung_pin_bank {int grange; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_0,
          struct samsung_pinctrl_drv_data *VAR_1)
{
 struct samsung_pin_bank *VAR_2 = VAR_1->pin_banks;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->nr_banks; ++VAR_3, ++VAR_2)
  FUNC_0(VAR_1->pctl_dev, &VAR_2->grange);

 return 0;
}
