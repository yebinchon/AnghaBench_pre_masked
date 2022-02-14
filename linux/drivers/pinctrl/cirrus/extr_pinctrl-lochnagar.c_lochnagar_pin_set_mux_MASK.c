
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lochnagar_pin_priv {int dev; TYPE_1__* lochnagar; } ;
struct lochnagar_pin {int name; int reg; } ;
struct TYPE_2__ {int type; int regmap; } ;



 int FUNC_0 (int ,char*,int ,unsigned int) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (struct lochnagar_pin_priv*,unsigned int) ;
 int FUNC_3 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct lochnagar_pin_priv *VAR_0,
     const struct lochnagar_pin *VAR_1,
     unsigned int VAR_2)
{
 int VAR_3;

 switch (VAR_0->lochnagar->type) {
 case 128:
  break;
 default:
  VAR_3 = FUNC_2(VAR_0, VAR_2);
  if (VAR_3 < 0) {
   FUNC_1(VAR_0->dev, "Failed to get channel for %s: %d\n",
    VAR_1->name, VAR_3);
   return VAR_3;
  }

  VAR_2 = VAR_3;
  break;
 }

 FUNC_0(VAR_0->dev, "Set pin %s to 0x%x\n", VAR_1->name, VAR_2);

 VAR_3 = FUNC_3(VAR_0->lochnagar->regmap, VAR_1->reg, VAR_2);
 if (VAR_3)
  FUNC_1(VAR_0->dev, "Failed to set %s mux: %d\n",
   VAR_1->name, VAR_3);

 return 0;
}
