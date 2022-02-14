
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct rtc_time {int tm_mday; int tm_year; scalar_t__ tm_mon; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct rtc_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int FUNC_1 (struct rtc_device*) ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 struct rtc_device* FUNC_4 (int *,char*,int *,int ) ;
 scalar_t__ FUNC_5 (int *,struct rtc_time*) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int *,struct rtc_time*) ;
 int FUNC_7 (int *,unsigned char*,int) ;
 int FUNC_8 (struct spi_device*,struct rtc_device*) ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_4)
{
 struct rtc_device *VAR_5;
 struct rtc_time VAR_6;
 unsigned char VAR_7;
 int VAR_8;

 VAR_7 = VAR_1;
 VAR_8 = FUNC_7(&VAR_4->dev, &VAR_7, 1);
 if (VAR_8 || VAR_7 != 0x20) {
  FUNC_2(&VAR_4->dev, "cannot read RTC register\n");
  return -VAR_0;
 }






 if (FUNC_5(&VAR_4->dev, &VAR_6)) {
  FUNC_3(&VAR_4->dev, "trying to repair invalid date/time\n");
  VAR_6.tm_sec = 0;
  VAR_6.tm_min = 0;
  VAR_6.tm_hour = 0;
  VAR_6.tm_mday = 1;
  VAR_6.tm_mon = 0;
  VAR_6.tm_year = 100;

  if (FUNC_6(&VAR_4->dev, &VAR_6) ||
    FUNC_5(&VAR_4->dev, &VAR_6)) {
   FUNC_2(&VAR_4->dev, "cannot repair RTC register\n");
   return -VAR_0;
  }
 }

 VAR_5 = FUNC_4(&VAR_4->dev, "r9701",
    &VAR_3, VAR_2);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 FUNC_8(VAR_4, VAR_5);

 return 0;
}
