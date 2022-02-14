
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_year; int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_wday; int tm_mon; } ;
struct i2c_client {int dummy; } ;
struct hym8563 {int valid; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct hym8563* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int,int *) ;
 struct i2c_client* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_4, struct rtc_time *VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_4(VAR_4);
 struct hym8563 *VAR_7 = FUNC_1(VAR_6);
 u8 VAR_8[7];
 int VAR_9;


 if (VAR_5->tm_year < 100 || VAR_5->tm_year >= 200)
  return -VAR_0;

 VAR_8[0] = FUNC_0(VAR_5->tm_sec);
 VAR_8[1] = FUNC_0(VAR_5->tm_min);
 VAR_8[2] = FUNC_0(VAR_5->tm_hour);
 VAR_8[3] = FUNC_0(VAR_5->tm_mday);
 VAR_8[4] = FUNC_0(VAR_5->tm_wday);
 VAR_8[5] = FUNC_0(VAR_5->tm_mon + 1);






 VAR_8[6] = FUNC_0(VAR_5->tm_year - 100);





 VAR_9 = FUNC_2(VAR_6, VAR_1,
      VAR_2);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_3(VAR_6, VAR_3, 7, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_6, VAR_1, 0);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_7->valid = 1;

 return 0;
}
