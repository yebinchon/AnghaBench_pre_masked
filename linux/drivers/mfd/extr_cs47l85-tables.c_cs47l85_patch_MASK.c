
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_sequence {int dummy; } ;
struct madera {int rev; int dev; int regmap_32bit; int regmap; } ;


 unsigned int FUNC_0 (struct reg_sequence*) ;
 struct reg_sequence* VAR_0 ;
 struct reg_sequence* VAR_1 ;
 struct reg_sequence* VAR_2 ;
 struct reg_sequence* VAR_3 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,struct reg_sequence const*,unsigned int) ;

int FUNC_3(struct madera *VAR_4)
{
 int VAR_5 = 0;
 const struct reg_sequence *VAR_6;
 const struct reg_sequence *VAR_7;
 unsigned int VAR_8, VAR_9;

 switch (VAR_4->rev) {
 case 0:
 case 1:
  VAR_6 = VAR_0;
  VAR_8 = FUNC_0(VAR_0);

  VAR_7 = VAR_1;
  VAR_9 = FUNC_0(VAR_1);
  break;
 default:
  VAR_6 = VAR_2;
  VAR_8 = FUNC_0(VAR_2);

  VAR_7 = VAR_3;
  VAR_9 = FUNC_0(VAR_3);
  break;
 }

 VAR_5 = FUNC_2(VAR_4->regmap, VAR_6, VAR_8);
 if (VAR_5 < 0) {
  FUNC_1(VAR_4->dev,
   "Error in applying 16-bit patch: %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_2(VAR_4->regmap_32bit, VAR_7, VAR_9);
 if (VAR_5 < 0) {
  FUNC_1(VAR_4->dev,
   "Error in applying 32-bit patch: %d\n", VAR_5);
  return VAR_5;
 }

 return 0;
}
