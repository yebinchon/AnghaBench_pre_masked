
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned long time64_t ;
struct rtc_wkalrm {int time; } ;
struct device {int dummy; } ;
typedef int buff ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (unsigned long,int *) ;
 struct device* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int ,int,int*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, struct rtc_wkalrm *VAR_2)
{
 struct device *VAR_3 = FUNC_2(VAR_1);
 unsigned long VAR_4;
 time64_t VAR_5;
 u8 VAR_6[3];
 int VAR_7;

 VAR_7 = FUNC_3(VAR_3, VAR_0, sizeof(VAR_6), VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_1, "read RTC_ALARM1_HI failed with err %d\n", VAR_7);
  return VAR_7;
 }

 VAR_4 = (VAR_6[0] << 16) | (VAR_6[1] << 8) | VAR_6[2];
 VAR_5 = VAR_4 >> 10;

 FUNC_1(VAR_5, &VAR_2->time);
 return 0;
}
