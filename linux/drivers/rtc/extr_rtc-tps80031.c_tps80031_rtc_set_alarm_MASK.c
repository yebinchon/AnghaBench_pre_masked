
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; } ;
struct rtc_wkalrm {int enabled; TYPE_1__ time; } ;
struct device {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,int ) ;
 int FUNC_3 (int ,int ,int ,int,int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 u8 VAR_6[VAR_2];
 int VAR_7;

 VAR_6[0] = FUNC_0(VAR_5->time.tm_sec);
 VAR_6[1] = FUNC_0(VAR_5->time.tm_min);
 VAR_6[2] = FUNC_0(VAR_5->time.tm_hour);
 VAR_6[3] = FUNC_0(VAR_5->time.tm_mday);
 VAR_6[4] = FUNC_0(VAR_5->time.tm_mon + 1);
 VAR_6[5] = FUNC_0(VAR_5->time.tm_year % VAR_0);
 VAR_7 = FUNC_3(VAR_4->parent, VAR_3,
   VAR_1,
   VAR_2, VAR_6);
 if (VAR_7 < 0) {
  FUNC_1(VAR_4, "Writing RTC_ALARM failed, err %d\n", VAR_7);
  return VAR_7;
 }
 return FUNC_2(VAR_4, VAR_5->enabled);
}
