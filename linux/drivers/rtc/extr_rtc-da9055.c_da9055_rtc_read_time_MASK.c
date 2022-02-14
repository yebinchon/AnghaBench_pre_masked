
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct rtc_time {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct device {int dummy; } ;
struct da9055_rtc {TYPE_1__* da9055; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*,int ,int,int*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,char*,int) ;
 struct da9055_rtc* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_9, struct rtc_time *VAR_10)
{
 struct da9055_rtc *VAR_11 = FUNC_3(VAR_9);
 uint8_t VAR_12[6];
 int VAR_13;

 VAR_13 = FUNC_1(VAR_11->da9055, VAR_0);
 if (VAR_13 < 0)
  return VAR_13;





 if (!(VAR_13 & VAR_5))
  return -VAR_8;

 VAR_13 = FUNC_0(VAR_11->da9055, VAR_0, 6, VAR_12);
 if (VAR_13 < 0) {
  FUNC_2(VAR_11->da9055->dev, "Failed to read RTC time : %d\n",
   VAR_13);
  return VAR_13;
 }

 VAR_10->tm_year = (VAR_12[5] & VAR_7) + 100;
 VAR_10->tm_mon = (VAR_12[4] & VAR_4) - 1;
 VAR_10->tm_mday = VAR_12[3] & VAR_1;
 VAR_10->tm_hour = VAR_12[2] & VAR_2;
 VAR_10->tm_min = VAR_12[1] & VAR_3;
 VAR_10->tm_sec = VAR_12[0] & VAR_6;

 return 0;
}
