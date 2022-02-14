
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mc13xxx {int regmap; int dev; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,unsigned int,scalar_t__) ;
 int FUNC_2 (int ,unsigned int,scalar_t__) ;

int FUNC_3(struct mc13xxx *VAR_1, unsigned int VAR_2, u32 VAR_3)
{
 FUNC_1(VAR_1->dev, "[0x%02x] <- 0x%06x\n", VAR_2, VAR_3);

 if (VAR_3 >= FUNC_0(24))
  return -VAR_0;

 return FUNC_2(VAR_1->regmap, VAR_2, VAR_3);
}
