
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct ov772x_priv {TYPE_2__* info; struct regmap* regmap; } ;
struct TYPE_3__ {int strength; int threshold; int upper; int lower; } ;
struct TYPE_4__ {TYPE_1__ edgectrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct regmap*,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct ov772x_priv *VAR_11)
{
 struct regmap *VAR_12 = VAR_11->regmap;
 int VAR_13;

 if (!VAR_11->info)
  return 0;

 if (VAR_11->info->edgectrl.strength & VAR_10) {







  VAR_13 = FUNC_0(VAR_12, VAR_0, VAR_1, 0x00);
  if (VAR_13 < 0)
   return VAR_13;

  VAR_13 = FUNC_0(VAR_12, VAR_4,
      VAR_8,
      VAR_11->info->edgectrl.threshold);
  if (VAR_13 < 0)
   return VAR_13;

  VAR_13 = FUNC_0(VAR_12, VAR_3,
      VAR_7,
      VAR_11->info->edgectrl.strength);
  if (VAR_13 < 0)
   return VAR_13;

 } else if (VAR_11->info->edgectrl.upper > VAR_11->info->edgectrl.lower) {





  VAR_13 = FUNC_0(VAR_12, VAR_5,
      VAR_9,
      VAR_11->info->edgectrl.upper);
  if (VAR_13 < 0)
   return VAR_13;

  VAR_13 = FUNC_0(VAR_12, VAR_2,
      VAR_6,
      VAR_11->info->edgectrl.lower);
  if (VAR_13 < 0)
   return VAR_13;
 }

 return 0;
}
