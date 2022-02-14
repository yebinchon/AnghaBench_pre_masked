
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct regmap {int dummy; } ;
struct max14577_charger {TYPE_1__* max14577; } ;
struct TYPE_2__ {struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct regmap*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct max14577_charger *VAR_8, int *VAR_9)
{
 struct regmap *VAR_10 = VAR_8->max14577->regmap;
 int VAR_11;
 u8 VAR_12;
 VAR_11 = FUNC_0(VAR_10, VAR_1, &VAR_12);
 if (VAR_11 < 0)
  goto out;

 if ((VAR_12 & VAR_0) == 0) {
  *VAR_9 = VAR_4;
  goto out;
 }

 VAR_11 = FUNC_0(VAR_10, VAR_2, &VAR_12);
 if (VAR_11 < 0)
  goto out;

 if (VAR_12 & VAR_6) {

  if (VAR_12 & VAR_7)
   *VAR_9 = VAR_5;
  else
   *VAR_9 = VAR_3;
  goto out;
 }

 *VAR_9 = VAR_4;

out:
 return VAR_11;
}
