
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pinctrl_drv_data {int nr_functions; } ;
struct pinctrl_dev {int dummy; } ;


 struct samsung_pinctrl_drv_data* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0)
{
 struct samsung_pinctrl_drv_data *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 return VAR_1->nr_functions;
}
