
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct histb_combphy_mode {int select; int shift; int mask; int reg; } ;
struct histb_combphy_priv {struct regmap* syscon; struct histb_combphy_mode mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ FUNC_0 (struct histb_combphy_mode*) ;
 int FUNC_1 (struct regmap*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct histb_combphy_priv *VAR_4)
{
 struct histb_combphy_mode *VAR_5 = &VAR_4->mode;
 struct regmap *VAR_6 = VAR_4->syscon;
 u32 VAR_7;

 if (FUNC_0(VAR_5))
  return 0;

 switch (VAR_5->select) {
 case 129:
  VAR_7 = VAR_1;
  break;
 case 130:
  VAR_7 = VAR_0;
  break;
 case 128:
  VAR_7 = VAR_2;
  break;
 default:
  return -VAR_3;
 }

 return FUNC_1(VAR_6, VAR_5->reg, VAR_5->mask,
      VAR_7 << VAR_5->shift);
}
