
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dev; struct usb_host_interface* cur_altsetting; } ;
struct usb_host_interface {int dummy; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_2__ {scalar_t__ bDeviceProtocol; } ;
struct usb_device {int dev; scalar_t__ parent; TYPE_1__ descriptor; } ;
struct lvs_rh {int urb; int * buffer; int rh_work; int descriptor; struct usb_interface* intf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,char*,...) ;
 struct lvs_rh* FUNC_2 (int *,int,int ) ;
 struct usb_device* FUNC_3 (struct usb_interface*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct usb_device*,int ,int ,int,int,int ,int *,int ,int ) ;
 int FUNC_6 (int ,struct usb_device*,unsigned int,int *,int,int ,struct lvs_rh*,int ) ;
 int FUNC_7 (struct usb_host_interface*,struct usb_endpoint_descriptor**) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct usb_device*,unsigned int,int ) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (struct usb_device*,int ) ;
 unsigned int FUNC_12 (struct usb_device*,int ) ;
 int FUNC_13 (struct usb_interface*,struct lvs_rh*) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static int FUNC_15(struct usb_interface *VAR_13,
  const struct usb_device_id *VAR_14)
{
 struct usb_device *VAR_15;
 struct usb_host_interface *VAR_16;
 struct usb_endpoint_descriptor *VAR_17;
 struct lvs_rh *VAR_18;
 unsigned int VAR_19;
 int VAR_20, VAR_21;

 VAR_15 = FUNC_3(VAR_13);
 VAR_16 = VAR_13->cur_altsetting;

 VAR_20 = FUNC_7(VAR_16, &VAR_17);
 if (VAR_20)
  return VAR_20;


 if (VAR_15->descriptor.bDeviceProtocol != VAR_8 || VAR_15->parent) {
  FUNC_1(&VAR_13->dev, "Bind LVS driver with SS root Hub only\n");
  return -VAR_0;
 }

 VAR_18 = FUNC_2(&VAR_13->dev, sizeof(*VAR_18), VAR_2);
 if (!VAR_18)
  return -VAR_1;

 VAR_18->intf = VAR_13;
 FUNC_13(VAR_13, VAR_18);


 VAR_20 = FUNC_5(VAR_15, FUNC_11(VAR_15, 0),
   VAR_9, VAR_4 | VAR_10,
   VAR_6 << 8, 0, &VAR_18->descriptor,
   VAR_7, VAR_3);
 if (VAR_20 < (VAR_5 + 2)) {
  FUNC_1(&VAR_15->dev, "wrong root hub descriptor read %d\n", VAR_20);
  return VAR_20;
 }


 VAR_18->urb = FUNC_4(0, VAR_2);
 if (!VAR_18->urb)
  return -VAR_1;

 FUNC_0(&VAR_18->rh_work, VAR_12);

 VAR_19 = FUNC_12(VAR_15, VAR_17->bEndpointAddress);
 VAR_21 = FUNC_9(VAR_15, VAR_19, FUNC_10(VAR_19));
 FUNC_6(VAR_18->urb, VAR_15, VAR_19, &VAR_18->buffer[0], VAR_21,
   VAR_11, VAR_18, VAR_17->bInterval);

 VAR_20 = FUNC_14(VAR_18->urb, VAR_2);
 if (VAR_20 < 0) {
  FUNC_1(&VAR_13->dev, "couldn't submit lvs urb %d\n", VAR_20);
  goto free_urb;
 }

 return VAR_20;

free_urb:
 FUNC_8(VAR_18->urb);
 return VAR_20;
}
