
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct brcmf_usbdev_info {struct device* dev; int dev_init_done; int settings; } ;
struct brcmf_usbdev {int chiprev; int devid; struct brcmf_fw_request* bus; } ;
struct TYPE_2__ {struct brcmf_usbdev* usb; } ;
struct brcmf_fw_request {int always_use_fws_queue; int wowl_supported; int chiprev; int chip; struct device* dev; int proto_type; int * ops; TYPE_1__ bus_priv; } ;
struct brcmf_bus {int always_use_fws_queue; int wowl_supported; int chiprev; int chip; struct device* dev; int proto_type; int * ops; TYPE_1__ bus_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,struct brcmf_fw_request*,int ) ;
 int FUNC_6 (struct device*,int ,int ,int ) ;
 struct brcmf_usbdev* FUNC_7 (struct brcmf_usbdev_info*,int ,int ) ;
 int VAR_8 ;
 int FUNC_8 (struct brcmf_usbdev_info*) ;
 int FUNC_9 (struct brcmf_usbdev_info*) ;
 struct brcmf_fw_request* FUNC_10 (struct brcmf_usbdev_info*) ;
 int VAR_9 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct device*,struct brcmf_fw_request*) ;
 int FUNC_13 (struct brcmf_fw_request*) ;
 struct brcmf_fw_request* FUNC_14 (int,int ) ;

__attribute__((used)) static int FUNC_15(struct brcmf_usbdev_info *VAR_10)
{
 struct brcmf_bus *VAR_11 = ((void*)0);
 struct brcmf_usbdev *VAR_12 = ((void*)0);
 struct device *VAR_13 = VAR_10->dev;
 struct brcmf_fw_request *VAR_14;
 int VAR_15;

 FUNC_2(VAR_7, "Enter\n");
 VAR_12 = FUNC_7(VAR_10, VAR_2, VAR_3);
 if (!VAR_12)
  return -VAR_4;

 VAR_11 = FUNC_14(sizeof(struct brcmf_bus), VAR_6);
 if (!VAR_11) {
  VAR_15 = -VAR_5;
  goto fail;
 }

 VAR_11->dev = VAR_13;
 VAR_12->bus = VAR_11;
 VAR_11->bus_priv.usb = VAR_12;
 FUNC_12(VAR_13, VAR_11);
 VAR_11->ops = &VAR_8;
 VAR_11->proto_type = VAR_1;
 VAR_11->always_use_fws_queue = 1;




 VAR_10->settings = FUNC_6(VAR_11->dev, VAR_0,
         VAR_12->devid,
         VAR_12->chiprev);
 if (!VAR_10->settings) {
  VAR_15 = -VAR_5;
  goto fail;
 }

 if (!FUNC_9(VAR_10)) {
  VAR_15 = FUNC_0(VAR_10->dev, VAR_10->settings);
  if (VAR_15)
   goto fail;
  VAR_15 = FUNC_1(VAR_10->dev);
  if (VAR_15)
   goto fail;

  FUNC_11(&VAR_10->dev_init_done);
  return 0;
 }
 VAR_11->chip = VAR_12->devid;
 VAR_11->chiprev = VAR_12->chiprev;

 VAR_14 = FUNC_10(VAR_10);
 if (!VAR_14) {
  VAR_15 = -VAR_5;
  goto fail;
 }


 VAR_15 = FUNC_5(VAR_13, VAR_14, VAR_9);
 if (VAR_15) {
  FUNC_3("firmware request failed: %d\n", VAR_15);
  FUNC_13(VAR_14);
  goto fail;
 }

 return 0;

fail:

 FUNC_4(VAR_10->dev);
 FUNC_13(VAR_11);
 FUNC_8(VAR_10);
 return VAR_15;
}
