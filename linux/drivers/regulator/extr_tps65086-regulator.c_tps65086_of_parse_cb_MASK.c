
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_desc {int id; } ;
struct regulator_config {int dev; int regmap; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {void* n_linear_ranges; void* linear_ranges; } ;
struct TYPE_4__ {int decay_mask; int decay_reg; TYPE_1__ desc; } ;


 void* FUNC_0 (void*) ;






 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 TYPE_2__* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;

__attribute__((used)) static int FUNC_5(struct device_node *VAR_3,
    const struct regulator_desc *VAR_4,
    struct regulator_config *VAR_5)
{
 int VAR_6;


 if (FUNC_3(VAR_3, "ti,regulator-step-size-25mv")) {
  switch (VAR_4->id) {
  case 133:
  case 132:
  case 128:
   VAR_0[VAR_4->id].desc.linear_ranges =
    VAR_1;
   VAR_0[VAR_4->id].desc.n_linear_ranges =
    FUNC_0(VAR_1);
   break;
  case 131:
  case 130:
  case 129:
   VAR_0[VAR_4->id].desc.linear_ranges =
    VAR_2;
   VAR_0[VAR_4->id].desc.n_linear_ranges =
    FUNC_0(VAR_2);
   break;
  default:
   FUNC_2(VAR_5->dev, "25mV step mode only valid for BUCK regulators\n");
  }
 }


 if (VAR_4->id <= 128 && FUNC_3(VAR_3, "ti,regulator-decay")) {
  VAR_6 = FUNC_4(VAR_5->regmap,
     VAR_0[VAR_4->id].decay_reg,
     VAR_0[VAR_4->id].decay_mask,
     VAR_0[VAR_4->id].decay_mask);
  if (VAR_6) {
   FUNC_1(VAR_5->dev, "Error setting decay\n");
   return VAR_6;
  }
 }

 return 0;
}
