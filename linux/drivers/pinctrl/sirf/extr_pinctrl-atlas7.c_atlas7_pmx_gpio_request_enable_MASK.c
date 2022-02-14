
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct pinctrl_gpio_range {size_t npins; size_t* pins; } ;
struct pinctrl_dev {int dummy; } ;
struct atlas7_pmx {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atlas7_pmx*,size_t,int ) ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (int ,char*,size_t) ;
 struct atlas7_pmx* FUNC_3 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_2,
  struct pinctrl_gpio_range *VAR_3, u32 VAR_4)
{
 struct atlas7_pmx *VAR_5 = FUNC_3(VAR_2);
 u32 VAR_6;

 FUNC_1(VAR_5->dev,
  "atlas7_pmx_gpio_request_enable: pin=%d\n", VAR_4);
 for (VAR_6 = 0; VAR_6 < VAR_3->npins; VAR_6++) {
  if (VAR_4 == VAR_3->pins[VAR_6])
   break;
 }

 if (VAR_6 >= VAR_3->npins) {
  FUNC_2(VAR_5->dev,
   "The pin#%d could not be requested as GPIO!!\n",
   VAR_4);
  return -VAR_0;
 }

 FUNC_0(VAR_5, VAR_4, VAR_1);

 return 0;
}
