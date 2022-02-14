
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr_resets; struct device_node* of_node; int owner; int * ops; } ;
struct ti_syscon_reset_data {int nr_controls; TYPE_1__ rcdev; struct ti_syscon_reset_control* controls; struct regmap* regmap; } ;
struct ti_syscon_reset_control {void* flags; void* status_bit; void* status_offset; void* deassert_bit; void* deassert_offset; void* assert_bit; void* assert_offset; } ;
struct regmap {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int parent; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int VAR_3 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 struct ti_syscon_reset_control* FUNC_4 (struct device*,int,int,int ) ;
 struct ti_syscon_reset_data* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,TYPE_1__*) ;
 int * FUNC_7 (struct device_node*,char*,int*) ;
 int FUNC_8 (struct platform_device*,struct ti_syscon_reset_data*) ;
 struct regmap* FUNC_9 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct device_node *VAR_7 = VAR_6->of_node;
 struct ti_syscon_reset_data *VAR_8;
 struct regmap *VAR_9;
 const __be32 *VAR_10;
 struct ti_syscon_reset_control *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 VAR_8 = FUNC_5(VAR_6, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = FUNC_9(VAR_7->parent);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_10 = FUNC_7(VAR_7, "ti,reset-bits", &VAR_12);
 if (!VAR_10 || (VAR_12 / sizeof(*VAR_10)) % 7 != 0) {
  FUNC_3(VAR_6, "invalid DT reset description\n");
  return -VAR_0;
 }

 VAR_13 = (VAR_12 / sizeof(*VAR_10)) / 7;
 VAR_11 = FUNC_4(VAR_6, VAR_13, sizeof(*VAR_11),
    VAR_2);
 if (!VAR_11)
  return -VAR_1;

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  VAR_11[VAR_14].assert_offset = FUNC_2(VAR_10++);
  VAR_11[VAR_14].assert_bit = FUNC_2(VAR_10++);
  VAR_11[VAR_14].deassert_offset = FUNC_2(VAR_10++);
  VAR_11[VAR_14].deassert_bit = FUNC_2(VAR_10++);
  VAR_11[VAR_14].status_offset = FUNC_2(VAR_10++);
  VAR_11[VAR_14].status_bit = FUNC_2(VAR_10++);
  VAR_11[VAR_14].flags = FUNC_2(VAR_10++);
 }

 VAR_8->rcdev.ops = &VAR_4;
 VAR_8->rcdev.owner = VAR_3;
 VAR_8->rcdev.of_node = VAR_7;
 VAR_8->rcdev.nr_resets = VAR_13;
 VAR_8->regmap = VAR_9;
 VAR_8->controls = VAR_11;
 VAR_8->nr_controls = VAR_13;

 FUNC_8(VAR_5, VAR_8);

 return FUNC_6(VAR_6, &VAR_8->rcdev);
}
