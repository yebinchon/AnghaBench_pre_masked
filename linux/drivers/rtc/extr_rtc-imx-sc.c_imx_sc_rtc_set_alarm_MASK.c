
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
struct rtc_wkalrm {int enabled; struct rtc_time time; } ;
struct imx_sc_rpc_msg {int size; int func; int svc; int ver; } ;
struct imx_sc_msg_timer_rtc_set_alarm {int sec; int min; int hour; int day; scalar_t__ mon; scalar_t__ year; struct imx_sc_rpc_msg hdr; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,int ) ;
 int FUNC_2 (int ,struct imx_sc_msg_timer_rtc_set_alarm*,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 struct imx_sc_msg_timer_rtc_set_alarm VAR_6;
 struct imx_sc_rpc_msg *VAR_7 = &VAR_6.hdr;
 int VAR_8;
 struct rtc_time *VAR_9 = &VAR_5->time;

 VAR_7->ver = VAR_1;
 VAR_7->svc = VAR_0;
 VAR_7->func = VAR_2;
 VAR_7->size = 3;

 VAR_6.year = VAR_9->tm_year + 1900;
 VAR_6.mon = VAR_9->tm_mon + 1;
 VAR_6.day = VAR_9->tm_mday;
 VAR_6.hour = VAR_9->tm_hour;
 VAR_6.min = VAR_9->tm_min;
 VAR_6.sec = VAR_9->tm_sec;

 VAR_8 = FUNC_2(VAR_3, &VAR_6, 1);
 if (VAR_8) {
  FUNC_0(VAR_4, "set rtc alarm failed, ret %d\n", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_4, VAR_5->enabled);
 if (VAR_8) {
  FUNC_0(VAR_4, "enable rtc alarm failed, ret %d\n", VAR_8);
  return VAR_8;
 }

 return 0;
}
