
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dev; } ;
struct us_data {TYPE_1__* pusb_intf; struct usb_device* pusb_dev; } ;
struct swoc_info {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct swoc_info*) ;
 int FUNC_1 (int *,struct swoc_info*) ;
 int VAR_7 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct swoc_info*) ;
 struct swoc_info* FUNC_4 (int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (struct usb_device*,struct swoc_info*) ;
 int FUNC_8 (struct usb_device*,int ) ;
 scalar_t__ VAR_8 ;
 struct Scsi_Host* FUNC_9 (struct us_data*) ;
 int FUNC_10 (struct us_data*,char*) ;

int FUNC_11(struct us_data *VAR_9)
{
 int VAR_10, VAR_11;
 struct swoc_info *VAR_12;
 struct usb_device *VAR_13;
 struct Scsi_Host *VAR_14;

 VAR_11 = 3;
 VAR_10 = 0;
 VAR_13 = VAR_9->pusb_dev;

 VAR_14 = FUNC_9(VAR_9);
 FUNC_6(VAR_14);


 if (VAR_8 == VAR_5) {
  FUNC_10(VAR_9, "SWIMS: Forcing Modem Mode\n");
  VAR_10 = FUNC_8(VAR_13, VAR_4);
  if (VAR_10 < 0)
   FUNC_10(VAR_9, "SWIMS: Failed to switch to modem mode\n");
  return -VAR_0;
 }

 else if (VAR_8 == VAR_6) {
  FUNC_10(VAR_9, "SWIMS: Forcing Mass Storage Mode\n");
  goto complete;
 }

 else {
  FUNC_10(VAR_9, "SWIMS: Normal SWoC Logic\n");

  VAR_12 = FUNC_4(sizeof(struct swoc_info),
    VAR_2);
  if (!VAR_12)
   return -VAR_1;

  VAR_11 = 3;
  do {
   VAR_11--;
   VAR_10 = FUNC_7(VAR_13, VAR_12);
   if (VAR_10 < 0) {
    FUNC_10(VAR_9, "SWIMS: Failed SWoC query\n");
    FUNC_5(2*VAR_3);
   }
  } while (VAR_11 && VAR_10 < 0);

  if (VAR_10 < 0) {
   FUNC_10(VAR_9, "SWIMS: Completely failed SWoC query\n");
   FUNC_3(VAR_12);
   return -VAR_0;
  }

  FUNC_1(&VAR_9->pusb_dev->dev, VAR_12);





  if (!FUNC_0(VAR_12)) {
   FUNC_10(VAR_9, "SWIMS: Switching to Modem Mode\n");
   VAR_10 = FUNC_8(VAR_13,
    VAR_4);
   if (VAR_10 < 0)
    FUNC_10(VAR_9, "SWIMS: Failed to switch modem\n");
   FUNC_3(VAR_12);
   return -VAR_0;
  }
  FUNC_3(VAR_12);
 }
complete:
 return FUNC_2(&VAR_9->pusb_intf->dev, &VAR_7);
}
