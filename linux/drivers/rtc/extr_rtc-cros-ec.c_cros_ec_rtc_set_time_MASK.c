
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ time64_t ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;
struct cros_ec_rtc {struct cros_ec_device* cros_ec; } ;
struct cros_ec_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct cros_ec_device*,int ,int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct cros_ec_rtc* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, struct rtc_time *VAR_4)
{
 struct cros_ec_rtc *VAR_5 = FUNC_2(VAR_3);
 struct cros_ec_device *VAR_6 = VAR_5->cros_ec;
 int VAR_7;
 time64_t VAR_8;

 VAR_8 = FUNC_3(VAR_4);
 if (VAR_8 < 0 || VAR_8 > VAR_2)
  return -VAR_1;

 VAR_7 = FUNC_0(VAR_6, VAR_0, (u32)VAR_8);
 if (VAR_7 < 0) {
  FUNC_1(VAR_3, "error setting time: %d\n", VAR_7);
  return VAR_7;
 }

 return 0;
}
