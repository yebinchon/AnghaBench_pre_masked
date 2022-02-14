
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct cros_ec_rtc {int notifier; TYPE_1__* cros_ec; } ;
struct TYPE_2__ {int event_notifier; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct device*,char*) ;
 struct cros_ec_rtc* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct cros_ec_rtc *VAR_1 = FUNC_2(VAR_0);
 struct device *VAR_2 = &VAR_0->dev;
 int VAR_3;

 VAR_3 = FUNC_0(
    &VAR_1->cros_ec->event_notifier,
    &VAR_1->notifier);
 if (VAR_3) {
  FUNC_1(VAR_2, "failed to unregister notifier\n");
  return VAR_3;
 }

 return 0;
}
