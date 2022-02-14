
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbb_charger_attr {unsigned int max; unsigned int min; unsigned int (* hw_fn ) (unsigned int) ;int name; scalar_t__ reg; scalar_t__ safe_reg; } ;
struct smbb_charger {unsigned int* attr; int dev; scalar_t__ addr; int regmap; } ;
typedef enum smbb_attr { ____Placeholder_smbb_attr } smbb_attr ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,unsigned int) ;
 int FUNC_1 (int ,char*,int ,...) ;
 int FUNC_2 (int ,char*,int ,unsigned int) ;
 int FUNC_3 (int ,scalar_t__,unsigned int*) ;
 int FUNC_4 (int ,scalar_t__,unsigned int) ;
 struct smbb_charger_attr* VAR_1 ;
 unsigned int FUNC_5 (unsigned int,unsigned int (*) (unsigned int)) ;
 unsigned int FUNC_6 (unsigned int) ;
 unsigned int FUNC_7 (unsigned int) ;

__attribute__((used)) static int FUNC_8(struct smbb_charger *VAR_2,
  enum smbb_attr VAR_3, unsigned int VAR_4)
{
 const struct smbb_charger_attr *VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 VAR_5 = &VAR_1[VAR_3];

 if (VAR_4 > VAR_5->max || VAR_4 < VAR_5->min) {
  FUNC_1(VAR_2->dev, "value out of range for %s [%u:%u]\n",
   VAR_5->name, VAR_5->min, VAR_5->max);
  return -VAR_0;
 }

 if (VAR_5->safe_reg) {
  VAR_8 = FUNC_3(VAR_2->regmap,
    VAR_2->addr + VAR_5->safe_reg, &VAR_6);
  if (VAR_8) {
   FUNC_1(VAR_2->dev,
    "unable to read safe value for '%s'\n",
    VAR_5->name);
   return VAR_8;
  }

  VAR_6 = VAR_5->hw_fn(VAR_6);

  if (VAR_4 > VAR_6) {
   FUNC_2(VAR_2->dev,
    "%s above safe value, clamping at %u\n",
    VAR_5->name, VAR_6);
   VAR_4 = VAR_6;
  }
 }

 VAR_6 = FUNC_5(VAR_4, VAR_5->hw_fn);

 VAR_8 = FUNC_4(VAR_2->regmap, VAR_2->addr + VAR_5->reg, VAR_6);
 if (VAR_8) {
  FUNC_1(VAR_2->dev, "unable to update %s", VAR_5->name);
  return VAR_8;
 }
 VAR_7 = VAR_5->hw_fn(VAR_6);
 if (VAR_7 != VAR_4) {
  FUNC_2(VAR_2->dev,
   "%s inaccurate, rounded to %u\n",
   VAR_5->name, VAR_7);
 }

 FUNC_0(VAR_2->dev, "%s <= %d\n", VAR_5->name, VAR_7);

 VAR_2->attr[VAR_3] = VAR_7;

 return 0;
}
