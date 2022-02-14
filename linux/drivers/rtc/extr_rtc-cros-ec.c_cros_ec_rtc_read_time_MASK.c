
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;
struct cros_ec_rtc {struct cros_ec_device* cros_ec; } ;
struct cros_ec_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cros_ec_device*,int ,int *) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct cros_ec_rtc* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,struct rtc_time*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct cros_ec_rtc *VAR_3 = FUNC_2(VAR_1);
 struct cros_ec_device *VAR_4 = VAR_3->cros_ec;
 int VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_0(VAR_4, VAR_0, &VAR_6);
 if (VAR_5) {
  FUNC_1(VAR_1, "error getting time: %d\n", VAR_5);
  return VAR_5;
 }

 FUNC_3(VAR_6, VAR_2);

 return 0;
}
