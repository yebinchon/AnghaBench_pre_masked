
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_sequence {int dummy; } ;
struct arizona {int rev; int regmap; } ;


 int FUNC_0 (struct reg_sequence*) ;
 int FUNC_1 (int ,struct reg_sequence const*,int) ;
 struct reg_sequence* VAR_0 ;
 struct reg_sequence* VAR_1 ;

int FUNC_2(struct arizona *VAR_2)
{
 const struct reg_sequence *VAR_3;
 int VAR_4;

 switch (VAR_2->rev) {
 case 0:
  VAR_3 = VAR_0;
  VAR_4 = FUNC_0(VAR_0);
  break;
 default:
  VAR_3 = VAR_1;
  VAR_4 = FUNC_0(VAR_1);
 }

 return FUNC_1(VAR_2->regmap,
            VAR_3,
            VAR_4);
}
