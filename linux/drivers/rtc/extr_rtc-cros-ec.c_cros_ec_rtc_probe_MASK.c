
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rtc_time {int dummy; } ;
struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_8__ {int notifier_call; } ;
struct cros_ec_rtc {TYPE_6__ notifier; int rtc; struct cros_ec_device* cros_ec; } ;
struct cros_ec_device {int event_notifier; } ;
struct cros_ec_dev {struct cros_ec_device* ec_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,TYPE_6__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*,struct rtc_time*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 struct cros_ec_dev* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 struct cros_ec_rtc* FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int *,int ) ;
 int FUNC_9 (struct platform_device*,struct cros_ec_rtc*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_6)
{
 struct cros_ec_dev *VAR_7 = FUNC_5(VAR_6->dev.parent);
 struct cros_ec_device *VAR_8 = VAR_7->ec_dev;
 struct cros_ec_rtc *VAR_9;
 struct rtc_time VAR_10;
 int VAR_11;

 VAR_9 = FUNC_7(&VAR_6->dev, sizeof(*VAR_9),
       VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_9(VAR_6, VAR_9);
 VAR_9->cros_ec = VAR_8;


 VAR_11 = FUNC_3(&VAR_6->dev, &VAR_10);
 if (VAR_11) {
  FUNC_4(&VAR_6->dev, "failed to read RTC time\n");
  return VAR_11;
 }

 VAR_11 = FUNC_6(&VAR_6->dev, 1);
 if (VAR_11) {
  FUNC_4(&VAR_6->dev, "failed to initialize wakeup\n");
  return VAR_11;
 }

 VAR_9->rtc = FUNC_8(&VAR_6->dev, VAR_0,
          &VAR_5,
          VAR_3);
 if (FUNC_0(VAR_9->rtc)) {
  VAR_11 = FUNC_1(VAR_9->rtc);
  FUNC_4(&VAR_6->dev, "failed to register rtc device\n");
  return VAR_11;
 }


 VAR_9->notifier.notifier_call = VAR_4;
 VAR_11 = FUNC_2(&VAR_8->event_notifier,
            &VAR_9->notifier);
 if (VAR_11) {
  FUNC_4(&VAR_6->dev, "failed to register notifier\n");
  return VAR_11;
 }

 return 0;
}
