
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct twl_rtc {int * reg_map; } ;
struct TYPE_2__ {scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct rtc_wkalrm {scalar_t__ enabled; TYPE_1__ time; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct twl_rtc* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,unsigned char*,int ,int) ;
 int FUNC_4 (struct device*,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct twl_rtc *VAR_5 = FUNC_2(VAR_3);

 unsigned char VAR_6[VAR_0];
 int VAR_7;

 VAR_7 = FUNC_4(VAR_3, 0);
 if (VAR_7)
  goto out;

 VAR_6[0] = FUNC_0(VAR_4->time.tm_sec);
 VAR_6[1] = FUNC_0(VAR_4->time.tm_min);
 VAR_6[2] = FUNC_0(VAR_4->time.tm_hour);
 VAR_6[3] = FUNC_0(VAR_4->time.tm_mday);
 VAR_6[4] = FUNC_0(VAR_4->time.tm_mon + 1);
 VAR_6[5] = FUNC_0(VAR_4->time.tm_year - 100);


 VAR_7 = FUNC_3(VAR_2, VAR_6,
   VAR_5->reg_map[VAR_1], VAR_0);
 if (VAR_7) {
  FUNC_1(VAR_3, "rtc_set_alarm error %d\n", VAR_7);
  goto out;
 }

 if (VAR_4->enabled)
  VAR_7 = FUNC_4(VAR_3, 1);
out:
 return VAR_7;
}
