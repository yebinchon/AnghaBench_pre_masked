
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct mrfld_pinctrl {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mrfld_pinctrl*,unsigned int) ;
 int FUNC_1 (struct mrfld_pinctrl*,unsigned int,int,int) ;
 struct mrfld_pinctrl* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_4,
         struct pinctrl_gpio_range *VAR_5,
         unsigned int VAR_6)
{
 struct mrfld_pinctrl *VAR_7 = FUNC_2(VAR_4);
 u32 VAR_8 = VAR_0 << VAR_2;
 u32 VAR_9 = VAR_1;
 unsigned long VAR_10;

 if (!FUNC_0(VAR_7, VAR_6))
  return -VAR_3;

 FUNC_3(&VAR_7->lock, VAR_10);
 FUNC_1(VAR_7, VAR_6, VAR_8, VAR_9);
 FUNC_4(&VAR_7->lock, VAR_10);

 return 0;
}
