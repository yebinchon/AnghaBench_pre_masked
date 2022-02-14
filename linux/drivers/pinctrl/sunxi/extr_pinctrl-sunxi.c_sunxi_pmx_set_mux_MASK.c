
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_pinctrl_group {int pin; int name; } ;
struct sunxi_pinctrl_function {int name; } ;
struct sunxi_pinctrl {struct sunxi_pinctrl_function* functions; struct sunxi_pinctrl_group* groups; } ;
struct sunxi_desc_function {int muxval; } ;
struct pinctrl_dev {int dummy; } ;


 int VAR_0 ;
 struct sunxi_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 struct sunxi_desc_function* FUNC_1 (struct sunxi_pinctrl*,int ,int ) ;
 int FUNC_2 (struct pinctrl_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_1,
        unsigned VAR_2,
        unsigned VAR_3)
{
 struct sunxi_pinctrl *VAR_4 = FUNC_0(VAR_1);
 struct sunxi_pinctrl_group *VAR_5 = VAR_4->groups + VAR_3;
 struct sunxi_pinctrl_function *VAR_6 = VAR_4->functions + VAR_2;
 struct sunxi_desc_function *VAR_7 =
  FUNC_1(VAR_4,
        VAR_5->name,
        VAR_6->name);

 if (!VAR_7)
  return -VAR_0;

 FUNC_2(VAR_1, VAR_5->pin, VAR_7->muxval);

 return 0;
}
