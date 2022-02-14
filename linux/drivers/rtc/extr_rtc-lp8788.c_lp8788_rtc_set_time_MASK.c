
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_year; int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; } ;
struct lp8788_rtc {struct lp8788* lp; } ;
struct lp8788 {int dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_1 (int ,char*,int) ;
 struct lp8788_rtc* FUNC_2 (struct device*) ;
 int FUNC_3 (struct lp8788*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_11, struct rtc_time *VAR_12)
{
 struct lp8788_rtc *VAR_13 = FUNC_2(VAR_11);
 struct lp8788 *VAR_14 = VAR_13->lp;
 u8 VAR_15[VAR_5 - 1];
 int VAR_16, VAR_17, VAR_18;

 VAR_18 = VAR_12->tm_year + 1900 - VAR_1;
 if (VAR_18 < 0) {
  FUNC_1(VAR_14->dev, "invalid year: %d\n", VAR_18);
  return -VAR_0;
 }


 VAR_15[VAR_9] = VAR_12->tm_sec;
 VAR_15[VAR_7] = VAR_12->tm_min;
 VAR_15[VAR_4] = VAR_12->tm_hour;
 VAR_15[VAR_6] = VAR_12->tm_mday;
 VAR_15[VAR_8] = VAR_12->tm_mon + VAR_2;
 VAR_15[VAR_10] = VAR_18;

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_15); VAR_17++) {
  VAR_16 = FUNC_3(VAR_14, VAR_3 + VAR_17, VAR_15[VAR_17]);
  if (VAR_16)
   return VAR_16;
 }

 return 0;
}
