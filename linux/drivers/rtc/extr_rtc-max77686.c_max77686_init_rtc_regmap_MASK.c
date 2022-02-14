
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct max77686_rtc_info {int rtc_irq; TYPE_2__* dev; int rtc_irq_data; TYPE_1__* drv_data; scalar_t__ rtc_regmap; scalar_t__ rtc; scalar_t__ regmap; } ;
struct i2c_client {int irq; int adapter; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct device* parent; } ;
struct TYPE_5__ {int rtc_irq_chip; int rtc_i2c_addr; scalar_t__ rtc_irq_from_platform; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 scalar_t__ FUNC_3 (struct device*,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int *) ;
 int VAR_5 ;
 int FUNC_6 (struct platform_device*,int ) ;
 int FUNC_7 (scalar_t__,int,int,int ,int ,int *) ;
 struct i2c_client* FUNC_8 (struct device*) ;
 struct platform_device* FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_10(struct max77686_rtc_info *VAR_6)
{
 struct device *VAR_7 = VAR_6->dev->parent;
 struct i2c_client *VAR_8 = FUNC_8(VAR_7);
 int VAR_9;

 if (VAR_6->drv_data->rtc_irq_from_platform) {
  struct platform_device *VAR_10 = FUNC_9(VAR_6->dev);

  VAR_6->rtc_irq = FUNC_6(VAR_10, 0);
  if (VAR_6->rtc_irq < 0)
   return VAR_6->rtc_irq;
 } else {
  VAR_6->rtc_irq = VAR_8->irq;
 }

 VAR_6->regmap = FUNC_3(VAR_7, ((void*)0));
 if (!VAR_6->regmap) {
  FUNC_2(VAR_6->dev, "Failed to get rtc regmap\n");
  return -VAR_0;
 }

 if (VAR_6->drv_data->rtc_i2c_addr == VAR_4) {
  VAR_6->rtc_regmap = VAR_6->regmap;
  goto add_rtc_irq;
 }

 VAR_6->rtc = FUNC_4(VAR_6->dev, VAR_8->adapter,
           VAR_6->drv_data->rtc_i2c_addr);
 if (FUNC_0(VAR_6->rtc)) {
  FUNC_2(VAR_6->dev, "Failed to allocate I2C device for RTC\n");
  return FUNC_1(VAR_6->rtc);
 }

 VAR_6->rtc_regmap = FUNC_5(VAR_6->rtc,
      &VAR_5);
 if (FUNC_0(VAR_6->rtc_regmap)) {
  VAR_9 = FUNC_1(VAR_6->rtc_regmap);
  FUNC_2(VAR_6->dev, "Failed to allocate RTC regmap: %d\n", VAR_9);
  return VAR_9;
 }

add_rtc_irq:
 VAR_9 = FUNC_7(VAR_6->rtc_regmap, VAR_6->rtc_irq,
      VAR_3 | VAR_1 |
      VAR_2, 0, VAR_6->drv_data->rtc_irq_chip,
      &VAR_6->rtc_irq_data);
 if (VAR_9 < 0) {
  FUNC_2(VAR_6->dev, "Failed to add RTC irq chip: %d\n", VAR_9);
  return VAR_9;
 }

 return 0;
}
