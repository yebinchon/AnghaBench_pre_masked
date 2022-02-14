
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct regulator_desc {char* name; char* supply_name; int owner; scalar_t__ vsel_mask; int vsel_reg; int uV_step; int min_uV; int enable_mask; int enable_reg; scalar_t__ n_voltages; int type; int * ops; } ;
struct regulator_config {int dummy; } ;
struct fan53555_device_info {struct regulator_desc desc; int dev; scalar_t__ vsel_count; int vol_reg; int vsel_step; int vsel_min; } ;


 int FUNC_0 (struct regulator_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct regulator_dev* FUNC_1 (int ,struct regulator_desc*,struct regulator_config*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct fan53555_device_info *VAR_4,
   struct regulator_config *VAR_5)
{
 struct regulator_desc *VAR_6 = &VAR_4->desc;
 struct regulator_dev *VAR_7;

 VAR_6->name = "fan53555-reg";
 VAR_6->supply_name = "vin";
 VAR_6->ops = &VAR_3;
 VAR_6->type = VAR_0;
 VAR_6->n_voltages = VAR_4->vsel_count;
 VAR_6->enable_reg = VAR_4->vol_reg;
 VAR_6->enable_mask = VAR_2;
 VAR_6->min_uV = VAR_4->vsel_min;
 VAR_6->uV_step = VAR_4->vsel_step;
 VAR_6->vsel_reg = VAR_4->vol_reg;
 VAR_6->vsel_mask = VAR_4->vsel_count - 1;
 VAR_6->owner = VAR_1;

 VAR_7 = FUNC_1(VAR_4->dev, &VAR_4->desc, VAR_5);
 return FUNC_0(VAR_7);
}
