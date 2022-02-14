
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_year; int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_wday; } ;
struct rtc_wkalrm {int enabled; struct rtc_time time; } ;
struct lp8788_rtc {size_t alarm; struct lp8788* lp; } ;
struct lp8788 {int dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_1 (int ) ;
 int* VAR_13 ;
 int* VAR_14 ;
 int FUNC_2 (int ,char*,int) ;
 struct lp8788_rtc* FUNC_3 (struct device*) ;
 int FUNC_4 (struct lp8788*,int,int ,int) ;
 int FUNC_5 (struct lp8788*,int,int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_15, struct rtc_wkalrm *VAR_16)
{
 struct lp8788_rtc *VAR_17 = FUNC_3(VAR_15);
 struct lp8788 *VAR_18 = VAR_17->lp;
 struct rtc_time *VAR_19 = &VAR_16->time;
 u8 VAR_20, VAR_21[VAR_6];
 int VAR_22, VAR_23, VAR_24;

 VAR_24 = VAR_19->tm_year + 1900 - VAR_3;
 if (VAR_24 < 0) {
  FUNC_2(VAR_18->dev, "invalid year: %d\n", VAR_24);
  return -VAR_0;
 }

 VAR_21[VAR_10] = VAR_19->tm_sec;
 VAR_21[VAR_8] = VAR_19->tm_min;
 VAR_21[VAR_5] = VAR_19->tm_hour;
 VAR_21[VAR_7] = VAR_19->tm_mday;
 VAR_21[VAR_9] = VAR_19->tm_mon + VAR_4;
 VAR_21[VAR_12] = VAR_24;
 VAR_21[VAR_11] = FUNC_1(VAR_19->tm_wday);

 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_21); VAR_23++) {
  VAR_20 = VAR_14[VAR_17->alarm] + VAR_23;
  VAR_22 = FUNC_5(VAR_18, VAR_20, VAR_21[VAR_23]);
  if (VAR_22)
   return VAR_22;
 }

 VAR_16->enabled = 1;
 VAR_20 = VAR_13[VAR_17->alarm];

 return FUNC_4(VAR_18, VAR_20, VAR_1,
    VAR_16->enabled << VAR_2);
}
