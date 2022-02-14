
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sc27xx_efuse {int dev; scalar_t__ base; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,scalar_t__,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sc27xx_efuse *VAR_3, u32 VAR_4)
{
 int VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_1(VAR_3->regmap,
           VAR_3->base + VAR_2,
           VAR_6, (VAR_6 & VAR_4),
           VAR_0,
           VAR_1);
 if (VAR_5) {
  FUNC_0(VAR_3->dev, "timeout to update the efuse status\n");
  return VAR_5;
 }

 return 0;
}
