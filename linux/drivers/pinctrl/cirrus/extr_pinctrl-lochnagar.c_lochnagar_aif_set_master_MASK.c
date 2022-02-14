
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct lochnagar_pin_priv {int dev; struct lochnagar_group* groups; TYPE_1__* lochnagar; } ;
struct lochnagar_group {scalar_t__ type; int name; struct lochnagar_aif* priv; } ;
struct lochnagar_aif {unsigned int master_mask; int ctrl_reg; } ;
struct TYPE_2__ {struct regmap* regmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ,char*) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (struct regmap*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct lochnagar_pin_priv *VAR_2,
        unsigned int VAR_3, bool VAR_4)
{
 struct regmap *VAR_5 = VAR_2->lochnagar->regmap;
 const struct lochnagar_group *VAR_6 = &VAR_2->groups[VAR_3];
 const struct lochnagar_aif *VAR_7 = VAR_6->priv;
 unsigned int VAR_8 = 0;
 int VAR_9;

 if (VAR_6->type != VAR_1)
  return -VAR_0;

 if (!VAR_4)
  VAR_8 = VAR_7->master_mask;

 FUNC_0(VAR_2->dev, "Set AIF %s to %s\n",
  VAR_6->name, VAR_4 ? "master" : "slave");

 VAR_9 = FUNC_2(VAR_5, VAR_7->ctrl_reg, VAR_7->master_mask, VAR_8);
 if (VAR_9) {
  FUNC_1(VAR_2->dev, "Failed to set %s mode: %d\n",
   VAR_6->name, VAR_9);
  return VAR_9;
 }

 return 0;
}
