
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ npins; TYPE_4__* gc; int name; scalar_t__ base; scalar_t__ pin_base; scalar_t__ id; } ;
struct rza2_pinctrl_priv {scalar_t__ npins; TYPE_2__* dev; TYPE_1__ gpio_range; int pctl; } ;
struct of_phandle_args {scalar_t__* args; } ;
struct device_node {int dummy; } ;
struct TYPE_10__ {scalar_t__ ngpio; int label; TYPE_2__* parent; struct device_node* of_node; } ;
struct TYPE_9__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,TYPE_4__*,struct rza2_pinctrl_priv*) ;
 int FUNC_3 (TYPE_2__*,int ,char*,struct device_node*) ;
 int FUNC_4 (struct device_node*,char*,int,int ,struct of_phandle_args*) ;
 int FUNC_5 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct rza2_pinctrl_priv *VAR_3)
{
 struct device_node *VAR_4 = VAR_3->dev->of_node;
 struct of_phandle_args VAR_5;
 int VAR_6;

 VAR_2.label = FUNC_3(VAR_3->dev, VAR_1, "%pOFn", VAR_4);
 VAR_2.of_node = VAR_4;
 VAR_2.parent = VAR_3->dev;
 VAR_2.ngpio = VAR_3->npins;

 VAR_6 = FUNC_4(VAR_4, "gpio-ranges", 3, 0,
            &VAR_5);
 if (VAR_6) {
  FUNC_1(VAR_3->dev, "Unable to parse gpio-ranges\n");
  return VAR_6;
 }

 if ((VAR_5.args[0] != 0) ||
     (VAR_5.args[1] != 0) ||
     (VAR_5.args[2] != VAR_3->npins)) {
  FUNC_1(VAR_3->dev, "gpio-ranges does not match selected SOC\n");
  return -VAR_0;
 }
 VAR_3->gpio_range.id = 0;
 VAR_3->gpio_range.pin_base = VAR_3->gpio_range.base = 0;
 VAR_3->gpio_range.npins = VAR_3->npins;
 VAR_3->gpio_range.name = VAR_2.label;
 VAR_3->gpio_range.gc = &VAR_2;


 VAR_6 = FUNC_2(VAR_3->dev, &VAR_2, VAR_3);
 if (VAR_6)
  return VAR_6;


 FUNC_5(VAR_3->pctl, &VAR_3->gpio_range);

 FUNC_0(VAR_3->dev, "Registered gpio controller\n");

 return 0;
}
