
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int,int*) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_8, struct rtc_wkalrm *VAR_9)
{
 struct i2c_client *VAR_10 = FUNC_3(VAR_8);
 struct rtc_time *VAR_11 = &VAR_9->time;
 u8 VAR_12[4];
 int VAR_13;

 VAR_13 = FUNC_2(VAR_10, VAR_1, 4, VAR_12);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_11->tm_sec = 0;

 VAR_11->tm_min = (VAR_12[0] & VAR_0) ?
     -1 :
     FUNC_0(VAR_12[0] & VAR_6);
 VAR_11->tm_hour = (VAR_12[1] & VAR_0) ?
     -1 :
     FUNC_0(VAR_12[1] & VAR_5);
 VAR_11->tm_mday = (VAR_12[2] & VAR_0) ?
     -1 :
     FUNC_0(VAR_12[2] & VAR_4);
 VAR_11->tm_wday = (VAR_12[3] & VAR_0) ?
     -1 :
     FUNC_0(VAR_12[3] & VAR_7);

 VAR_13 = FUNC_1(VAR_10, VAR_2);
 if (VAR_13 < 0)
  return VAR_13;

 if (VAR_13 & VAR_3)
  VAR_9->enabled = 1;

 return 0;
}
