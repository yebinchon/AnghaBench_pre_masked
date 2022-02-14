
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct aspeed_sig_expr {int dummy; } ;
struct TYPE_5__ {struct aspeed_pin_function* functions; struct aspeed_pin_group* groups; } ;
struct aspeed_pinctrl_data {TYPE_2__ pinmux; TYPE_1__* pins; } ;
struct aspeed_pin_group {int npins; int* pins; } ;
struct aspeed_pin_function {int name; } ;
struct aspeed_pin_desc {int name; struct aspeed_sig_expr*** prios; } ;
struct TYPE_4__ {struct aspeed_pin_desc* drv_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,struct aspeed_sig_expr const**) ;
 struct aspeed_sig_expr* FUNC_1 (struct aspeed_sig_expr const**,int ) ;
 int FUNC_2 (TYPE_2__*,struct aspeed_sig_expr const*) ;
 char* FUNC_3 (struct aspeed_pin_desc const*) ;
 char* FUNC_4 (struct aspeed_pin_desc const*) ;
 int FUNC_5 (char*) ;
 struct aspeed_pinctrl_data* FUNC_6 (struct pinctrl_dev*) ;
 int FUNC_7 (char*,int,int ) ;
 int FUNC_8 (char*,int ,int ,int,char*,char*) ;

int FUNC_9(struct pinctrl_dev *VAR_2, unsigned int VAR_3,
     unsigned int VAR_4)
{
 int VAR_5;
 int VAR_6;
 struct aspeed_pinctrl_data *VAR_7 = FUNC_6(VAR_2);
 const struct aspeed_pin_group *VAR_8 = &VAR_7->pinmux.groups[VAR_4];
 const struct aspeed_pin_function *VAR_9 =
  &VAR_7->pinmux.functions[VAR_3];

 for (VAR_5 = 0; VAR_5 < VAR_8->npins; VAR_5++) {
  int VAR_10 = VAR_8->pins[VAR_5];
  const struct aspeed_pin_desc *VAR_11 = VAR_7->pins[VAR_10].drv_data;
  const struct aspeed_sig_expr *VAR_12 = ((void*)0);
  const struct aspeed_sig_expr **VAR_13;
  const struct aspeed_sig_expr ***VAR_14;

  FUNC_7("Muxing pin %d for %s\n", VAR_10, VAR_9->name);

  if (!VAR_11)
   return -VAR_0;

  VAR_14 = VAR_11->prios;

  if (!VAR_14)
   continue;


  while ((VAR_13 = *VAR_14)) {
   VAR_12 = FUNC_1(VAR_13, VAR_9->name);

   if (VAR_12)
    break;

   VAR_6 = FUNC_0(&VAR_7->pinmux, VAR_13);
   if (VAR_6)
    return VAR_6;

   VAR_14++;
  }

  if (!VAR_12) {
   char *VAR_15 = FUNC_3(VAR_11);
   char *VAR_16 = FUNC_4(VAR_11);

   FUNC_8("No function %s found on pin %s (%d). Found signal(s) %s for function(s) %s\n",
    VAR_9->name, VAR_11->name, VAR_10, VAR_16,
    VAR_15);
   FUNC_5(VAR_16);
   FUNC_5(VAR_15);

   return -VAR_1;
  }

  VAR_6 = FUNC_2(&VAR_7->pinmux, VAR_12);
  if (VAR_6)
   return VAR_6;
 }

 return 0;
}
