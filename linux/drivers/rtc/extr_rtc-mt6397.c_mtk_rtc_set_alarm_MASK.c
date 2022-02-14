
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct rtc_time {scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct rtc_wkalrm {scalar_t__ enabled; struct rtc_time time; } ;
struct mt6397_rtc {int lock; scalar_t__ addr_base; int regmap; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 struct mt6397_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct mt6397_rtc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__*,int) ;
 int FUNC_5 (int ,scalar_t__,int ,int ) ;
 int FUNC_6 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_13, struct rtc_wkalrm *VAR_14)
{
 struct rtc_time *VAR_15 = &VAR_14->time;
 struct mt6397_rtc *VAR_16 = FUNC_0(VAR_13);
 int VAR_17;
 u16 VAR_18[VAR_6];

 VAR_15->tm_year -= VAR_5;
 VAR_15->tm_mon++;

 VAR_18[VAR_11] = VAR_15->tm_sec;
 VAR_18[VAR_9] = VAR_15->tm_min;
 VAR_18[VAR_8] = VAR_15->tm_hour;
 VAR_18[VAR_7] = VAR_15->tm_mday;
 VAR_18[VAR_10] = VAR_15->tm_mon;
 VAR_18[VAR_12] = VAR_15->tm_year;

 FUNC_2(&VAR_16->lock);
 if (VAR_14->enabled) {
  VAR_17 = FUNC_4(VAR_16->regmap,
     VAR_16->addr_base + VAR_2,
     VAR_18, VAR_6);
  if (VAR_17 < 0)
   goto exit;
  VAR_17 = FUNC_6(VAR_16->regmap, VAR_16->addr_base + VAR_0,
       VAR_1);
  if (VAR_17 < 0)
   goto exit;
  VAR_17 = FUNC_5(VAR_16->regmap,
      VAR_16->addr_base + VAR_3,
      VAR_4,
      VAR_4);
  if (VAR_17 < 0)
   goto exit;
 } else {
  VAR_17 = FUNC_5(VAR_16->regmap,
      VAR_16->addr_base + VAR_3,
      VAR_4, 0);
  if (VAR_17 < 0)
   goto exit;
 }





 VAR_17 = FUNC_1(VAR_16);
exit:
 FUNC_3(&VAR_16->lock);
 return VAR_17;
}
