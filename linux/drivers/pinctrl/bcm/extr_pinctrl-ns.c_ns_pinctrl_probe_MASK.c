
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct pinctrl_pin_desc {int chipsets; scalar_t__ drv_data; } ;
struct pinctrl_desc {int npins; int * pins; } ;
struct of_device_id {scalar_t__ data; } ;
struct ns_pinctrl_group {int chipsets; scalar_t__ drv_data; } ;
struct ns_pinctrl_function {int chipsets; scalar_t__ drv_data; } ;
struct ns_pinctrl {uintptr_t chipset_flag; int pctldev; int num_functions; struct pinctrl_pin_desc* functions; int num_groups; struct pinctrl_pin_desc* groups; int offset; int regmap; struct device* dev; struct pinctrl_desc pctldesc; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct pinctrl_pin_desc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,...) ;
 void* FUNC_4 (struct device*,int,int,int ) ;
 struct ns_pinctrl* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,struct pinctrl_desc*,struct ns_pinctrl*) ;
 int FUNC_7 (struct pinctrl_desc*,struct pinctrl_pin_desc const*,int) ;
 struct pinctrl_pin_desc const VAR_4 ;
 struct pinctrl_pin_desc* VAR_5 ;
 struct pinctrl_pin_desc* VAR_6 ;
 int VAR_7 ;
 struct pinctrl_pin_desc* VAR_8 ;
 int FUNC_8 (struct device_node*) ;
 struct of_device_id* FUNC_9 (int ,struct device*) ;
 scalar_t__ FUNC_10 (struct device_node*,char*,int *) ;
 int FUNC_11 (struct platform_device*,struct ns_pinctrl*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct device_node *VAR_11 = VAR_10->of_node;
 const struct of_device_id *VAR_12;
 struct ns_pinctrl *VAR_13;
 struct pinctrl_desc *VAR_14;
 struct pinctrl_pin_desc *VAR_15;
 struct ns_pinctrl_group *VAR_16;
 struct ns_pinctrl_function *VAR_17;
 int VAR_18;

 VAR_13 = FUNC_5(VAR_10, sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_2;
 VAR_14 = &VAR_13->pctldesc;
 FUNC_11(VAR_9, VAR_13);



 VAR_13->dev = VAR_10;

 VAR_12 = FUNC_9(VAR_7, VAR_10);
 if (!VAR_12)
  return -VAR_0;
 VAR_13->chipset_flag = (uintptr_t)VAR_12->data;

 VAR_13->regmap = FUNC_12(FUNC_8(VAR_11));
 if (FUNC_1(VAR_13->regmap)) {
  int VAR_19 = FUNC_2(VAR_13->regmap);

  FUNC_3(VAR_10, "Failed to map pinctrl regs: %d\n", VAR_19);

  return VAR_19;
 }

 if (FUNC_10(VAR_11, "offset", &VAR_13->offset)) {
  FUNC_3(VAR_10, "Failed to get register offset\n");
  return -VAR_1;
 }

 FUNC_7(VAR_14, &VAR_4, sizeof(*VAR_14));



 VAR_14->pins = FUNC_4(VAR_10, FUNC_0(VAR_8),
          sizeof(struct pinctrl_pin_desc),
          VAR_3);
 if (!VAR_14->pins)
  return -VAR_2;
 for (VAR_18 = 0, VAR_15 = (struct pinctrl_pin_desc *)&VAR_14->pins[0];
      VAR_18 < FUNC_0(VAR_8); VAR_18++) {
  const struct pinctrl_pin_desc *VAR_20 = &VAR_8[VAR_18];
  unsigned int VAR_21 = (uintptr_t)VAR_20->drv_data;

  if (VAR_21 & VAR_13->chipset_flag) {
   FUNC_7(VAR_15++, VAR_20, sizeof(*VAR_20));
   VAR_14->npins++;
  }
 }

 VAR_13->groups = FUNC_4(VAR_10, FUNC_0(VAR_6),
       sizeof(struct ns_pinctrl_group),
       VAR_3);
 if (!VAR_13->groups)
  return -VAR_2;
 for (VAR_18 = 0, VAR_16 = &VAR_13->groups[0];
      VAR_18 < FUNC_0(VAR_6); VAR_18++) {
  const struct ns_pinctrl_group *VAR_22 = &VAR_6[VAR_18];

  if (VAR_22->chipsets & VAR_13->chipset_flag) {
   FUNC_7(VAR_16++, VAR_22, sizeof(*VAR_22));
   VAR_13->num_groups++;
  }
 }

 VAR_13->functions = FUNC_4(VAR_10,
          FUNC_0(VAR_5),
          sizeof(struct ns_pinctrl_function),
          VAR_3);
 if (!VAR_13->functions)
  return -VAR_2;
 for (VAR_18 = 0, VAR_17 = &VAR_13->functions[0];
      VAR_18 < FUNC_0(VAR_5); VAR_18++) {
  const struct ns_pinctrl_function *VAR_23 = &VAR_5[VAR_18];

  if (VAR_23->chipsets & VAR_13->chipset_flag) {
   FUNC_7(VAR_17++, VAR_23, sizeof(*VAR_23));
   VAR_13->num_functions++;
  }
 }



 VAR_13->pctldev = FUNC_6(VAR_10, VAR_14, VAR_13);
 if (FUNC_1(VAR_13->pctldev)) {
  FUNC_3(VAR_10, "Failed to register pinctrl\n");
  return FUNC_2(VAR_13->pctldev);
 }

 return 0;
}
