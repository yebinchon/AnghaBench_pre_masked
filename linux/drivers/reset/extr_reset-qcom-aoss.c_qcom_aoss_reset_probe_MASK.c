
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_2__ {int of_node; int nr_resets; int * ops; int owner; } ;
struct qcom_aoss_reset_data {TYPE_1__ rcdev; int base; struct qcom_aoss_desc const* desc; } ;
struct qcom_aoss_desc {int num_resets; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct device*,struct resource*) ;
 struct qcom_aoss_reset_data* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,TYPE_1__*) ;
 struct qcom_aoss_desc* FUNC_5 (struct device*) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_6)
{
 struct qcom_aoss_reset_data *VAR_7;
 struct device *VAR_8 = &VAR_6->dev;
 const struct qcom_aoss_desc *VAR_9;
 struct resource *VAR_10;

 VAR_9 = FUNC_5(VAR_8);
 if (!VAR_9)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_8, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->desc = VAR_9;
 VAR_10 = FUNC_6(VAR_6, VAR_3, 0);
 VAR_7->base = FUNC_2(VAR_8, VAR_10);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 VAR_7->rcdev.owner = VAR_4;
 VAR_7->rcdev.ops = &VAR_5;
 VAR_7->rcdev.nr_resets = VAR_9->num_resets;
 VAR_7->rcdev.of_node = VAR_8->of_node;

 return FUNC_4(VAR_8, &VAR_7->rcdev);
}
