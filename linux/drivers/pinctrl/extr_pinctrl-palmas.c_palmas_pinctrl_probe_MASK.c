
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int parent; scalar_t__ of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct palmas_pinctrl_data {int num_pin_groups; int pin_groups; } ;
struct palmas_pctrl_chip_info {int pctl; int num_pin_groups; int pin_groups; void* num_functions; void* functions; void* num_pins; void* pins; int palmas; TYPE_2__* dev; } ;
struct TYPE_8__ {void* npins; void* pins; int name; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 struct palmas_pctrl_chip_info* FUNC_6 (TYPE_2__*,int,int ) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*,struct palmas_pctrl_chip_info*) ;
 struct palmas_pinctrl_data* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (scalar_t__,char*) ;
 void* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_10 (struct palmas_pctrl_chip_info*) ;
 int FUNC_11 (struct palmas_pctrl_chip_info*,int) ;
 int FUNC_12 (struct palmas_pctrl_chip_info*,int) ;
 void* VAR_4 ;
 int FUNC_13 (struct platform_device*,struct palmas_pctrl_chip_info*) ;
 struct palmas_pinctrl_data VAR_5 ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_6)
{
 struct palmas_pctrl_chip_info *VAR_7;
 const struct palmas_pinctrl_data *VAR_8 = &VAR_5;
 int VAR_9;
 bool VAR_10 = 0;
 bool VAR_11 = 0;

 if (VAR_6->dev.of_node) {
  VAR_8 = FUNC_8(&VAR_6->dev);
  VAR_10 = FUNC_9(VAR_6->dev.of_node,
     "ti,palmas-enable-dvfs1");
  VAR_11 = FUNC_9(VAR_6->dev.of_node,
     "ti,palmas-enable-dvfs2");
 }

 VAR_7 = FUNC_6(&VAR_6->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->dev = &VAR_6->dev;
 VAR_7->palmas = FUNC_4(VAR_6->dev.parent);

 VAR_7->pins = VAR_4;
 VAR_7->num_pins = FUNC_0(VAR_4);
 VAR_7->functions = VAR_2;
 VAR_7->num_functions = FUNC_0(VAR_2);
 VAR_7->pin_groups = VAR_8->pin_groups;
 VAR_7->num_pin_groups = VAR_8->num_pin_groups;

 FUNC_13(VAR_6, VAR_7);

 FUNC_11(VAR_7, VAR_10);
 FUNC_12(VAR_7, VAR_11);
 VAR_9 = FUNC_10(VAR_7);
 if (VAR_9 < 0) {
  FUNC_3(&VAR_6->dev,
   "Reading pinctrol option register failed: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_3.name = FUNC_5(&VAR_6->dev);
 VAR_3.pins = VAR_4;
 VAR_3.npins = FUNC_0(VAR_4);
 VAR_7->pctl = FUNC_7(&VAR_6->dev, &VAR_3,
       VAR_7);
 if (FUNC_1(VAR_7->pctl)) {
  FUNC_3(&VAR_6->dev, "Couldn't register pinctrl driver\n");
  return FUNC_2(VAR_7->pctl);
 }
 return 0;
}
