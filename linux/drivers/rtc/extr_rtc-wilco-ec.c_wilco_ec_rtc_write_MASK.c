
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilco_ec_message {int request_size; struct ec_rtc_write_request* request_data; int type; } ;
struct wilco_ec_device {int dummy; } ;
struct rtc_time {int tm_year; int tm_wday; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct ec_rtc_write_request {void* weekday; void* second; void* minute; void* hour; void* day; void* month; void* year; void* century; int param; int command; } ;
struct device {int parent; } ;
typedef int rtc ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 struct wilco_ec_device* FUNC_1 (int ) ;
 int FUNC_2 (struct wilco_ec_message*,int ,int) ;
 int FUNC_3 (struct wilco_ec_device*,struct wilco_ec_message*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, struct rtc_time *VAR_4)
{
 struct wilco_ec_device *VAR_5 = FUNC_1(VAR_3->parent);
 struct ec_rtc_write_request VAR_6;
 struct wilco_ec_message VAR_7;
 int VAR_8 = VAR_4->tm_year + 1900;





 int VAR_9 = VAR_4->tm_wday == 6 ? 0 : VAR_4->tm_wday + 1;
 int VAR_10;

 VAR_6.command = VAR_1;
 VAR_6.param = VAR_0;
 VAR_6.century = FUNC_0(VAR_8 / 100);
 VAR_6.year = FUNC_0(VAR_8 % 100);
 VAR_6.month = FUNC_0(VAR_4->tm_mon + 1);
 VAR_6.day = FUNC_0(VAR_4->tm_mday);
 VAR_6.hour = FUNC_0(VAR_4->tm_hour);
 VAR_6.minute = FUNC_0(VAR_4->tm_min);
 VAR_6.second = FUNC_0(VAR_4->tm_sec);
 VAR_6.weekday = FUNC_0(VAR_9);

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.type = VAR_2;
 VAR_7.request_data = &VAR_6;
 VAR_7.request_size = sizeof(VAR_6);

 VAR_10 = FUNC_3(VAR_5, &VAR_7);
 if (VAR_10 < 0)
  return VAR_10;

 return 0;
}
