
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct device {int dummy; } ;
struct cpcap_time {int day; int tod1; int tod2; } ;
struct cpcap_rtc {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtc_time*,struct cpcap_time*) ;
 int FUNC_1 (struct device*,char*) ;
 struct cpcap_rtc* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4, struct rtc_time *VAR_5)
{
 struct cpcap_rtc *VAR_6;
 struct cpcap_time VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_6 = FUNC_2(VAR_4);

 VAR_9 = FUNC_3(VAR_6->regmap, VAR_2, &VAR_8);
 VAR_9 |= FUNC_3(VAR_6->regmap, VAR_0, &VAR_7.day);
 VAR_9 |= FUNC_3(VAR_6->regmap, VAR_1, &VAR_7.tod1);
 VAR_9 |= FUNC_3(VAR_6->regmap, VAR_2, &VAR_7.tod2);

 if (VAR_8 > VAR_7.tod2)
  VAR_9 |= FUNC_3(VAR_6->regmap, VAR_0, &VAR_7.day);

 if (VAR_9) {
  FUNC_1(VAR_4, "Failed to read time\n");
  return -VAR_3;
 }

 FUNC_0(VAR_5, &VAR_7);

 return 0;
}
