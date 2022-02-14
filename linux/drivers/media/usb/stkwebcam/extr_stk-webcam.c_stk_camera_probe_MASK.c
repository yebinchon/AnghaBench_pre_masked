
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct usb_interface {struct usb_host_interface* cur_altsetting; int dev; } ;
struct TYPE_6__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dev; } ;
struct TYPE_9__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct TYPE_8__ {int hflip; int vflip; int mode; int palette; } ;
struct stk_camera {int first_init; int frame_size; TYPE_4__ v4l2_dev; int sio_full; int sio_avail; TYPE_3__ vsettings; scalar_t__ isoc_ep; scalar_t__ n_sbufs; struct usb_interface* interface; struct usb_device* udev; int wait_frame; int lock; int spinlock; struct v4l2_ctrl_handler hdl; } ;
struct TYPE_7__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 struct usb_device* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct stk_camera*) ;
 struct stk_camera* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct stk_camera*) ;
 int FUNC_10 (int *) ;
 int VAR_9 ;
 int FUNC_11 (struct stk_camera*) ;
 int VAR_10 ;
 scalar_t__ FUNC_12 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_13 (struct usb_endpoint_descriptor*) ;
 int FUNC_14 (struct usb_interface*) ;
 int FUNC_15 (struct usb_interface*,struct stk_camera*) ;
 int FUNC_16 (struct v4l2_ctrl_handler*) ;
 int FUNC_17 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_18 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int) ;
 int FUNC_19 (int *,TYPE_4__*) ;
 int FUNC_20 (TYPE_4__*) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_21(struct usb_interface *VAR_12,
  const struct usb_device_id *VAR_13)
{
 struct v4l2_ctrl_handler *VAR_14;
 int VAR_15 = 0;
 int VAR_16;

 struct stk_camera *VAR_17 = ((void*)0);
 struct usb_device *VAR_18 = FUNC_4(VAR_12);
 struct usb_host_interface *VAR_19;
 struct usb_endpoint_descriptor *VAR_20;

 VAR_17 = FUNC_6(sizeof(struct stk_camera), VAR_2);
 if (VAR_17 == ((void*)0)) {
  FUNC_8("Out of memory !\n");
  return -VAR_1;
 }
 VAR_15 = FUNC_19(&VAR_12->dev, &VAR_17->v4l2_dev);
 if (VAR_15 < 0) {
  FUNC_1(&VAR_18->dev, "couldn't register v4l2_device\n");
  FUNC_5(VAR_17);
  return VAR_15;
 }
 VAR_14 = &VAR_17->hdl;
 FUNC_17(VAR_14, 3);
 FUNC_18(VAR_14, &VAR_9,
     VAR_4, 0, 0xff, 0x1, 0x60);
 FUNC_18(VAR_14, &VAR_9,
     VAR_5, 0, 1, 1, 1);
 FUNC_18(VAR_14, &VAR_9,
     VAR_6, 0, 1, 1, 1);
 if (VAR_14->error) {
  VAR_15 = VAR_14->error;
  FUNC_1(&VAR_18->dev, "couldn't register control\n");
  goto error;
 }
 VAR_17->v4l2_dev.ctrl_handler = VAR_14;

 FUNC_10(&VAR_17->spinlock);
 FUNC_7(&VAR_17->lock);
 FUNC_3(&VAR_17->wait_frame);
 VAR_17->first_init = 1;

 VAR_17->udev = VAR_18;
 VAR_17->interface = VAR_12;
 FUNC_14(VAR_12);

 if (VAR_8 != -1)
  VAR_17->vsettings.hflip = VAR_8;
 else if (FUNC_2(VAR_10))
  VAR_17->vsettings.hflip = 1;
 else
  VAR_17->vsettings.hflip = 0;
 if (VAR_11 != -1)
  VAR_17->vsettings.vflip = VAR_11;
 else if (FUNC_2(VAR_10))
  VAR_17->vsettings.vflip = 1;
 else
  VAR_17->vsettings.vflip = 0;
 VAR_17->n_sbufs = 0;
 FUNC_9(VAR_17);




 VAR_19 = VAR_12->cur_altsetting;

 for (VAR_16 = 0; VAR_16 < VAR_19->desc.bNumEndpoints; ++VAR_16) {
  VAR_20 = &VAR_19->endpoint[VAR_16].desc;

  if (!VAR_17->isoc_ep
   && FUNC_12(VAR_20)) {

   VAR_17->isoc_ep = FUNC_13(VAR_20);
   break;
  }
 }
 if (!VAR_17->isoc_ep) {
  FUNC_8("Could not find isoc-in endpoint\n");
  VAR_15 = -VAR_0;
  goto error;
 }
 VAR_17->vsettings.palette = VAR_7;
 VAR_17->vsettings.mode = VAR_3;
 VAR_17->frame_size = 640 * 480 * 2;

 FUNC_0(&VAR_17->sio_avail);
 FUNC_0(&VAR_17->sio_full);

 FUNC_15(VAR_12, VAR_17);

 VAR_15 = FUNC_11(VAR_17);
 if (VAR_15)
  goto error;

 return 0;

error:
 FUNC_16(VAR_14);
 FUNC_20(&VAR_17->v4l2_dev);
 FUNC_5(VAR_17);
 return VAR_15;
}
