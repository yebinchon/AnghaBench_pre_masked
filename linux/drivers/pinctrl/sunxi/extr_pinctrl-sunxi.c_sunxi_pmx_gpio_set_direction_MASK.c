
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_pinctrl {int dummy; } ;
struct sunxi_desc_function {int muxval; } ;
struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;


 int VAR_0 ;
 struct sunxi_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 struct sunxi_desc_function* FUNC_1 (struct sunxi_pinctrl*,unsigned int,char const*) ;
 int FUNC_2 (struct pinctrl_dev*,unsigned int,int ) ;

__attribute__((used)) static int
FUNC_3(struct pinctrl_dev *VAR_1,
   struct pinctrl_gpio_range *VAR_2,
   unsigned VAR_3,
   bool VAR_4)
{
 struct sunxi_pinctrl *VAR_5 = FUNC_0(VAR_1);
 struct sunxi_desc_function *VAR_6;
 const char *VAR_7;

 if (VAR_4)
  VAR_7 = "gpio_in";
 else
  VAR_7 = "gpio_out";

 VAR_6 = FUNC_1(VAR_5, VAR_3, VAR_7);
 if (!VAR_6)
  return -VAR_0;

 FUNC_2(VAR_1, VAR_3, VAR_6->muxval);

 return 0;
}
