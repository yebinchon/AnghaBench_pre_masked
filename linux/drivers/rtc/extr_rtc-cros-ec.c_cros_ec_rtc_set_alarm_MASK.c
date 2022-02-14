
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ time64_t ;
struct rtc_wkalrm {int enabled; int time; } ;
struct device {int dummy; } ;
struct cros_ec_rtc {scalar_t__ saved_alarm; struct cros_ec_device* cros_ec; } ;
struct cros_ec_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct cros_ec_device*,int ,scalar_t__*) ;
 int FUNC_1 (struct cros_ec_device*,int ,scalar_t__) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct cros_ec_rtc* FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_6, struct rtc_wkalrm *VAR_7)
{
 struct cros_ec_rtc *VAR_8 = FUNC_3(VAR_6);
 struct cros_ec_device *VAR_9 = VAR_8->cros_ec;
 int VAR_10;
 time64_t VAR_11;
 u32 VAR_12, VAR_13;







 VAR_10 = FUNC_0(VAR_9, VAR_0, &VAR_12);
 if (VAR_10 < 0) {
  FUNC_2(VAR_6, "error getting time: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_11 = FUNC_4(&VAR_7->time);

 if (VAR_11 < 0 || VAR_11 > VAR_5)
  return -VAR_3;

 if (!VAR_7->enabled) {




  VAR_13 = VAR_2;
  VAR_8->saved_alarm = (u32)VAR_11;
 } else {

  if ((u32)VAR_11 <= VAR_12)
   return -VAR_4;

  VAR_13 = (u32)VAR_11 - VAR_12;
 }

 VAR_10 = FUNC_1(VAR_9, VAR_1, VAR_13);
 if (VAR_10 < 0) {
  FUNC_2(VAR_6, "error setting alarm: %d\n", VAR_10);
  return VAR_10;
 }

 return 0;
}
