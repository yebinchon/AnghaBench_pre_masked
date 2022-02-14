
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct lochnagar_pin_priv {int dev; TYPE_2__* pins; TYPE_1__* lochnagar; } ;
struct lochnagar_pin {scalar_t__ type; int name; int reg; } ;
struct lochnagar_group {int npins; size_t* pins; int name; struct lochnagar_aif* priv; } ;
struct lochnagar_aif {unsigned int src_mask; unsigned int ena_mask; int ctrl_reg; int src_reg; } ;
struct TYPE_4__ {struct lochnagar_pin* drv_data; } ;
struct TYPE_3__ {struct regmap* regmap; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (struct regmap*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct lochnagar_pin_priv *VAR_3,
     const struct lochnagar_group *VAR_4,
     unsigned int VAR_5)
{
 struct regmap *VAR_6 = VAR_3->lochnagar->regmap;
 const struct lochnagar_aif *VAR_7 = VAR_4->priv;
 const struct lochnagar_pin *VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = FUNC_2(VAR_6, VAR_7->src_reg, VAR_7->src_mask, VAR_5);
 if (VAR_10) {
  FUNC_1(VAR_3->dev, "Failed to set %s source: %d\n",
   VAR_4->name, VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_2(VAR_6, VAR_7->ctrl_reg,
     VAR_7->ena_mask, VAR_7->ena_mask);
 if (VAR_10) {
  FUNC_1(VAR_3->dev, "Failed to set %s enable: %d\n",
   VAR_4->name, VAR_10);
  return VAR_10;
 }

 for (VAR_9 = 0; VAR_9 < VAR_4->npins; VAR_9++) {
  VAR_8 = VAR_3->pins[VAR_4->pins[VAR_9]].drv_data;

  if (VAR_8->type != VAR_1)
   continue;

  FUNC_0(VAR_3->dev, "Set pin %s to AIF\n", VAR_8->name);

  VAR_10 = FUNC_2(VAR_6, VAR_8->reg,
      VAR_2,
      VAR_0);
  if (VAR_10) {
   FUNC_1(VAR_3->dev, "Failed to set %s to AIF: %d\n",
    VAR_8->name, VAR_10);
   return VAR_10;
  }
 }

 return 0;
}
