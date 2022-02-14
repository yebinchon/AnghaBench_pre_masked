
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dev; } ;
typedef enum dagc { ____Placeholder_dagc } dagc ;


 int FUNC_0 (int const*) ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;



 int FUNC_2 (struct spi_device*,int ,int const) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct spi_device *VAR_2, enum dagc VAR_3)
{
 static const u8 VAR_4[] = {
  [128] = 131,
  [130] = 133,
  [129] = 132,
 };

 if (FUNC_3(VAR_3 >= FUNC_0(VAR_4))) {
  FUNC_1(&VAR_2->dev, "set: illegal input param");
  return -VAR_0;
 }

 return FUNC_2(VAR_2, VAR_1, VAR_4[VAR_3]);
}
