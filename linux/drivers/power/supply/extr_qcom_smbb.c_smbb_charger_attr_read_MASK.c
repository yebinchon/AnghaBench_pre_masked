
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbb_charger_attr {unsigned int (* hw_fn ) (unsigned int) ;int name; scalar_t__ reg; } ;
struct smbb_charger {unsigned int* attr; int dev; scalar_t__ addr; int regmap; } ;
typedef enum smbb_attr { ____Placeholder_smbb_attr } smbb_attr ;


 int FUNC_0 (int ,char*,int ,unsigned int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,scalar_t__,unsigned int*) ;
 struct smbb_charger_attr* VAR_0 ;
 unsigned int FUNC_3 (unsigned int) ;

__attribute__((used)) static int FUNC_4(struct smbb_charger *VAR_1,
  enum smbb_attr VAR_2)
{
 const struct smbb_charger_attr *VAR_3;
 unsigned int VAR_4;
 int VAR_5;

 VAR_3 = &VAR_0[VAR_2];

 VAR_5 = FUNC_2(VAR_1->regmap, VAR_1->addr + VAR_3->reg, &VAR_4);
 if (VAR_5) {
  FUNC_1(VAR_1->dev, "failed to read %s\n", VAR_3->name);
  return VAR_5;
 }
 VAR_4 = VAR_3->hw_fn(VAR_4);
 FUNC_0(VAR_1->dev, "%s => %d\n", VAR_3->name, VAR_4);

 VAR_1->attr[VAR_2] = VAR_4;

 return 0;
}
