
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sc2731_charger_info {scalar_t__ base; int regmap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct sc2731_charger_info *VAR_8, u32 VAR_9)
{
 u32 VAR_10;
 int VAR_11;

 if (VAR_9 > VAR_2)
  VAR_9 = VAR_2;
 else if (VAR_9 < VAR_3)
  VAR_9 = VAR_3;


 VAR_10 = (VAR_9 - VAR_3) / VAR_4;


 VAR_11 = FUNC_0(VAR_8->regmap, VAR_8->base + VAR_0,
     VAR_6,
     0x3 << VAR_7);
 if (VAR_11)
  return VAR_11;

 return FUNC_0(VAR_8->regmap, VAR_8->base + VAR_1,
      VAR_5, VAR_10);
}
