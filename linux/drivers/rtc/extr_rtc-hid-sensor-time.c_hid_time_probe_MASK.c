
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_3__ {struct platform_device* pdev; int capture_sample; int send_event; } ;
struct TYPE_4__ {struct platform_device* pdev; struct hid_sensor_hub_device* hsdev; } ;
struct hid_time_state {int * rtc; TYPE_1__ callbacks; TYPE_2__ common_attributes; int comp_last_time; int lock_last_time; } ;
struct hid_sensor_hub_device {int hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int *,char*) ;
 struct hid_sensor_hub_device* FUNC_3 (int *) ;
 struct hid_time_state* FUNC_4 (int *,int,int ) ;
 int * FUNC_5 (int *,char*,int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct hid_sensor_hub_device*,int ,TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_9 (struct platform_device*,struct hid_sensor_hub_device*,int ,struct hid_time_state*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct platform_device*,struct hid_time_state*) ;
 int FUNC_12 (struct hid_sensor_hub_device*) ;
 int FUNC_13 (struct hid_sensor_hub_device*) ;
 int FUNC_14 (struct hid_sensor_hub_device*,int ,TYPE_1__*) ;
 int FUNC_15 (struct hid_sensor_hub_device*,int ) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_7)
{
 int VAR_8 = 0;
 struct hid_sensor_hub_device *VAR_9 = FUNC_3(&VAR_7->dev);
 struct hid_time_state *VAR_10 = FUNC_4(&VAR_7->dev,
  sizeof(struct hid_time_state), VAR_1);

 if (VAR_10 == ((void*)0))
  return -VAR_0;

 FUNC_11(VAR_7, VAR_10);

 FUNC_16(&VAR_10->lock_last_time);
 FUNC_10(&VAR_10->comp_last_time);
 VAR_10->common_attributes.hsdev = VAR_9;
 VAR_10->common_attributes.pdev = VAR_7;

 VAR_8 = FUNC_8(VAR_9,
    VAR_2,
    &VAR_10->common_attributes);
 if (VAR_8) {
  FUNC_2(&VAR_7->dev, "failed to setup common attributes!\n");
  return VAR_8;
 }

 VAR_8 = FUNC_9(VAR_7, VAR_9, VAR_2,
     VAR_10);
 if (VAR_8) {
  FUNC_2(&VAR_7->dev, "failed to setup attributes!\n");
  return VAR_8;
 }

 VAR_10->callbacks.send_event = VAR_5;
 VAR_10->callbacks.capture_sample = VAR_4;
 VAR_10->callbacks.pdev = VAR_7;
 VAR_8 = FUNC_14(VAR_9, VAR_2,
     &VAR_10->callbacks);
 if (VAR_8 < 0) {
  FUNC_2(&VAR_7->dev, "register callback failed!\n");
  return VAR_8;
 }

 VAR_8 = FUNC_13(VAR_9);
 if (VAR_8) {
  FUNC_2(&VAR_7->dev, "failed to open sensor hub device!\n");
  goto err_open;
 }





 FUNC_6(VAR_9->hdev);

 VAR_10->rtc = FUNC_5(&VAR_7->dev,
     "hid-sensor-time", &VAR_6,
     VAR_3);

 if (FUNC_0(VAR_10->rtc)) {
  FUNC_7(VAR_9->hdev);
  VAR_8 = FUNC_1(VAR_10->rtc);
  VAR_10->rtc = ((void*)0);
  FUNC_2(&VAR_7->dev, "rtc device register failed!\n");
  goto err_rtc;
 }

 return VAR_8;

err_rtc:
 FUNC_12(VAR_9);
err_open:
 FUNC_15(VAR_9, VAR_2);
 return VAR_8;
}
