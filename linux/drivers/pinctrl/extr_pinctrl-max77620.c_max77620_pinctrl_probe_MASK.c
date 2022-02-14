
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_7__* parent; int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct max77620_pctrl_info {int pctl; TYPE_1__* fps_config; void* num_pin_groups; void* pin_groups; void* num_functions; void* functions; void* num_pins; void* pins; int rmap; TYPE_3__* dev; } ;
struct max77620_chip {int rmap; } ;
struct TYPE_12__ {int of_node; } ;
struct TYPE_10__ {void* custom_params; void* num_custom_params; void* npins; void* pins; int name; } ;
struct TYPE_9__ {int active_fps_src; int active_power_up_slots; int active_power_down_slots; int suspend_fps_src; int suspend_power_up_slots; int suspend_power_down_slots; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 struct max77620_chip* FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_3__*) ;
 struct max77620_pctrl_info* FUNC_6 (TYPE_3__*,int,int ) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*,struct max77620_pctrl_info*) ;
 void* VAR_3 ;
 void* VAR_4 ;
 TYPE_2__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_8 (struct platform_device*,struct max77620_pctrl_info*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_8)
{
 struct max77620_chip *VAR_9 = FUNC_4(VAR_8->dev.parent);
 struct max77620_pctrl_info *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_6(&VAR_8->dev, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->dev = &VAR_8->dev;
 VAR_10->dev->of_node = VAR_8->dev.parent->of_node;
 VAR_10->rmap = VAR_9->rmap;

 VAR_10->pins = VAR_7;
 VAR_10->num_pins = FUNC_0(VAR_7);
 VAR_10->functions = VAR_4;
 VAR_10->num_functions = FUNC_0(VAR_4);
 VAR_10->pin_groups = VAR_6;
 VAR_10->num_pin_groups = FUNC_0(VAR_6);
 FUNC_8(VAR_8, VAR_10);

 VAR_5.name = FUNC_5(&VAR_8->dev);
 VAR_5.pins = VAR_7;
 VAR_5.npins = FUNC_0(VAR_7);
 VAR_5.num_custom_params =
    FUNC_0(VAR_3);
 VAR_5.custom_params = VAR_3;

 for (VAR_11 = 0; VAR_11 < VAR_2; ++VAR_11) {
  VAR_10->fps_config[VAR_11].active_fps_src = -1;
  VAR_10->fps_config[VAR_11].active_power_up_slots = -1;
  VAR_10->fps_config[VAR_11].active_power_down_slots = -1;
  VAR_10->fps_config[VAR_11].suspend_fps_src = -1;
  VAR_10->fps_config[VAR_11].suspend_power_up_slots = -1;
  VAR_10->fps_config[VAR_11].suspend_power_down_slots = -1;
 }

 VAR_10->pctl = FUNC_7(&VAR_8->dev, &VAR_5,
        VAR_10);
 if (FUNC_1(VAR_10->pctl)) {
  FUNC_3(&VAR_8->dev, "Couldn't register pinctrl driver\n");
  return FUNC_2(VAR_10->pctl);
 }

 return 0;
}
