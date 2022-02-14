
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef void* u16 ;
struct rtc_time {void* tm_mon; void* tm_year; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct rtc_wkalrm {int enabled; int pending; struct rtc_time time; } ;
struct mt6397_rtc {int lock; scalar_t__ addr_base; int regmap; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 struct mt6397_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__,void**,int) ;
 int FUNC_4 (int ,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_13, struct rtc_wkalrm *VAR_14)
{
 struct rtc_time *VAR_15 = &VAR_14->time;
 struct mt6397_rtc *VAR_16 = FUNC_0(VAR_13);
 u32 VAR_17, VAR_18;
 int VAR_19;
 u16 VAR_20[VAR_4];

 FUNC_1(&VAR_16->lock);
 VAR_19 = FUNC_4(VAR_16->regmap, VAR_16->addr_base + VAR_1, &VAR_17);
 if (VAR_19 < 0)
  goto err_exit;
 VAR_19 = FUNC_4(VAR_16->regmap, VAR_16->addr_base + VAR_11, &VAR_18);
 if (VAR_19 < 0)
  goto err_exit;

 VAR_19 = FUNC_3(VAR_16->regmap, VAR_16->addr_base + VAR_0,
          VAR_20, VAR_4);
 if (VAR_19 < 0)
  goto err_exit;

 VAR_14->enabled = !!(VAR_17 & VAR_2);
 VAR_14->pending = !!(VAR_18 & VAR_12);
 FUNC_2(&VAR_16->lock);

 VAR_15->tm_sec = VAR_20[VAR_9];
 VAR_15->tm_min = VAR_20[VAR_7];
 VAR_15->tm_hour = VAR_20[VAR_6];
 VAR_15->tm_mday = VAR_20[VAR_5];
 VAR_15->tm_mon = VAR_20[VAR_8];
 VAR_15->tm_year = VAR_20[VAR_10];

 VAR_15->tm_year += VAR_3;
 VAR_15->tm_mon--;

 return 0;
err_exit:
 FUNC_2(&VAR_16->lock);
 return VAR_19;
}
