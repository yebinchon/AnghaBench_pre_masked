
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_wkalrm {int enabled; int pending; int time; } ;
struct device {int dummy; } ;
struct da9063_compatible_rtc_regmap {size_t rtc_data_start; int rtc_alarm_on_mask; unsigned int rtc_event_alarm_mask; int rtc_event_reg; int rtc_alarm_len; int rtc_alarm_secs_reg; } ;
struct da9063_compatible_rtc {int regmap; struct da9063_compatible_rtc_regmap* config; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int*,int *,struct da9063_compatible_rtc*) ;
 struct da9063_compatible_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,int*,int ) ;
 int FUNC_3 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct da9063_compatible_rtc *VAR_5 = FUNC_1(VAR_3);
 const struct da9063_compatible_rtc_regmap *VAR_6 = VAR_5->config;
 u8 VAR_7[VAR_0];
 int VAR_8;
 unsigned int VAR_9;

 VAR_7[VAR_1] = 0;
 VAR_8 = FUNC_2(VAR_5->regmap,
          VAR_6->rtc_alarm_secs_reg,
          &VAR_7[VAR_6->rtc_data_start],
          VAR_6->rtc_alarm_len);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_0(VAR_7, &VAR_4->time, VAR_5);

 VAR_4->enabled = !!(VAR_7[VAR_2] & VAR_6->rtc_alarm_on_mask);

 VAR_8 = FUNC_3(VAR_5->regmap,
     VAR_6->rtc_event_reg,
     &VAR_9);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_9 & VAR_6->rtc_event_alarm_mask)
  VAR_4->pending = 1;
 else
  VAR_4->pending = 0;

 return 0;
}
