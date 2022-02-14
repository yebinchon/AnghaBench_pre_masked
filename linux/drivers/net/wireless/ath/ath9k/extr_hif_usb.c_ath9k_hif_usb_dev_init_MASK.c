
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hif_device_usb {TYPE_1__* udev; int fw_name; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct hif_device_usb*) ;
 int FUNC_1 (struct hif_device_usb*) ;
 int FUNC_2 (int *,char*,...) ;

__attribute__((used)) static int FUNC_3(struct hif_device_usb *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  FUNC_2(&VAR_0->udev->dev,
   "ath9k_htc: Firmware - %s download failed\n",
   VAR_0->fw_name);
  return VAR_1;
 }


 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1) {
  FUNC_2(&VAR_0->udev->dev,
   "ath9k_htc: Unable to allocate URBs\n");
  return VAR_1;
 }

 return 0;
}
