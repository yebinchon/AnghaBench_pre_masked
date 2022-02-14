
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int tm_year; int tm_isdst; int tm_yday; void* tm_wday; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct rtc_wkalrm {TYPE_1__ time; } ;
struct device {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,TYPE_1__*,void*,TYPE_1__*) ;
 int FUNC_2 (struct device*,int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct rtc_wkalrm *VAR_2)
{
 u8 VAR_3[6];
 int VAR_4;

 VAR_4 = FUNC_2(
   VAR_1, VAR_0, VAR_3, sizeof(VAR_3));
 if (VAR_4)
  return VAR_4;

 VAR_2->time.tm_sec = FUNC_0(VAR_3[0] & 0x7F);
 VAR_2->time.tm_min = FUNC_0(VAR_3[1] & 0x7F);
 VAR_2->time.tm_hour = FUNC_0(VAR_3[2] & 0x1F);
 VAR_2->time.tm_wday = FUNC_0(VAR_3[3] & 0x07) - 1;
 VAR_2->time.tm_mday = FUNC_0(VAR_3[4] & 0x3F);
 VAR_2->time.tm_mon = FUNC_0(VAR_3[5] & 0x1F) - 1;
 VAR_2->time.tm_year = -1;
 VAR_2->time.tm_isdst = -1;
 VAR_2->time.tm_yday = -1;

 FUNC_1(VAR_1, "Read alarm: %ptRdr(%d) %ptRt\n",
  &VAR_2->time, VAR_2->time.tm_wday, &VAR_2->time);
 return 0;
}
