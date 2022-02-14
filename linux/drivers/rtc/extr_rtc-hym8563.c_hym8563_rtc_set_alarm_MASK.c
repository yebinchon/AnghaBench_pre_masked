
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_min; int tm_hour; int tm_mday; int tm_wday; scalar_t__ tm_sec; } ;
struct rtc_wkalrm {int enabled; struct rtc_time time; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (struct i2c_client*,int ,int,int *) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_5(VAR_4);
 struct rtc_time *VAR_7 = &VAR_5->time;
 u8 VAR_8[4];
 int VAR_9;




 if (VAR_7->tm_sec) {
  VAR_7->tm_sec = 0;
  VAR_7->tm_min++;
  if (VAR_7->tm_min >= 60) {
   VAR_7->tm_min = 0;
   VAR_7->tm_hour++;
   if (VAR_7->tm_hour >= 24) {
    VAR_7->tm_hour = 0;
    VAR_7->tm_mday++;
    if (VAR_7->tm_mday > 31)
     VAR_7->tm_mday = 0;
   }
  }
 }

 VAR_9 = FUNC_2(VAR_6, VAR_2);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 &= ~VAR_3;

 VAR_9 = FUNC_3(VAR_6, VAR_2, VAR_9);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8[0] = (VAR_7->tm_min < 60 && VAR_7->tm_min >= 0) ?
   FUNC_0(VAR_7->tm_min) : VAR_0;

 VAR_8[1] = (VAR_7->tm_hour < 24 && VAR_7->tm_hour >= 0) ?
   FUNC_0(VAR_7->tm_hour) : VAR_0;

 VAR_8[2] = (VAR_7->tm_mday <= 31 && VAR_7->tm_mday >= 1) ?
   FUNC_0(VAR_7->tm_mday) : VAR_0;

 VAR_8[3] = (VAR_7->tm_wday < 7 && VAR_7->tm_wday >= 0) ?
   FUNC_0(VAR_7->tm_wday) : VAR_0;

 VAR_9 = FUNC_4(VAR_6, VAR_1, 4, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 return FUNC_1(VAR_4, VAR_5->enabled);
}
