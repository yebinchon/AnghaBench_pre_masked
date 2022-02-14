
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_year; } ;
struct device {int dummy; } ;
struct as3722_rtc {struct as3722* as3722; } ;
struct as3722 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct as3722*,int ,int,int *) ;
 int FUNC_1 (int *,struct rtc_time*) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct as3722_rtc* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, struct rtc_time *VAR_4)
{
 struct as3722_rtc *VAR_5 = FUNC_3(VAR_3);
 struct as3722 *VAR_6 = VAR_5->as3722;
 u8 VAR_7[6];
 int VAR_8;

 if (VAR_4->tm_year < (VAR_1 - 1900))
  return -VAR_2;

 FUNC_1(VAR_7, VAR_4);
 VAR_8 = FUNC_0(VAR_6, VAR_0, 6,
   VAR_7);
 if (VAR_8 < 0)
  FUNC_2(VAR_3, "RTC_SECOND reg block write failed %d\n", VAR_8);
 return VAR_8;
}
