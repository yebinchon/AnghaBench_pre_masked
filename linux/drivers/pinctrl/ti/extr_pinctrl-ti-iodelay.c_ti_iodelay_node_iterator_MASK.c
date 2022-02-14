
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_iodelay_reg_data {scalar_t__ reg_nr_per_pin; } ;
struct ti_iodelay_device {int dev; struct pinctrl_pin_desc* pa; struct ti_iodelay_reg_data* reg_data; } ;
struct ti_iodelay_cfg {int offset; int a_delay; int g_delay; } ;
struct pinctrl_pin_desc {struct ti_iodelay_cfg* drv_data; } ;
struct pinctrl_dev {int dummy; } ;
struct of_phandle_args {scalar_t__ args_count; int* args; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,struct device_node*,int,int,int) ;
 int FUNC_1 (int ,char*,scalar_t__,...) ;
 struct ti_iodelay_device* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (struct ti_iodelay_device*,int) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_2,
        struct device_node *VAR_3,
        const struct of_phandle_args *VAR_4,
        int *VAR_5, int VAR_6, void *VAR_7)
{
 struct ti_iodelay_device *VAR_8;
 struct ti_iodelay_cfg *VAR_9 = VAR_7;
 const struct ti_iodelay_reg_data *VAR_10;
 struct pinctrl_pin_desc *VAR_11;
 int VAR_12;

 VAR_8 = FUNC_2(VAR_2);
 if (!VAR_8)
  return -VAR_0;

 VAR_10 = VAR_8->reg_data;

 if (VAR_4->args_count < VAR_10->reg_nr_per_pin) {
  FUNC_1(VAR_8->dev, "invalid args_count for spec: %i\n",
   VAR_4->args_count);

  return -VAR_0;
 }


 VAR_9[VAR_6].offset = VAR_4->args[0];
 VAR_9[VAR_6].a_delay = VAR_4->args[1] & 0xffff;
 VAR_9[VAR_6].g_delay = VAR_4->args[2] & 0xffff;

 VAR_12 = FUNC_3(VAR_8, VAR_9[VAR_6].offset);
 if (VAR_12 < 0) {
  FUNC_1(VAR_8->dev, "could not add functions for %pOFn %ux\n",
   VAR_3, VAR_9[VAR_6].offset);
  return -VAR_1;
 }
 VAR_5[VAR_6] = VAR_12;

 VAR_11 = &VAR_8->pa[VAR_12];
 VAR_11->drv_data = &VAR_9[VAR_6];

 FUNC_0(VAR_8->dev, "%pOFn offset=%x a_delay = %d g_delay = %d\n",
  VAR_3, VAR_9[VAR_6].offset, VAR_9[VAR_6].a_delay,
  VAR_9[VAR_6].g_delay);

 return 0;
}
