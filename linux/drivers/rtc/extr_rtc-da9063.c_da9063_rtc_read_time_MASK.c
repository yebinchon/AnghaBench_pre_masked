
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;
struct da9063_compatible_rtc_regmap {int rtc_ready_to_read_mask; int rtc_count_secs_reg; } ;
struct da9063_compatible_rtc {int rtc_sync; struct rtc_time alarm_time; int regmap; struct da9063_compatible_rtc_regmap* config; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int*,struct rtc_time*,struct da9063_compatible_rtc*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct da9063_compatible_rtc* FUNC_3 (struct device*) ;
 int FUNC_4 (struct rtc_time*,struct rtc_time*,int) ;
 int FUNC_5 (int ,int ,int*,int) ;
 unsigned long FUNC_6 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_3, struct rtc_time *VAR_4)
{
 struct da9063_compatible_rtc *VAR_5 = FUNC_3(VAR_3);
 const struct da9063_compatible_rtc_regmap *VAR_6 = VAR_5->config;
 unsigned long VAR_7;
 unsigned long VAR_8;
 u8 VAR_9[VAR_1];
 int VAR_10;

 VAR_10 = FUNC_5(VAR_5->regmap,
          VAR_6->rtc_count_secs_reg,
          VAR_9, VAR_1);
 if (VAR_10 < 0) {
  FUNC_2(VAR_3, "Failed to read RTC time data: %d\n", VAR_10);
  return VAR_10;
 }

 if (!(VAR_9[VAR_2] & VAR_6->rtc_ready_to_read_mask)) {
  FUNC_1(VAR_3, "RTC not yet ready to be read by the host\n");
  return -VAR_0;
 }

 FUNC_0(VAR_9, VAR_4, VAR_5);

 VAR_7 = FUNC_6(VAR_4);
 VAR_8 = FUNC_6(&VAR_5->alarm_time);


 if (VAR_5->rtc_sync == 1 && VAR_8 - VAR_7 == 1)
  FUNC_4(VAR_4, &VAR_5->alarm_time, sizeof(struct rtc_time));
 else
  VAR_5->rtc_sync = 0;

 return 0;
}
