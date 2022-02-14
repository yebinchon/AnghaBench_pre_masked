
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int mutex; struct device* dev; int node; int gpio_ranges; int pin_function_tree; int pin_group_tree; int pin_desc_tree; void* driver_data; struct pinctrl_desc* desc; int owner; } ;
struct pinctrl_desc {int npins; int pins; scalar_t__ confops; scalar_t__ pmxops; int owner; int name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pinctrl_dev* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct device*,char*,int ) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct pinctrl_dev*) ;
 struct pinctrl_dev* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct pinctrl_dev*) ;
 int FUNC_10 (struct pinctrl_dev*) ;
 int FUNC_11 (struct pinctrl_dev*,int ,int ) ;
 int FUNC_12 (struct pinctrl_dev*,int ,int ) ;
 int FUNC_13 (struct pinctrl_dev*) ;

__attribute__((used)) static struct pinctrl_dev *
FUNC_14(struct pinctrl_desc *VAR_3, struct device *VAR_4,
   void *VAR_5)
{
 struct pinctrl_dev *VAR_6;
 int VAR_7;

 if (!VAR_3)
  return FUNC_0(-VAR_0);
 if (!VAR_3->name)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_1);


 VAR_6->owner = VAR_3->owner;
 VAR_6->desc = VAR_3;
 VAR_6->driver_data = VAR_5;
 FUNC_2(&VAR_6->pin_desc_tree, VAR_2);






 FUNC_1(&VAR_6->gpio_ranges);
 FUNC_1(&VAR_6->node);
 VAR_6->dev = VAR_4;
 FUNC_8(&VAR_6->mutex);


 VAR_7 = FUNC_10(VAR_6);
 if (VAR_7) {
  FUNC_4(VAR_4, "pinctrl ops lacks necessary functions\n");
  goto out_err;
 }


 if (VAR_3->pmxops) {
  VAR_7 = FUNC_13(VAR_6);
  if (VAR_7)
   goto out_err;
 }


 if (VAR_3->confops) {
  VAR_7 = FUNC_9(VAR_6);
  if (VAR_7)
   goto out_err;
 }


 FUNC_3(VAR_4, "try to register %d pins ...\n", VAR_3->npins);
 VAR_7 = FUNC_12(VAR_6, VAR_3->pins, VAR_3->npins);
 if (VAR_7) {
  FUNC_4(VAR_4, "error during pin registration\n");
  FUNC_11(VAR_6, VAR_3->pins,
          VAR_3->npins);
  goto out_err;
 }

 return VAR_6;

out_err:
 FUNC_7(&VAR_6->mutex);
 FUNC_5(VAR_6);
 return FUNC_0(VAR_7);
}
