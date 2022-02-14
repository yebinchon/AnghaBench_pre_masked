
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dev; } ;
typedef enum modulation { ____Placeholder_modulation } modulation ;


 int FUNC_0 (int const*) ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct spi_device*,int ,int ,int const) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct spi_device *VAR_3, enum modulation VAR_4)
{
 static const u8 VAR_5[] = {
  [128] = 130,
  [129] = 131,
 };

 if (FUNC_3(VAR_4 >= FUNC_0(VAR_5))) {
  FUNC_1(&VAR_3->dev, "set: illegal input param");
  return -VAR_0;
 }

 return FUNC_2(VAR_3, VAR_2,
       VAR_1,
       VAR_5[VAR_4]);
}
