
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {int time; int enabled; } ;
struct device {int dummy; } ;
struct cpcap_time {int tod1; int tod2; int day; } ;
struct cpcap_rtc {int regmap; int alarm_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct cpcap_time*) ;
 int FUNC_1 (struct device*,char*) ;
 struct cpcap_rtc* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 struct cpcap_rtc *VAR_6;
 struct cpcap_time VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(VAR_4);

 VAR_5->enabled = VAR_6->alarm_enabled;

 VAR_8 = FUNC_3(VAR_6->regmap, VAR_0, &VAR_7.day);
 VAR_8 |= FUNC_3(VAR_6->regmap, VAR_2, &VAR_7.tod2);
 VAR_8 |= FUNC_3(VAR_6->regmap, VAR_1, &VAR_7.tod1);

 if (VAR_8) {
  FUNC_1(VAR_4, "Failed to read time\n");
  return -VAR_3;
 }

 FUNC_0(&VAR_5->time, &VAR_7);
 return FUNC_4(&VAR_5->time);
}
