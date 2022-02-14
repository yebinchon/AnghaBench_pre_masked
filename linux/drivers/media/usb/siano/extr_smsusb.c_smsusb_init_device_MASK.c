
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct usb_interface {TYPE_3__* cur_altsetting; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; } ;
struct smsusb_device_t {int in_ep; int out_ep; int response_alignment; TYPE_6__* coredev; int state; TYPE_4__* surbs; TYPE_5__* udev; int buffer_size; } ;
struct smsdevice_params_t {int device_type; int devpath; struct smsusb_device_t* context; int sendrequest_handler; int num_buffers; int buffer_size; TYPE_5__* usb_device; int * device; int flags; int detectmode_handler; int setmode_handler; } ;
struct sms_msg_hdr {int dummy; } ;
typedef int params ;
struct TYPE_17__ {int type; } ;
struct TYPE_16__ {int is_usb_device; } ;
struct TYPE_15__ {int dev; } ;
struct TYPE_14__ {int urb; struct smsusb_device_t* dev; } ;
struct TYPE_11__ {int bNumEndpoints; } ;
struct TYPE_13__ {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct TYPE_12__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_5__* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (void*) ;
 struct smsusb_device_t* FUNC_2 (int,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct smsdevice_params_t*,int ,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,...) ;
 void* FUNC_7 (struct smsusb_device_t*,int) ;
 TYPE_9__* FUNC_8 (int) ;
 int FUNC_9 (struct smsdevice_params_t*,TYPE_6__**,int ,void*) ;
 int FUNC_10 (TYPE_6__*,int) ;
 int FUNC_11 (TYPE_6__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_12 (struct smsusb_device_t*) ;
 int FUNC_13 (struct usb_interface*) ;
 int FUNC_14 (struct usb_endpoint_descriptor*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_5__*,int ,int) ;
 int FUNC_17 (struct usb_interface*,struct smsusb_device_t*) ;

__attribute__((used)) static int FUNC_18(struct usb_interface *VAR_14, int VAR_15)
{
 struct smsdevice_params_t VAR_16;
 struct smsusb_device_t *VAR_17;
 void *VAR_18;
 int VAR_19, VAR_20;
 int VAR_21 = 0;


 VAR_17 = FUNC_2(sizeof(struct smsusb_device_t), VAR_2);
 if (!VAR_17)
  return -VAR_1;

 FUNC_4(&VAR_16, 0, sizeof(VAR_16));
 FUNC_17(VAR_14, VAR_17);
 VAR_17->udev = FUNC_0(VAR_14);
 VAR_17->state = VAR_6;

 for (VAR_19 = 0; VAR_19 < VAR_14->cur_altsetting->desc.bNumEndpoints; VAR_19++) {
  struct usb_endpoint_descriptor *VAR_22 =
    &VAR_14->cur_altsetting->endpoint[VAR_19].desc;

  if (VAR_22->bEndpointAddress & VAR_10) {
   VAR_17->in_ep = VAR_22->bEndpointAddress;
   VAR_21 = FUNC_14(VAR_22) - sizeof(struct sms_msg_hdr);
  } else {
   VAR_17->out_ep = VAR_22->bEndpointAddress;
  }
 }

 FUNC_5("in_ep = %02x, out_ep = %02x\n", VAR_17->in_ep, VAR_17->out_ep);
 if (!VAR_17->in_ep || !VAR_17->out_ep || VAR_21 < 0) {
  FUNC_13(VAR_14);
  return -VAR_0;
 }

 VAR_16.device_type = FUNC_8(VAR_15)->type;

 switch (VAR_16.device_type) {
 case 129:
  VAR_17->buffer_size = VAR_8;

  VAR_16.setmode_handler = VAR_12;
  VAR_16.detectmode_handler = VAR_11;
  break;
 case 128:
  FUNC_6("Unspecified sms device type!\n");

 default:
  VAR_17->buffer_size = VAR_9;
  VAR_17->response_alignment = VAR_21;

  VAR_16.flags |= VAR_7;
  break;
 }

 VAR_16.device = &VAR_17->udev->dev;
 VAR_16.usb_device = VAR_17->udev;
 VAR_16.buffer_size = VAR_17->buffer_size;
 VAR_16.num_buffers = VAR_3;
 VAR_16.sendrequest_handler = VAR_13;
 VAR_16.context = VAR_17;
 FUNC_16(VAR_17->udev, VAR_16.devpath, sizeof(VAR_16.devpath));

 VAR_18 = FUNC_7(VAR_17, VAR_15);


 VAR_20 = FUNC_9(&VAR_16, &VAR_17->coredev, 0, VAR_18);
 if (VAR_20 < 0) {
  FUNC_6("smscore_register_device(...) failed, rc %d\n", VAR_20);
  FUNC_13(VAR_14);



  FUNC_1(VAR_18);
  return VAR_20;
 }

 FUNC_10(VAR_17->coredev, VAR_15);

 VAR_17->coredev->is_usb_device = 1;


 for (VAR_19 = 0; VAR_19 < VAR_4; VAR_19++) {
  VAR_17->surbs[VAR_19].dev = VAR_17;
  FUNC_15(&VAR_17->surbs[VAR_19].urb);
 }

 FUNC_5("smsusb_start_streaming(...).\n");
 VAR_20 = FUNC_12(VAR_17);
 if (VAR_20 < 0) {
  FUNC_6("smsusb_start_streaming(...) failed\n");
  FUNC_13(VAR_14);
  return VAR_20;
 }

 VAR_17->state = VAR_5;

 VAR_20 = FUNC_11(VAR_17->coredev);
 if (VAR_20 < 0) {
  FUNC_6("smscore_start_device(...) failed\n");
  FUNC_13(VAR_14);
  return VAR_20;
 }

 FUNC_5("device 0x%p created\n", VAR_17);

 return VAR_20;
}
