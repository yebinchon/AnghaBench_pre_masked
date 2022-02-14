
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int tm_year; } ;
struct rtc_wkalrm {scalar_t__ enabled; TYPE_1__ time; } ;
struct device {int dummy; } ;
struct as3722_rtc {struct as3722* as3722; } ;
struct as3722 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct as3722*,int ,int,int *) ;
 int FUNC_1 (struct device*,scalar_t__) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct as3722_rtc* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct as3722_rtc *VAR_5 = FUNC_4(VAR_3);
 struct as3722 *VAR_6 = VAR_5->as3722;
 u8 VAR_7[6];
 int VAR_8;

 if (VAR_4->time.tm_year < (VAR_1 - 1900))
  return -VAR_2;

 VAR_8 = FUNC_1(VAR_3, 0);
 if (VAR_8 < 0) {
  FUNC_3(VAR_3, "Disable RTC alarm failed\n");
  return VAR_8;
 }

 FUNC_2(VAR_7, &VAR_4->time);
 VAR_8 = FUNC_0(VAR_6, VAR_0, 6,
   VAR_7);
 if (VAR_8 < 0) {
  FUNC_3(VAR_3, "RTC_ALARM_SECOND block write failed %d\n", VAR_8);
  return VAR_8;
 }

 if (VAR_4->enabled)
  VAR_8 = FUNC_1(VAR_3, VAR_4->enabled);
 return VAR_8;
}
