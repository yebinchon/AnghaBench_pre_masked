
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct rs5c348_plat_data* platform_data; } ;
struct spi_device {int max_speed_hz; TYPE_1__ dev; } ;
struct rtc_device {int * ops; } ;
struct rs5c348_plat_data {int rtc_24h; struct rtc_device* rtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int FUNC_1 (struct rtc_device*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 struct rs5c348_plat_data* FUNC_5 (TYPE_1__*,int,int ) ;
 struct rtc_device* FUNC_6 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_7 (struct rtc_device*) ;
 int FUNC_8 (struct spi_device*,int ) ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_6)
{
 int VAR_7;
 struct rtc_device *VAR_8;
 struct rs5c348_plat_data *VAR_9;

 VAR_9 = FUNC_5(&VAR_6->dev, sizeof(struct rs5c348_plat_data),
    VAR_1);
 if (!VAR_9)
  return -VAR_0;
 VAR_6->dev.platform_data = VAR_9;


 VAR_7 = FUNC_8(VAR_6, FUNC_2(VAR_4));
 if (VAR_7 < 0 || (VAR_7 & 0x80)) {
  FUNC_3(&VAR_6->dev, "not found.\n");
  return VAR_7;
 }

 FUNC_4(&VAR_6->dev, "spiclk %u KHz.\n",
   (VAR_6->max_speed_hz + 500) / 1000);

 VAR_7 = FUNC_8(VAR_6, FUNC_2(VAR_3));
 if (VAR_7 < 0)
  return VAR_7;
 if (VAR_7 & VAR_2)
  VAR_9->rtc_24h = 1;

 VAR_8 = FUNC_6(&VAR_6->dev);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_9->rtc = VAR_8;

 VAR_8->ops = &VAR_5;

 return FUNC_7(VAR_8);
}
