
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera {int dev; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct madera *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->regmap, VAR_0, 0);
 if (VAR_2 != 0) {
  FUNC_0(VAR_1->dev, "Failed to soft reset device: %d\n", VAR_2);
  return VAR_2;
 }


 FUNC_2(1000, 2000);

 return 0;
}
