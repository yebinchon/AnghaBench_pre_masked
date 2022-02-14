
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct twl_rtc {int rtc_irq_bits; int * reg_map; } ;
struct TYPE_2__ {void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct rtc_wkalrm {int enabled; TYPE_1__ time; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (unsigned char) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct twl_rtc* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 struct twl_rtc *VAR_6 = FUNC_2(VAR_4);
 unsigned char VAR_7[VAR_0];
 int VAR_8;

 VAR_8 = FUNC_3(VAR_3, VAR_7,
   VAR_6->reg_map[VAR_2], VAR_0);
 if (VAR_8 < 0) {
  FUNC_1(VAR_4, "rtc_read_alarm error %d\n", VAR_8);
  return VAR_8;
 }


 VAR_5->time.tm_sec = FUNC_0(VAR_7[0]);
 VAR_5->time.tm_min = FUNC_0(VAR_7[1]);
 VAR_5->time.tm_hour = FUNC_0(VAR_7[2]);
 VAR_5->time.tm_mday = FUNC_0(VAR_7[3]);
 VAR_5->time.tm_mon = FUNC_0(VAR_7[4]) - 1;
 VAR_5->time.tm_year = FUNC_0(VAR_7[5]) + 100;


 if (VAR_6->rtc_irq_bits & VAR_1)
  VAR_5->enabled = 1;

 return VAR_8;
}
