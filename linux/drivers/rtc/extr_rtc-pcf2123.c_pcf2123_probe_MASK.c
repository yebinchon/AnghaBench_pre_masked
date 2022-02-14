
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int max_speed_hz; scalar_t__ irq; int dev; } ;
struct rtc_time {int dummy; } ;
struct rtc_device {int uie_unsupported; int set_start_time; int range_max; int range_min; int * ops; } ;
struct pcf2123_data {struct rtc_device* rtc; struct rtc_device* map; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int FUNC_1 (struct rtc_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,struct pcf2123_data*) ;
 int FUNC_5 (int *,int) ;
 struct pcf2123_data* FUNC_6 (int *,int,int ) ;
 struct rtc_device* FUNC_7 (struct spi_device*,int *) ;
 int FUNC_8 (int *,scalar_t__,int *,int ,int,int ,int *) ;
 struct rtc_device* FUNC_9 (int *) ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (int *,struct rtc_time*) ;
 int FUNC_12 (struct rtc_device*) ;

__attribute__((used)) static int FUNC_13(struct spi_device *VAR_10)
{
 struct rtc_device *VAR_11;
 struct rtc_time VAR_12;
 struct pcf2123_data *VAR_13;
 int VAR_14 = 0;

 VAR_13 = FUNC_6(&VAR_10->dev, sizeof(struct pcf2123_data),
    VAR_1);
 if (!VAR_13)
  return -VAR_0;

 FUNC_4(&VAR_10->dev, VAR_13);

 VAR_13->map = FUNC_7(VAR_10, &VAR_7);
 if (FUNC_0(VAR_13->map)) {
  FUNC_2(&VAR_10->dev, "regmap init failed.\n");
  return FUNC_1(VAR_13->map);
 }

 VAR_14 = FUNC_11(&VAR_10->dev, &VAR_12);
 if (VAR_14 < 0) {
  VAR_14 = FUNC_10(&VAR_10->dev);
  if (VAR_14 < 0) {
   FUNC_2(&VAR_10->dev, "chip not found\n");
   return VAR_14;
  }
 }

 FUNC_3(&VAR_10->dev, "spiclk %u KHz.\n",
   (VAR_10->max_speed_hz + 500) / 1000);


 VAR_11 = FUNC_9(&VAR_10->dev);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_13->rtc = VAR_11;


 if (VAR_10->irq > 0) {
  VAR_14 = FUNC_8(&VAR_10->dev, VAR_10->irq, ((void*)0),
    VAR_8,
    VAR_3 | VAR_2,
    VAR_6.driver.name, &VAR_10->dev);
  if (!VAR_14)
   FUNC_5(&VAR_10->dev, 1);
  else
   FUNC_2(&VAR_10->dev, "could not request irq.\n");
 }





 VAR_11->uie_unsupported = 1;
 VAR_11->ops = &VAR_9;
 VAR_11->range_min = VAR_4;
 VAR_11->range_max = VAR_5;
 VAR_11->set_start_time = 1;

 VAR_14 = FUNC_12(VAR_11);
 if (VAR_14)
  return VAR_14;

 return 0;
}
