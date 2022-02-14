
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vctrl_voltage_range {int min_uV; int max_uV; } ;
struct regulator_desc {char* name; int continuous_voltage_range; int n_voltages; int * ops; int owner; int type; } ;
struct TYPE_7__ {struct vctrl_voltage_range ctrl; } ;
struct vctrl_data {int sel; int rdev; TYPE_2__* vtable; int ctrl_reg; struct regulator_desc desc; TYPE_1__ vrange; } ;
struct regulator_init_data {int dummy; } ;
struct regulator_config {struct regulator_init_data const* init_data; struct vctrl_data* driver_data; TYPE_3__* dev; struct device_node* of_node; } ;
struct TYPE_9__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_8__ {int ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*,char*,...) ;
 struct vctrl_data* FUNC_3 (TYPE_3__*,int,int ) ;
 int FUNC_4 (TYPE_3__*,struct regulator_desc*,struct regulator_config*) ;
 struct regulator_init_data* FUNC_5 (TYPE_3__*,struct device_node*,struct regulator_desc*) ;
 int FUNC_6 (struct platform_device*,struct vctrl_data*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct platform_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (struct platform_device*,struct vctrl_data*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 struct vctrl_data *VAR_9;
 const struct regulator_init_data *VAR_10;
 struct regulator_desc *VAR_11;
 struct regulator_config VAR_12 = { };
 struct vctrl_voltage_range *VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_9 = FUNC_3(&VAR_7->dev, sizeof(struct vctrl_data),
        VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_6(VAR_7, VAR_9);

 VAR_15 = FUNC_11(VAR_7, VAR_9);
 if (VAR_15)
  return VAR_15;

 VAR_13 = &VAR_9->vrange.ctrl;

 VAR_11 = &VAR_9->desc;
 VAR_11->name = "vctrl";
 VAR_11->type = VAR_3;
 VAR_11->owner = VAR_4;

 if ((FUNC_8(VAR_9->ctrl_reg) == 1) ||
     (FUNC_7(VAR_9->ctrl_reg) == -VAR_0)) {
  VAR_11->continuous_voltage_range = 1;
  VAR_11->ops = &VAR_5;
 } else {
  VAR_11->ops = &VAR_6;
 }

 VAR_10 = FUNC_5(&VAR_7->dev, VAR_8, VAR_11);
 if (!VAR_10)
  return -VAR_1;

 VAR_12.of_node = VAR_8;
 VAR_12.dev = &VAR_7->dev;
 VAR_12.driver_data = VAR_9;
 VAR_12.init_data = VAR_10;

 if (!VAR_11->continuous_voltage_range) {
  VAR_15 = FUNC_10(VAR_7);
  if (VAR_15)
   return VAR_15;

  VAR_14 = FUNC_9(VAR_9->ctrl_reg);
  if (VAR_14 < 0) {
   FUNC_2(&VAR_7->dev, "failed to get control voltage\n");
   return VAR_14;
  }


  if (VAR_14 < VAR_13->min_uV) {
   VAR_9->sel = 0;
  } else if (VAR_14 > VAR_13->max_uV) {
   VAR_9->sel = VAR_11->n_voltages - 1;
  } else {
   int VAR_16;

   for (VAR_16 = 0; VAR_16 < VAR_11->n_voltages; VAR_16++) {
    if (VAR_14 == VAR_9->vtable[VAR_16].ctrl) {
     VAR_9->sel = VAR_16;
     break;
    }
   }
  }
 }

 VAR_9->rdev = FUNC_4(&VAR_7->dev, VAR_11, &VAR_12);
 if (FUNC_0(VAR_9->rdev)) {
  VAR_15 = FUNC_1(VAR_9->rdev);
  FUNC_2(&VAR_7->dev, "failed to register regulator: %d\n", VAR_15);
  return VAR_15;
 }

 return 0;
}
