
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx214 {int dev; int regmap; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct imx214 *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->regmap, 0x100, 0);
 if (VAR_1 < 0)
  FUNC_0(VAR_0->dev, "could not sent stop table %d\n", VAR_1);

 return VAR_1;
}
