
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm3533 {int dev; int regmap; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;

int FUNC_3(struct lm3533 *VAR_0, u8 VAR_1, u8 VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0->dev, "write [%02x]: %02x\n", VAR_1, VAR_2);

 VAR_3 = FUNC_2(VAR_0->regmap, VAR_1, VAR_2);
 if (VAR_3 < 0) {
  FUNC_1(VAR_0->dev, "failed to write register %02x: %d\n",
        VAR_1, VAR_3);
 }

 return VAR_3;
}
