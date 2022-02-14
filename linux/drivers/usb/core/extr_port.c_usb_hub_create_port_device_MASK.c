
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int * driver; int * type; int groups; int parent; } ;
struct usb_port {int portnum; int usb3_lpm_u1_permit; int usb3_lpm_u2_permit; int is_superspeed; struct usb_port* req; TYPE_1__ dev; int status_lock; } ;
struct usb_hub {struct usb_device* hdev; int intfdev; int power_bits; struct usb_port** ports; } ;
struct usb_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,struct usb_port*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (struct usb_port*) ;
 int FUNC_4 (TYPE_1__*,char*,int ,int) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct usb_hub*,int) ;
 int FUNC_10 (struct usb_hub*) ;
 scalar_t__ FUNC_11 (struct usb_device*) ;
 int FUNC_12 (struct usb_port*) ;
 void* FUNC_13 (int,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (int,int ) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_20(struct usb_hub *VAR_8, int VAR_9)
{
 struct usb_port *VAR_10;
 struct usb_device *VAR_11 = VAR_8->hdev;
 int VAR_12;

 VAR_10 = FUNC_13(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->req = FUNC_13(sizeof(*(VAR_10->req)), VAR_2);
 if (!VAR_10->req) {
  FUNC_12(VAR_10);
  return -VAR_1;
 }

 VAR_8->ports[VAR_9 - 1] = VAR_10;
 VAR_10->portnum = VAR_9;
 FUNC_19(VAR_9, VAR_8->power_bits);
 VAR_10->dev.parent = VAR_8->intfdev;
 if (FUNC_11(VAR_11)) {
  VAR_10->usb3_lpm_u1_permit = 1;
  VAR_10->usb3_lpm_u2_permit = 1;
  VAR_10->dev.groups = VAR_5;
 } else
  VAR_10->dev.groups = VAR_4;
 VAR_10->dev.type = &VAR_6;
 VAR_10->dev.driver = &VAR_7;
 if (FUNC_11(VAR_8->hdev))
  VAR_10->is_superspeed = 1;
 FUNC_4(&VAR_10->dev, "%s-port%d", FUNC_0(&VAR_8->hdev->dev),
   VAR_9);
 FUNC_14(&VAR_10->status_lock);
 VAR_12 = FUNC_7(&VAR_10->dev);
 if (VAR_12) {
  FUNC_18(&VAR_10->dev);
  return VAR_12;
 }


 VAR_12 = FUNC_1(&VAR_10->dev, VAR_10->req,
   VAR_0, VAR_3);
 if (VAR_12 < 0) {
  FUNC_8(&VAR_10->dev);
  return VAR_12;
 }

 FUNC_9(VAR_8, VAR_9);






 FUNC_17(&VAR_10->dev);
 FUNC_16(&VAR_10->dev);
 FUNC_15(&VAR_10->dev);
 FUNC_6(&VAR_10->dev);





 if (!FUNC_10(VAR_8))
  return 0;


 VAR_12 = FUNC_2(&VAR_10->dev,
   VAR_3);
 if (VAR_12 < 0) {
  FUNC_5(&VAR_10->dev, "failed to expose pm_qos_no_poweroff\n");
  return 0;
 }


 VAR_12 = FUNC_3(VAR_10->req);
 if (VAR_12 >= 0) {
  FUNC_12(VAR_10->req);
  VAR_10->req = ((void*)0);
 }
 return 0;
}
