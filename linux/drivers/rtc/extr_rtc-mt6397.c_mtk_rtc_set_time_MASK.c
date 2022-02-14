
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct rtc_time {scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct mt6397_rtc {int lock; scalar_t__ addr_base; int regmap; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 struct mt6397_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct mt6397_rtc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_9, struct rtc_time *VAR_10)
{
 struct mt6397_rtc *VAR_11 = FUNC_0(VAR_9);
 int VAR_12;
 u16 VAR_13[VAR_1];

 VAR_10->tm_year -= VAR_0;
 VAR_10->tm_mon++;

 VAR_13[VAR_6] = VAR_10->tm_sec;
 VAR_13[VAR_4] = VAR_10->tm_min;
 VAR_13[VAR_3] = VAR_10->tm_hour;
 VAR_13[VAR_2] = VAR_10->tm_mday;
 VAR_13[VAR_5] = VAR_10->tm_mon;
 VAR_13[VAR_7] = VAR_10->tm_year;

 FUNC_2(&VAR_11->lock);
 VAR_12 = FUNC_4(VAR_11->regmap, VAR_11->addr_base + VAR_8,
    VAR_13, VAR_1);
 if (VAR_12 < 0)
  goto exit;


 VAR_12 = FUNC_1(VAR_11);

exit:
 FUNC_3(&VAR_11->lock);
 return VAR_12;
}
