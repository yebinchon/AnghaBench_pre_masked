
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vchiq_drvdata {int fw; } ;
struct TYPE_8__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 struct device* FUNC_8 (int ,TYPE_2__*,int ,int *,char*) ;
 int VAR_8 ;
 struct device_node* FUNC_9 (int *,int *,char*) ;
 struct of_device_id* FUNC_10 (int ,int ) ;
 int FUNC_11 (struct device_node*) ;
 int FUNC_12 (struct platform_device*,struct vchiq_drvdata*) ;
 int FUNC_13 (struct device_node*) ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 int FUNC_14 () ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_17 (int ,char*) ;
 int VAR_14 ;
 int FUNC_18 (struct platform_device*,int *) ;
 void* FUNC_19 (struct platform_device*,char*) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_15)
{
 struct device_node *VAR_16;
 const struct of_device_id *VAR_17;
 struct vchiq_drvdata *VAR_18;
 struct device *VAR_19;
 int VAR_20;

 VAR_17 = FUNC_10(VAR_14, VAR_15->dev.of_node);
 VAR_18 = (struct vchiq_drvdata *)VAR_17->data;
 if (!VAR_18)
  return -VAR_0;

 VAR_16 = FUNC_9(((void*)0), ((void*)0),
       "raspberrypi,bcm2835-firmware");
 if (!VAR_16) {
  FUNC_7(&VAR_15->dev, "Missing firmware node\n");
  return -VAR_1;
 }

 VAR_18->fw = FUNC_13(VAR_16);
 FUNC_11(VAR_16);
 if (!VAR_18->fw)
  return -VAR_2;

 FUNC_12(VAR_15, VAR_18);

 VAR_20 = FUNC_18(VAR_15, &VAR_8);
 if (VAR_20)
  goto failed_platform_init;

 FUNC_6(&VAR_10, &VAR_13);
 VAR_10.owner = VAR_3;
 VAR_20 = FUNC_4(&VAR_10, VAR_12, 1);
 if (VAR_20) {
  FUNC_15(VAR_9,
   "Unable to register device");
  goto failed_platform_init;
 }

 VAR_19 = FUNC_8(VAR_11, &VAR_15->dev, VAR_12, ((void*)0),
      "vchiq");
 if (FUNC_0(VAR_19)) {
  VAR_20 = FUNC_3(VAR_19);
  goto failed_device_create;
 }

 FUNC_14();

 FUNC_16(VAR_9,
  "vchiq: initialised - version %d (min %d), device %d.%d",
  VAR_4, VAR_5,
  FUNC_1(VAR_12), FUNC_2(VAR_12));

 VAR_7 = FUNC_19(VAR_15, "bcm2835-camera");
 VAR_6 = FUNC_19(VAR_15, "bcm2835_audio");

 return 0;

failed_device_create:
 FUNC_5(&VAR_10);
failed_platform_init:
 FUNC_17(VAR_9, "could not load vchiq");
 return VAR_20;
}
