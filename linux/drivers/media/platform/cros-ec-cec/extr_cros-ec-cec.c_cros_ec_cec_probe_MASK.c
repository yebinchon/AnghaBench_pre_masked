
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct cros_ec_device {int event_notifier; } ;
struct cros_ec_dev {struct cros_ec_device* ec_dev; } ;
struct TYPE_8__ {int notifier_call; } ;
struct cros_ec_cec {struct device* adap; int notify; TYPE_6__ notifier; struct cros_ec_device* cros_ec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int *,TYPE_6__*) ;
 struct device* FUNC_3 (int *,struct cros_ec_cec*,int ,int,int) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,char const*,struct device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct device*,TYPE_1__*) ;
 int VAR_5 ;
 struct device* FUNC_8 (TYPE_1__*,char const**) ;
 int VAR_6 ;
 int FUNC_9 (TYPE_1__*,char*) ;
 struct cros_ec_dev* FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*,int) ;
 struct cros_ec_cec* FUNC_12 (TYPE_1__*,int,int ) ;
 int FUNC_13 (struct platform_device*,struct cros_ec_cec*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_7)
{
 struct cros_ec_dev *VAR_8 = FUNC_10(VAR_7->dev.parent);
 struct cros_ec_device *VAR_9 = VAR_8->ec_dev;
 struct cros_ec_cec *VAR_10;
 struct device *VAR_11;
 const char *VAR_12 = ((void*)0);
 int VAR_13;

 VAR_11 = FUNC_8(&VAR_7->dev, &VAR_12);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_10 = FUNC_12(&VAR_7->dev, sizeof(*VAR_10),
       VAR_4);
 if (!VAR_10)
  return -VAR_3;

 FUNC_13(VAR_7, VAR_10);
 VAR_10->cros_ec = VAR_9;

 VAR_13 = FUNC_11(&VAR_7->dev, 1);
 if (VAR_13) {
  FUNC_9(&VAR_7->dev, "failed to initialize wakeup\n");
  return VAR_13;
 }

 VAR_10->adap = FUNC_3(&VAR_6, VAR_10,
       VAR_2,
       VAR_1 |
       VAR_0, 1);
 if (FUNC_0(VAR_10->adap))
  return FUNC_1(VAR_10->adap);

 VAR_10->notify = FUNC_5(VAR_11, VAR_12,
            VAR_10->adap);
 if (!VAR_10->notify) {
  VAR_13 = -VAR_3;
  goto out_probe_adapter;
 }


 VAR_10->notifier.notifier_call = VAR_5;
 VAR_13 = FUNC_2(&VAR_9->event_notifier,
            &VAR_10->notifier);
 if (VAR_13) {
  FUNC_9(&VAR_7->dev, "failed to register notifier\n");
  goto out_probe_notify;
 }

 VAR_13 = FUNC_7(VAR_10->adap, &VAR_7->dev);
 if (VAR_13 < 0)
  goto out_probe_notify;

 return 0;

out_probe_notify:
 FUNC_6(VAR_10->notify);
out_probe_adapter:
 FUNC_4(VAR_10->adap);
 return VAR_13;
}
