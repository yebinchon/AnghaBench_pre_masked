
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct logger_data {int log_work; int log_workqueue; struct cros_ec_dev* ec_dev; struct device* dev; } ;
struct cros_ec_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 struct cros_ec_dev* FUNC_2 (int ) ;
 struct logger_data* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct platform_device*,struct logger_data*) ;
 int FUNC_5 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 struct cros_ec_dev *VAR_5 = FUNC_2(VAR_4->dev.parent);
 struct device *VAR_6 = &VAR_4->dev;
 struct logger_data *VAR_7;

 VAR_7 = FUNC_3(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->dev = VAR_6;
 VAR_7->ec_dev = VAR_5;

 FUNC_4(VAR_4, VAR_7);


 FUNC_0(&VAR_7->log_work, VAR_3);
 VAR_7->log_workqueue = FUNC_1("cros_usbpd_log");
 if (!VAR_7->log_workqueue)
  return -VAR_1;

 FUNC_5(VAR_7->log_workqueue, &VAR_7->log_work,
      VAR_0);

 return 0;
}
