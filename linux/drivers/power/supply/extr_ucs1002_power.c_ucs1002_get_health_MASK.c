
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct ucs1002_info {int regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct ucs1002_info *VAR_12,
         union power_supply_propval *VAR_13)
{
 unsigned int VAR_14;
 int VAR_15, VAR_16;

 VAR_15 = FUNC_0(VAR_12->regmap, VAR_11, &VAR_14);
 if (VAR_15)
  return VAR_15;

 if (VAR_14 & VAR_5)
  VAR_16 = VAR_8;
 else if (VAR_14 & (VAR_4 | VAR_0))
  VAR_16 = VAR_9;
 else if (VAR_14 & VAR_3)
  VAR_16 = VAR_7;
 else if (VAR_14 & (VAR_1 | VAR_2))
  VAR_16 = VAR_10;
 else
  VAR_16 = VAR_6;

 VAR_13->intval = VAR_16;

 return 0;
}
