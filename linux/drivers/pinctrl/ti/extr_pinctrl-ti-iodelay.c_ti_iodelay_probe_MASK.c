
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int owner; int name; int * confops; int * pctlops; } ;
struct ti_iodelay_device {int pctl; TYPE_2__ desc; int regmap; TYPE_1__* reg_data; int reg_base; int phys_base; struct device* dev; } ;
struct resource {int start; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {TYPE_1__* data; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int regmap_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,struct resource*) ;
 struct ti_iodelay_device* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int ,int ) ;
 struct of_device_id* FUNC_7 (int ,struct device*) ;
 struct device_node* FUNC_8 (int ) ;
 int FUNC_9 (struct device_node*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_2__*,struct device*,struct ti_iodelay_device*,int *) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct ti_iodelay_device*) ;
 int FUNC_14 (struct device*,struct ti_iodelay_device*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_15 (struct ti_iodelay_device*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct device_node *VAR_11 = FUNC_8(VAR_10->of_node);
 const struct of_device_id *VAR_12;
 struct resource *VAR_13;
 struct ti_iodelay_device *VAR_14;
 int VAR_15 = 0;

 if (!VAR_11) {
  VAR_15 = -VAR_0;
  FUNC_2(VAR_10, "No OF node\n");
  goto exit_out;
 }

 VAR_12 = FUNC_7(VAR_6, VAR_10);
 if (!VAR_12) {
  VAR_15 = -VAR_0;
  FUNC_2(VAR_10, "No DATA match\n");
  goto exit_out;
 }

 VAR_14 = FUNC_5(VAR_10, sizeof(*VAR_14), VAR_3);
 if (!VAR_14) {
  VAR_15 = -VAR_2;
  goto exit_out;
 }
 VAR_14->dev = VAR_10;
 VAR_14->reg_data = VAR_12->data;


 VAR_13 = FUNC_12(VAR_9, VAR_4, 0);
 if (!VAR_13) {
  FUNC_2(VAR_10, "Missing MEM resource\n");
  VAR_15 = -VAR_1;
  goto exit_out;
 }

 VAR_14->phys_base = VAR_13->start;
 VAR_14->reg_base = FUNC_4(VAR_10, VAR_13);
 if (FUNC_0(VAR_14->reg_base)) {
  VAR_15 = FUNC_1(VAR_14->reg_base);
  goto exit_out;
 }

 VAR_14->regmap = FUNC_6(VAR_10, VAR_14->reg_base,
         VAR_14->reg_data->regmap_config);
 if (FUNC_0(VAR_14->regmap)) {
  FUNC_2(VAR_10, "Regmap MMIO init failed.\n");
  VAR_15 = FUNC_1(VAR_14->regmap);
  goto exit_out;
 }

 if (FUNC_15(VAR_14))
  goto exit_out;

 VAR_15 = FUNC_14(VAR_10, VAR_14, VAR_13->start);
 if (VAR_15)
  goto exit_out;

 VAR_14->desc.pctlops = &VAR_7;

 VAR_14->desc.confops = &VAR_8;
 VAR_14->desc.name = FUNC_3(VAR_10);
 VAR_14->desc.owner = VAR_5;

 VAR_15 = FUNC_11(&VAR_14->desc, VAR_10, VAR_14, &VAR_14->pctl);
 if (VAR_15) {
  FUNC_2(VAR_10, "Failed to register pinctrl\n");
  goto exit_out;
 }

 FUNC_13(VAR_9, VAR_14);

 return FUNC_10(VAR_14->pctl);

exit_out:
 FUNC_9(VAR_11);
 return VAR_15;
}
