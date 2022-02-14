
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtc_wkalrm {int time; } ;
struct device {int dummy; } ;
struct cros_ec_rtc {struct cros_ec_device* cros_ec; } ;
struct cros_ec_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cros_ec_device*,int ,scalar_t__*) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct cros_ec_rtc* FUNC_2 (struct device*) ;
 int FUNC_3 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, struct rtc_wkalrm *VAR_3)
{
 struct cros_ec_rtc *VAR_4 = FUNC_2(VAR_2);
 struct cros_ec_device *VAR_5 = VAR_4->cros_ec;
 int VAR_6;
 u32 VAR_7, VAR_8;






 VAR_6 = FUNC_0(VAR_5, VAR_1, &VAR_7);
 if (VAR_6 < 0) {
  FUNC_1(VAR_2, "error getting time: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_0(VAR_5, VAR_0, &VAR_8);
 if (VAR_6 < 0) {
  FUNC_1(VAR_2, "error getting alarm: %d\n", VAR_6);
  return VAR_6;
 }

 FUNC_3(VAR_7 + VAR_8, &VAR_3->time);

 return 0;
}
