
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera {int dev; int regmap_32bit; int regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int ) ;

int FUNC_3(struct madera *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2->regmap,
        VAR_0,
        FUNC_0(VAR_0));
 if (VAR_3 < 0) {
  FUNC_1(VAR_2->dev,
   "Error in applying 16-bit patch: %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_2(VAR_2->regmap_32bit,
        VAR_1,
        FUNC_0(VAR_1));
 if (VAR_3 < 0) {
  FUNC_1(VAR_2->dev,
   "Error in applying 32-bit patch: %d\n", VAR_3);
  return VAR_3;
 }

 return 0;
}
