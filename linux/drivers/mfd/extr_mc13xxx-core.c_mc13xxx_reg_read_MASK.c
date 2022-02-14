
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mc13xxx {int dev; int regmap; } ;


 int FUNC_0 (int ,char*,unsigned int,int ) ;
 int FUNC_1 (int ,unsigned int,int *) ;

int FUNC_2(struct mc13xxx *VAR_0, unsigned int VAR_1, u32 *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->regmap, VAR_1, VAR_2);
 FUNC_0(VAR_0->dev, "[0x%02x] -> 0x%06x\n", VAR_1, *VAR_2);

 return VAR_3;
}
