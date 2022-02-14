
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rza1_pinctrl {int dev; int pctl; int * ports; } ;
struct pinctrl_gpio_range {unsigned int id; struct gpio_chip* gc; int npins; int base; int pin_base; scalar_t__ name; } ;
struct of_phandle_args {int * args; } ;
struct gpio_chip {int base; int ngpio; scalar_t__ label; int parent; struct device_node* of_node; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int ,char*,scalar_t__,int ) ;
 int FUNC_3 (int ,struct gpio_chip*,int *) ;
 scalar_t__ FUNC_4 (int ,int ,char*,struct device_node*) ;
 int FUNC_5 (struct device_node*,char const*,int,int ,struct of_phandle_args*) ;
 int FUNC_6 (int ,struct pinctrl_gpio_range*) ;
 struct gpio_chip VAR_4 ;

__attribute__((used)) static int FUNC_7(struct rza1_pinctrl *VAR_5,
          struct device_node *VAR_6,
          struct gpio_chip *VAR_7,
          struct pinctrl_gpio_range *VAR_8)
{
 const char *VAR_9 = "gpio-ranges";
 struct of_phandle_args VAR_10;
 unsigned int VAR_11;
 u32 VAR_12;
 int VAR_13;

 VAR_13 = FUNC_5(VAR_6, VAR_9, 3, 0, &VAR_10);
 if (VAR_13) {
  FUNC_1(VAR_5->dev, "Unable to parse %s list property\n",
   VAR_9);
  return VAR_13;
 }





 VAR_12 = VAR_10.args[1];
 VAR_11 = FUNC_0(VAR_12);
 if (VAR_11 >= VAR_3) {
  FUNC_1(VAR_5->dev,
   "Invalid values in property %s\n", VAR_9);
  return -VAR_0;
 }

 *VAR_7 = VAR_4;
 VAR_7->base = -1;
 VAR_7->label = FUNC_4(VAR_5->dev, VAR_2, "%pOFn",
      VAR_6);
 if (!VAR_7->label)
  return -VAR_1;

 VAR_7->ngpio = VAR_10.args[2];
 VAR_7->of_node = VAR_6;
 VAR_7->parent = VAR_5->dev;

 VAR_8->id = VAR_11;
 VAR_8->name = VAR_7->label;
 VAR_8->pin_base = VAR_8->base = VAR_12;
 VAR_8->npins = VAR_10.args[2];
 VAR_8->gc = VAR_7;

 VAR_13 = FUNC_3(VAR_5->dev, VAR_7,
         &VAR_5->ports[VAR_11]);
 if (VAR_13)
  return VAR_13;

 FUNC_6(VAR_5->pctl, VAR_8);

 FUNC_2(VAR_5->dev, "Parsed gpiochip %s with %d pins\n",
   VAR_7->label, VAR_7->ngpio);

 return 0;
}
