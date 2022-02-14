
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regulator_desc {size_t id; void* fixed_uV; void* uV_step; void* min_uV; } ;
struct regulator_config {struct ltc3676* driver_data; } ;
struct ltc3676 {int dev; struct regulator_desc* regulator_descs; } ;
struct device_node {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 void* FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (struct device_node*,char*,int *,int) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_1,
          const struct regulator_desc *VAR_2,
          struct regulator_config *VAR_3)
{
 struct ltc3676 *VAR_4 = VAR_3->driver_data;
 struct regulator_desc *VAR_5 = &VAR_4->regulator_descs[VAR_2->id];
 u32 VAR_6[2];
 int VAR_7;


 if (VAR_2->id == VAR_0)
  return 0;

 VAR_7 = FUNC_2(VAR_1, "lltc,fb-voltage-divider", VAR_6, 2);
 if (VAR_7) {
  FUNC_0(VAR_4->dev, "Failed to parse voltage divider: %d\n",
   VAR_7);
  return VAR_7;
 }

 VAR_5->min_uV = FUNC_1(VAR_2->min_uV, VAR_6[0], VAR_6[1]);
 VAR_5->uV_step = FUNC_1(VAR_2->uV_step, VAR_6[0], VAR_6[1]);
 VAR_5->fixed_uV = FUNC_1(VAR_2->fixed_uV, VAR_6[0], VAR_6[1]);

 return 0;
}
