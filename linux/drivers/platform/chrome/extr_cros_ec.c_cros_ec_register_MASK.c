
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_response_get_protocol_info {int dummy; } ;
struct ec_params_hello {int dummy; } ;
struct device {scalar_t__ of_node; } ;
struct cros_ec_platform {int dummy; } ;
struct cros_ec_device {int max_request; int max_response; int irq; struct device* dev; void* ec; void* pd; scalar_t__ max_passthru; int lock; void* dout; int dout_size; void* din; int din_size; int event_notifier; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (void*) ;
 int VAR_5 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct cros_ec_device*) ;
 int FUNC_5 (struct cros_ec_device*,int ) ;
 int FUNC_6 (struct device*,char*,int) ;
 int FUNC_7 (struct device*,char*,...) ;
 int FUNC_8 (struct device*,char*) ;
 void* FUNC_9 (struct device*,int ,int ) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*,int,int *,int ,int,char*,struct cros_ec_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (int *) ;
 int VAR_8 ;
 void* FUNC_13 (struct device*,char*,int ,int *,int) ;
 int FUNC_14 (void*) ;

int FUNC_15(struct cros_ec_device *VAR_9)
{
 struct device *VAR_10 = VAR_9->dev;
 int VAR_11 = 0;

 FUNC_0(&VAR_9->event_notifier);

 VAR_9->max_request = sizeof(struct ec_params_hello);
 VAR_9->max_response = sizeof(struct ec_response_get_protocol_info);
 VAR_9->max_passthru = 0;

 VAR_9->din = FUNC_9(VAR_10, VAR_9->din_size, VAR_2);
 if (!VAR_9->din)
  return -VAR_1;

 VAR_9->dout = FUNC_9(VAR_10, VAR_9->dout_size, VAR_2);
 if (!VAR_9->dout)
  return -VAR_1;

 FUNC_12(&VAR_9->lock);

 VAR_11 = FUNC_4(VAR_9);
 if (VAR_11) {
  FUNC_7(VAR_10, "Cannot identify the EC: error %d\n", VAR_11);
  return VAR_11;
 }

 if (VAR_9->irq) {
  VAR_11 = FUNC_11(VAR_10, VAR_9->irq, ((void*)0),
    VAR_6, VAR_4 | VAR_3,
    "chromeos-ec", VAR_9);
  if (VAR_11) {
   FUNC_7(VAR_10, "Failed to request IRQ %d: %d",
    VAR_9->irq, VAR_11);
   return VAR_11;
  }
 }


 VAR_9->ec = FUNC_13(VAR_9->dev, "cros-ec-dev",
     VAR_5, &VAR_7,
     sizeof(struct cros_ec_platform));
 if (FUNC_2(VAR_9->ec)) {
  FUNC_7(VAR_9->dev,
   "Failed to create CrOS EC platform device\n");
  return FUNC_3(VAR_9->ec);
 }

 if (VAR_9->max_passthru) {
  VAR_9->pd = FUNC_13(VAR_9->dev,
     "cros-ec-dev",
     VAR_5, &VAR_8,
     sizeof(struct cros_ec_platform));
  if (FUNC_2(VAR_9->pd)) {
   FUNC_7(VAR_9->dev,
    "Failed to create CrOS PD platform device\n");
   FUNC_14(VAR_9->ec);
   return FUNC_3(VAR_9->pd);
  }
 }

 if (FUNC_1(VAR_0) && VAR_10->of_node) {
  VAR_11 = FUNC_10(VAR_10);
  if (VAR_11) {
   FUNC_14(VAR_9->pd);
   FUNC_14(VAR_9->ec);
   FUNC_7(VAR_10, "Failed to register sub-devices\n");
   return VAR_11;
  }
 }





 VAR_11 = FUNC_5(VAR_9, 0);
 if (VAR_11 < 0)
  FUNC_6(VAR_9->dev, "Error %d clearing sleep event to ec",
   VAR_11);

 FUNC_8(VAR_10, "Chrome EC device registered\n");

 return 0;
}
