
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dev; } ;
typedef enum pa_ramp { ____Placeholder_pa_ramp } pa_ramp ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct spi_device*,int ,int const) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct spi_device *VAR_2, enum pa_ramp VAR_3)
{
 static const u8 VAR_4[] = {
  [132] = 147,
  [136] = 151,
  [140] = 155,
  [129] = 144,
  [134] = 149,
  [139] = 154,
  [141] = 156,
  [128] = 143,
  [130] = 145,
  [131] = 146,
  [133] = 148,
  [135] = 150,
  [137] = 152,
  [138] = 153,
  [142] = 157,
 };

 if (FUNC_3(VAR_3 >= FUNC_0(VAR_4))) {
  FUNC_1(&VAR_2->dev, "set: illegal input param");
  return -VAR_0;
 }

 return FUNC_2(VAR_2, VAR_1, VAR_4[VAR_3]);
}
