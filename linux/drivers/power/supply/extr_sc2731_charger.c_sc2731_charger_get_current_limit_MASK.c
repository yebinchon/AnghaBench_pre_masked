
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sc2731_charger_info {scalar_t__ base; int regmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_1(struct sc2731_charger_info *VAR_8,
         u32 *VAR_9)
{
 int VAR_10;
 u32 VAR_11;

 VAR_10 = FUNC_0(VAR_8->regmap, VAR_8->base + VAR_1, &VAR_11);
 if (VAR_10)
  return VAR_10;

 VAR_11 = (VAR_11 & VAR_6) >> VAR_7;

 switch (VAR_11) {
 case 0:
  *VAR_9 = VAR_2;
  break;

 case 1:
  *VAR_9 = VAR_3;
  break;

 case 2:
  *VAR_9 = VAR_5;
  break;

 case 3:
  *VAR_9 = VAR_4;
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
