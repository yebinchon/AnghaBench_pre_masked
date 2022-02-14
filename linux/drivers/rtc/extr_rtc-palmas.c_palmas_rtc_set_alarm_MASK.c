
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct rtc_wkalrm {scalar_t__ enabled; TYPE_1__ time; } ;
struct palmas {int dummy; } ;
struct device {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,char*,...) ;
 struct palmas* FUNC_2 (int ) ;
 int FUNC_3 (struct palmas*,int ,int ,unsigned char*,int) ;
 int FUNC_4 (struct device*,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 unsigned char VAR_5[VAR_1];
 struct palmas *VAR_6 = FUNC_2(VAR_3->parent);
 int VAR_7;

 VAR_7 = FUNC_4(VAR_3, 0);
 if (VAR_7 < 0) {
  FUNC_1(VAR_3, "Disable RTC alarm failed\n");
  return VAR_7;
 }

 VAR_5[0] = FUNC_0(VAR_4->time.tm_sec);
 VAR_5[1] = FUNC_0(VAR_4->time.tm_min);
 VAR_5[2] = FUNC_0(VAR_4->time.tm_hour);
 VAR_5[3] = FUNC_0(VAR_4->time.tm_mday);
 VAR_5[4] = FUNC_0(VAR_4->time.tm_mon + 1);
 VAR_5[5] = FUNC_0(VAR_4->time.tm_year - 100);

 VAR_7 = FUNC_3(VAR_6, VAR_2,
  VAR_0, VAR_5, VAR_1);
 if (VAR_7 < 0) {
  FUNC_1(VAR_3, "ALARM_SECONDS_REG write failed, err = %d\n", VAR_7);
  return VAR_7;
 }

 if (VAR_4->enabled)
  VAR_7 = FUNC_4(VAR_3, 1);
 return VAR_7;
}
