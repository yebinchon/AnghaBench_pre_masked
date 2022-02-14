
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct lochnagar_pin_priv {int dev; TYPE_1__* lochnagar; } ;
struct TYPE_2__ {struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*,int,unsigned int) ;
 int FUNC_1 (struct regmap*,scalar_t__,unsigned int*) ;
 int FUNC_2 (struct regmap*,scalar_t__,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct lochnagar_pin_priv *VAR_4,
        unsigned int VAR_5)
{
 struct regmap *VAR_6 = VAR_4->lochnagar->regmap;
 unsigned int VAR_7;
 int VAR_8 = -1;
 int VAR_9, VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_10 = FUNC_1(VAR_6, VAR_2 + VAR_9, &VAR_7);
  if (VAR_10)
   return VAR_10;

  VAR_7 &= VAR_3;

  if (VAR_7 == VAR_5)
   return VAR_9 + 1;

  if (VAR_8 < 0 && !VAR_7)
   VAR_8 = VAR_9;
 }

 if (VAR_8 >= 0) {
  VAR_10 = FUNC_2(VAR_6,
      VAR_2 + VAR_8,
      VAR_3, VAR_5);
  if (VAR_10)
   return VAR_10;

  VAR_8++;

  FUNC_0(VAR_4->dev, "Set channel %d to 0x%x\n", VAR_8, VAR_5);

  return VAR_8;
 }

 return -VAR_0;
}
