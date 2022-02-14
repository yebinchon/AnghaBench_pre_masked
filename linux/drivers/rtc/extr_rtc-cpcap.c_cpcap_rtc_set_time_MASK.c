
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct device {int dummy; } ;
struct cpcap_time {int tod1; int tod2; int day; } ;
struct cpcap_rtc {scalar_t__ vendor; int alarm_irq; scalar_t__ alarm_enabled; int update_irq; scalar_t__ update_enabled; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct cpcap_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct cpcap_time*,struct rtc_time*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_7, struct rtc_time *VAR_8)
{
 struct cpcap_rtc *VAR_9;
 struct cpcap_time VAR_10;
 int VAR_11 = 0;

 VAR_9 = FUNC_0(VAR_7);

 FUNC_4(&VAR_10, VAR_8);

 if (VAR_9->alarm_enabled)
  FUNC_1(VAR_9->alarm_irq);
 if (VAR_9->update_enabled)
  FUNC_1(VAR_9->update_irq);

 if (VAR_9->vendor == VAR_3) {



  VAR_11 |= FUNC_3(VAR_9->regmap, VAR_1,
       VAR_5, VAR_10.tod1);
  VAR_11 |= FUNC_3(VAR_9->regmap, VAR_2,
       VAR_6, VAR_10.tod2);
  VAR_11 |= FUNC_3(VAR_9->regmap, VAR_0,
       VAR_4, VAR_10.day);
 } else {







  VAR_11 |= FUNC_3(VAR_9->regmap, VAR_1,
       VAR_5, 0);
  VAR_11 |= FUNC_3(VAR_9->regmap, VAR_0,
       VAR_4, VAR_10.day);
  VAR_11 |= FUNC_3(VAR_9->regmap, VAR_2,
       VAR_6, VAR_10.tod2);
  VAR_11 |= FUNC_3(VAR_9->regmap, VAR_1,
       VAR_5, VAR_10.tod1);
 }

 if (VAR_9->update_enabled)
  FUNC_2(VAR_9->update_irq);
 if (VAR_9->alarm_enabled)
  FUNC_2(VAR_9->alarm_irq);

 return VAR_11;
}
