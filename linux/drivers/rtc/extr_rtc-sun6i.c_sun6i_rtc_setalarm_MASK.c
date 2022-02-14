
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun6i_rtc_dev {unsigned long alarm; scalar_t__ base; } ;
struct rtc_time {int dummy; } ;
struct rtc_wkalrm {int enabled; struct rtc_time time; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 struct sun6i_rtc_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (struct rtc_time*,unsigned long*) ;
 int FUNC_3 (struct device*,struct rtc_time*) ;
 int FUNC_4 (int ,struct sun6i_rtc_dev*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct sun6i_rtc_dev *VAR_5 = FUNC_1(VAR_3);
 struct rtc_time *VAR_6 = &VAR_4->time;
 struct rtc_time VAR_7;
 unsigned long VAR_8 = 0;
 unsigned long VAR_9 = 0;
 unsigned long VAR_10 = 0;
 int VAR_11 = 0;

 VAR_11 = FUNC_3(VAR_3, &VAR_7);
 if (VAR_11 < 0) {
  FUNC_0(VAR_3, "Error in getting time\n");
  return -VAR_0;
 }

 FUNC_2(VAR_6, &VAR_9);
 FUNC_2(&VAR_7, &VAR_8);
 if (VAR_9 <= VAR_8) {
  FUNC_0(VAR_3, "Date to set in the past\n");
  return -VAR_0;
 }

 VAR_10 = VAR_9 - VAR_8;

 if (VAR_10 > VAR_2) {
  FUNC_0(VAR_3, "Date too far in the future\n");
  return -VAR_0;
 }

 FUNC_4(0, VAR_5);
 FUNC_6(0, VAR_5->base + VAR_1);
 FUNC_5(100, 300);

 FUNC_6(VAR_10, VAR_5->base + VAR_1);
 VAR_5->alarm = VAR_9;

 FUNC_4(VAR_4->enabled, VAR_5);

 return 0;
}
