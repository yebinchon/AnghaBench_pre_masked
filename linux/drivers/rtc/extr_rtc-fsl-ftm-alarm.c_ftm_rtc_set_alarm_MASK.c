
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct rtc_wkalrm {struct rtc_time time; } ;
struct ftm_rtc {unsigned long alarm_freq; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 struct ftm_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ftm_rtc*) ;
 int FUNC_2 (struct ftm_rtc*) ;
 int FUNC_3 (struct ftm_rtc*) ;
 int FUNC_4 (struct ftm_rtc*) ;
 int FUNC_5 (struct device*,struct rtc_time*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct rtc_time*,unsigned long*) ;
 int FUNC_8 (struct ftm_rtc*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct rtc_time VAR_5;
 unsigned long VAR_6, VAR_7, VAR_8;
 struct ftm_rtc *VAR_9 = FUNC_0(VAR_3);

 FUNC_5(VAR_3, &VAR_5);
 FUNC_7(&VAR_5, &VAR_6);
 FUNC_7(&VAR_4->time, &VAR_7);

 FUNC_1(VAR_9);
 VAR_8 = (VAR_7 - VAR_6) * VAR_9->alarm_freq;
 if (VAR_8 > VAR_2) {
  FUNC_6("Out of alarm range {0~262} seconds.\n");
  return -VAR_0;
 }

 FUNC_3(VAR_9);







 FUNC_8(VAR_9, VAR_1, VAR_8 - 1);

 FUNC_2(VAR_9);
 FUNC_4(VAR_9);

 return 0;

}
