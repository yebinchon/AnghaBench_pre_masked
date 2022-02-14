
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; } ;
struct device {struct device* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,int ,int ,int ) ;
 int FUNC_3 (struct device*,int ,int ,int ) ;
 int FUNC_4 (struct device*,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_6, struct rtc_time *VAR_7)
{
 u8 VAR_8[7];
 int VAR_9;

 VAR_8[0] = FUNC_0(VAR_7->tm_sec);
 VAR_8[1] = FUNC_0(VAR_7->tm_min);
 VAR_8[2] = FUNC_0(VAR_7->tm_hour);
 VAR_8[3] = FUNC_0(VAR_7->tm_mday);
 VAR_8[4] = FUNC_0(VAR_7->tm_mon + 1);
 VAR_8[5] = FUNC_0(VAR_7->tm_year % VAR_0);
 VAR_8[6] = FUNC_0(VAR_7->tm_wday);


 VAR_9 = FUNC_2(VAR_6->parent, VAR_5,
    VAR_2, VAR_1);
 if (VAR_9 < 0) {
  FUNC_1(VAR_6->parent, "Stop RTC failed, err = %d\n", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_4(VAR_6->parent, VAR_5,
   VAR_4,
   VAR_3, VAR_8);
 if (VAR_9 < 0) {
  FUNC_1(VAR_6, "writing RTC_SECONDS_REG failed, err %d\n", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_3(VAR_6->parent, VAR_5,
    VAR_2, VAR_1);
 if (VAR_9 < 0)
  FUNC_1(VAR_6->parent, "Start RTC failed, err = %d\n", VAR_9);
 return VAR_9;
}
