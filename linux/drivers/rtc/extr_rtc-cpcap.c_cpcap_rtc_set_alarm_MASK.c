
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {int time; } ;
struct device {int dummy; } ;
struct cpcap_time {int tod1; int tod2; int day; } ;
struct cpcap_rtc {int alarm_enabled; int alarm_irq; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cpcap_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct cpcap_time*,int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_6, struct rtc_wkalrm *VAR_7)
{
 struct cpcap_rtc *VAR_8;
 struct cpcap_time VAR_9;
 int VAR_10;

 VAR_8 = FUNC_0(VAR_6);

 FUNC_4(&VAR_9, &VAR_7->time);

 if (VAR_8->alarm_enabled)
  FUNC_1(VAR_8->alarm_irq);

 VAR_10 = FUNC_3(VAR_8->regmap, VAR_0, VAR_3,
     VAR_9.day);
 VAR_10 |= FUNC_3(VAR_8->regmap, VAR_2, VAR_5,
      VAR_9.tod2);
 VAR_10 |= FUNC_3(VAR_8->regmap, VAR_1, VAR_4,
      VAR_9.tod1);

 if (!VAR_10) {
  FUNC_2(VAR_8->alarm_irq);
  VAR_8->alarm_enabled = 1;
 }

 return VAR_10;
}
