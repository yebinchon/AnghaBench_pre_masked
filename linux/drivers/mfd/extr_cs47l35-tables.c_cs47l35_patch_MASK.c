
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera {int dev; int regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int ) ;

int FUNC_3(struct madera *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1->regmap, VAR_0,
        FUNC_0(VAR_0));
 if (VAR_2 < 0)
  FUNC_1(VAR_1->dev, "Error applying patch: %d\n", VAR_2);

 return VAR_2;
}
