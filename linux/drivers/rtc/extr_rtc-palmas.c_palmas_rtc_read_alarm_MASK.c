
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct rtc_wkalrm {int enabled; TYPE_1__ time; } ;
struct palmas {int dummy; } ;
struct device {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (unsigned char) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct palmas* FUNC_2 (int ) ;
 int FUNC_3 (struct palmas*,int ,int ,unsigned char*,int) ;
 int FUNC_4 (struct palmas*,int ,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_5, struct rtc_wkalrm *VAR_6)
{
 unsigned char VAR_7[VAR_1];
 u32 VAR_8;
 struct palmas *VAR_9 = FUNC_2(VAR_5->parent);
 int VAR_10;

 VAR_10 = FUNC_3(VAR_9, VAR_2,
   VAR_0,
   VAR_7, VAR_1);
 if (VAR_10 < 0) {
  FUNC_1(VAR_5, "RTC_ALARM_SECONDS read failed, err = %d\n", VAR_10);
  return VAR_10;
 }

 VAR_6->time.tm_sec = FUNC_0(VAR_7[0]);
 VAR_6->time.tm_min = FUNC_0(VAR_7[1]);
 VAR_6->time.tm_hour = FUNC_0(VAR_7[2]);
 VAR_6->time.tm_mday = FUNC_0(VAR_7[3]);
 VAR_6->time.tm_mon = FUNC_0(VAR_7[4]) - 1;
 VAR_6->time.tm_year = FUNC_0(VAR_7[5]) + 100;

 VAR_10 = FUNC_4(VAR_9, VAR_2, VAR_3,
   &VAR_8);
 if (VAR_10 < 0) {
  FUNC_1(VAR_5, "RTC_INTERRUPTS reg read failed, err = %d\n", VAR_10);
  return VAR_10;
 }

 if (VAR_8 & VAR_4)
  VAR_6->enabled = 1;
 return VAR_10;
}
