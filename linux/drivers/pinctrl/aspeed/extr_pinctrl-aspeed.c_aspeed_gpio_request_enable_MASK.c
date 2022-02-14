
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct aspeed_sig_expr {int dummy; } ;
struct aspeed_pinctrl_data {int pinmux; TYPE_1__* pins; } ;
struct aspeed_pin_desc {int name; struct aspeed_sig_expr*** prios; } ;
struct TYPE_2__ {struct aspeed_pin_desc* drv_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct aspeed_sig_expr const**) ;
 scalar_t__ FUNC_1 (struct aspeed_sig_expr const**) ;
 int FUNC_2 (int *,struct aspeed_sig_expr const*) ;
 char* FUNC_3 (struct aspeed_pin_desc const*) ;
 int FUNC_4 (char*) ;
 struct aspeed_pinctrl_data* FUNC_5 (struct pinctrl_dev*) ;
 int FUNC_6 (char*,int ,unsigned int,char*) ;

int FUNC_7(struct pinctrl_dev *VAR_2,
          struct pinctrl_gpio_range *VAR_3,
          unsigned int VAR_4)
{
 int VAR_5;
 struct aspeed_pinctrl_data *VAR_6 = FUNC_5(VAR_2);
 const struct aspeed_pin_desc *VAR_7 = VAR_6->pins[VAR_4].drv_data;
 const struct aspeed_sig_expr ***VAR_8, **VAR_9, *VAR_10;

 if (!VAR_7)
  return -VAR_0;

 VAR_8 = VAR_7->prios;

 if (!VAR_8)
  return -VAR_1;


 while ((VAR_9 = *VAR_8)) {
  if (FUNC_1(VAR_9))
   break;

  VAR_5 = FUNC_0(&VAR_6->pinmux, VAR_9);
  if (VAR_5)
   return VAR_5;

  VAR_8++;
 }

 if (!VAR_9) {
  char *VAR_11 = FUNC_3(VAR_7);

  FUNC_6("No GPIO signal type found on pin %s (%d). Found: %s\n",
   VAR_7->name, VAR_4, VAR_11);
  FUNC_4(VAR_11);

  return -VAR_1;
 }

 VAR_10 = *VAR_9;






 if (!VAR_10)
  return 0;





 return FUNC_2(&VAR_6->pinmux, VAR_10);
}
