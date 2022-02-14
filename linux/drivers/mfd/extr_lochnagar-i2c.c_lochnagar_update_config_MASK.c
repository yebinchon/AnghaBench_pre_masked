
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct lochnagar {scalar_t__ type; int analogue_config_lock; struct regmap* regmap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct regmap*,int ,unsigned int,unsigned int,int ,int) ;
 int FUNC_2 (struct regmap*,int ,int ) ;

int FUNC_3(struct lochnagar *VAR_7)
{
 struct regmap *VAR_8 = VAR_7->regmap;
 unsigned int VAR_9 = VAR_3;
 int VAR_10 = VAR_4 * VAR_5;
 unsigned int VAR_11 = 0;
 int VAR_12;

 FUNC_0(&VAR_7->analogue_config_lock);

 if (VAR_7->type != VAR_0)
  return 0;






 VAR_12 = FUNC_2(VAR_8, VAR_1, 0);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_2(VAR_8, VAR_1,
      VAR_2);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_1(VAR_8,
           VAR_1, VAR_11,
           (VAR_11 & VAR_9), VAR_6,
           VAR_10 * 1000);
 if (VAR_12 < 0)
  return VAR_12;

 return 0;
}
