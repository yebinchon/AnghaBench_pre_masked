
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {int dev; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_4__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct TYPE_6__ {int * parent; } ;
struct rc_dev {char* device_name; struct imon* priv; int rx_resolution; int map_name; int allowed_protocols; TYPE_3__ dev; int input_id; int input_phys; int driver_name; } ;
struct imon {int ir_urb; struct rc_dev* rcdev; int phys; int ir_buf; int * dev; } ;
struct TYPE_5__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 struct imon* FUNC_1 (int *,int,int ) ;
 struct rc_dev* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,struct rc_dev*) ;
 int VAR_8 ;
 struct usb_device* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct usb_endpoint_descriptor*) ;
 int FUNC_7 (int ,struct usb_device*,int ,int *,int,int ,struct imon*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct usb_device*,int ,int) ;
 int FUNC_10 (struct usb_device*,int ) ;
 int FUNC_11 (struct usb_interface*,struct imon*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct usb_device*,int *) ;

__attribute__((used)) static int FUNC_14(struct usb_interface *VAR_9,
        const struct usb_device_id *VAR_10)
{
 struct usb_endpoint_descriptor *VAR_11 = ((void*)0);
 struct usb_host_interface *VAR_12;
 struct usb_device *VAR_13;
 struct rc_dev *VAR_14;
 struct imon *VAR_15;
 int VAR_16, VAR_17;

 VAR_13 = FUNC_4(VAR_9);
 VAR_12 = VAR_9->cur_altsetting;

 for (VAR_16 = 0; VAR_16 < VAR_12->desc.bNumEndpoints; VAR_16++) {
  struct usb_endpoint_descriptor *VAR_18 = &VAR_12->endpoint[VAR_16].desc;

  if (FUNC_6(VAR_18)) {
   VAR_11 = VAR_18;
   break;
  }
 }

 if (!VAR_11) {
  FUNC_0(&VAR_9->dev, "IR endpoint missing");
  return -VAR_1;
 }

 VAR_15 = FUNC_1(&VAR_9->dev, sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return -VAR_2;

 VAR_15->ir_urb = FUNC_5(0, VAR_3);
 if (!VAR_15->ir_urb)
  return -VAR_2;

 VAR_15->dev = &VAR_9->dev;
 FUNC_7(VAR_15->ir_urb, VAR_13,
    FUNC_10(VAR_13, VAR_11->bEndpointAddress),
    &VAR_15->ir_buf, sizeof(VAR_15->ir_buf),
    VAR_8, VAR_15, VAR_11->bInterval);

 VAR_14 = FUNC_2(&VAR_9->dev, VAR_5);
 if (!VAR_14) {
  VAR_17 = -VAR_2;
  goto free_urb;
 }

 FUNC_9(VAR_13, VAR_15->phys, sizeof(VAR_15->phys));

 VAR_14->device_name = "iMON Station";
 VAR_14->driver_name = VAR_4;
 VAR_14->input_phys = VAR_15->phys;
 FUNC_13(VAR_13, &VAR_14->input_id);
 VAR_14->dev.parent = &VAR_9->dev;
 VAR_14->allowed_protocols = VAR_7;
 VAR_14->map_name = VAR_6;
 VAR_14->rx_resolution = VAR_0;
 VAR_14->priv = VAR_15;

 VAR_17 = FUNC_3(&VAR_9->dev, VAR_14);
 if (VAR_17)
  goto free_urb;

 VAR_15->rcdev = VAR_14;

 VAR_17 = FUNC_12(VAR_15->ir_urb, VAR_3);
 if (VAR_17)
  goto free_urb;

 FUNC_11(VAR_9, VAR_15);

 return 0;

free_urb:
 FUNC_8(VAR_15->ir_urb);
 return VAR_17;
}
