
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
typedef enum mod_shaping { ____Placeholder_mod_shaping } mod_shaping ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;

 int VAR_8 ;






 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct spi_device*) ;
 int FUNC_2 (struct spi_device*,int ,int ,int ) ;

int FUNC_3(struct spi_device *VAR_9,
    enum mod_shaping VAR_10)
{
 switch (FUNC_1(VAR_9)) {
 case 135:
  switch (VAR_10) {
  case 128:
   return FUNC_2(VAR_9, VAR_8,
         VAR_7,
         VAR_5);
  case 131:
   return FUNC_2(VAR_9, VAR_8,
         VAR_7,
         VAR_2);
  case 132:
   return FUNC_2(VAR_9, VAR_8,
         VAR_7,
         VAR_1);
  case 133:
   return FUNC_2(VAR_9, VAR_8,
         VAR_7,
         VAR_0);
  default:
   FUNC_0(&VAR_9->dev, "set: illegal input param");
   return -VAR_6;
  }
 case 134:
  switch (VAR_10) {
  case 128:
   return FUNC_2(VAR_9, VAR_8,
         VAR_7,
         VAR_5);
  case 129:
   return FUNC_2(VAR_9, VAR_8,
         VAR_7,
         VAR_4);
  case 130:
   return FUNC_2(VAR_9, VAR_8,
         VAR_7,
         VAR_3);
  default:
   FUNC_0(&VAR_9->dev, "set: illegal input param");
   return -VAR_6;
  }
 default:
  FUNC_0(&VAR_9->dev, "set: modulation undefined");
  return -VAR_6;
 }
}
