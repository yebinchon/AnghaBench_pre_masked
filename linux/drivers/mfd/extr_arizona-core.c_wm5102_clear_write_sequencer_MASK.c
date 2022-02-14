
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona {int dev; int dcvdd; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (struct arizona*) ;
 int FUNC_1 (struct arizona*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct arizona *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_4(VAR_1->regmap, VAR_0,
      0x0);
 if (VAR_2) {
  FUNC_2(VAR_1->dev,
   "Failed to clear write sequencer state: %d\n", VAR_2);
  return VAR_2;
 }

 FUNC_1(VAR_1);
 FUNC_5(VAR_1->dcvdd);

 FUNC_3(20);

 VAR_2 = FUNC_6(VAR_1->dcvdd);
 if (VAR_2) {
  FUNC_2(VAR_1->dev, "Failed to re-enable DCVDD: %d\n", VAR_2);
  return VAR_2;
 }
 FUNC_0(VAR_1);

 return 0;
}
