
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct regmap {int dummy; } ;
struct mt9v032 {int aec_agc; struct regmap* regmap; } ;


 int VAR_0 ;
 int FUNC_0 (struct regmap*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct mt9v032 *VAR_1, u16 VAR_2, int VAR_3)
{
 struct regmap *VAR_4 = VAR_1->regmap;
 u16 VAR_5 = VAR_1->aec_agc;
 int VAR_6;

 if (VAR_3)
  VAR_5 |= VAR_2;
 else
  VAR_5 &= ~VAR_2;

 VAR_6 = FUNC_0(VAR_4, VAR_0, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_1->aec_agc = VAR_5;
 return 0;
}
