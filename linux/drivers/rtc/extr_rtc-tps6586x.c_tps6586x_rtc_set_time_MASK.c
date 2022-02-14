
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u8 ;
typedef scalar_t__ time64_t ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;
typedef int buff ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct rtc_time*) ;
 struct device* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int ,int ) ;
 int FUNC_4 (struct device*,int ,int ) ;
 int FUNC_5 (struct device*,int ,int,unsigned long long*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3, struct rtc_time *VAR_4)
{
 struct device *VAR_5 = FUNC_2(VAR_3);
 unsigned long long VAR_6;
 time64_t VAR_7;
 u8 VAR_8[5];
 int VAR_9;

 VAR_7 = FUNC_1(VAR_4);

 VAR_6 = (unsigned long long)VAR_7 << 10;
 VAR_8[0] = (VAR_6 >> 32) & 0xff;
 VAR_8[1] = (VAR_6 >> 24) & 0xff;
 VAR_8[2] = (VAR_6 >> 16) & 0xff;
 VAR_8[3] = (VAR_6 >> 8) & 0xff;
 VAR_8[4] = VAR_6 & 0xff;


 VAR_9 = FUNC_3(VAR_5, VAR_1, VAR_2);
 if (VAR_9 < 0) {
  FUNC_0(VAR_3, "failed to clear RTC_ENABLE\n");
  return VAR_9;
 }

 VAR_9 = FUNC_5(VAR_5, VAR_0, sizeof(VAR_8), VAR_8);
 if (VAR_9 < 0) {
  FUNC_0(VAR_3, "failed to program new time\n");
  return VAR_9;
 }


 VAR_9 = FUNC_4(VAR_5, VAR_1, VAR_2);
 if (VAR_9 < 0) {
  FUNC_0(VAR_3, "failed to set RTC_ENABLE\n");
  return VAR_9;
 }
 return 0;
}
