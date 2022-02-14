
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct tps6586x_settings {int slew_rate; } ;
struct regulator_init_data {struct tps6586x_settings* driver_data; } ;
struct TYPE_2__ {struct device* parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (struct device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_5,
   int VAR_6, struct regulator_init_data *VAR_7)
{
 struct device *VAR_8 = VAR_5->dev.parent;
 struct tps6586x_settings *VAR_9 = VAR_7->driver_data;
 uint8_t VAR_10;

 if (VAR_9 == ((void*)0))
  return 0;

 if (!(VAR_9->slew_rate & VAR_2))
  return 0;


 switch (VAR_6) {
 case 129:
  VAR_10 = VAR_3;
  break;
 case 128:
  VAR_10 = VAR_4;
  break;
 default:
  FUNC_0(&VAR_5->dev, "Only SM0/SM1 can set slew rate\n");
  return -VAR_0;
 }

 return FUNC_1(VAR_8, VAR_10,
   VAR_9->slew_rate & VAR_1);
}
