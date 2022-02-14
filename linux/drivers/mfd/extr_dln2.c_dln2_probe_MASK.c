
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct device {int dummy; } ;
struct usb_interface {struct device dev; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_6__ {scalar_t__ bInterfaceNumber; int bNumEndpoints; } ;
struct usb_host_interface {TYPE_3__* endpoint; TYPE_1__ desc; } ;
struct usb_device_id {int dummy; } ;
struct dln2_dev {int event_cb_list; int disconnect_lock; int event_cb_lock; TYPE_5__* mod_rx_slots; int disconnect_wq; struct usb_interface* interface; int usb_dev; int ep_in; int ep_out; } ;
struct TYPE_10__ {TYPE_4__* slots; int lock; int wq; } ;
struct TYPE_9__ {int done; } ;
struct TYPE_7__ {int bEndpointAddress; } ;
struct TYPE_8__ {TYPE_2__ desc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*) ;
 int VAR_5 ;
 int FUNC_3 (struct dln2_dev*) ;
 int FUNC_4 (struct dln2_dev*) ;
 int FUNC_5 (struct dln2_dev*,struct usb_host_interface*) ;
 int FUNC_6 (struct dln2_dev*,int ) ;
 int FUNC_7 (struct dln2_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct usb_interface*) ;
 struct dln2_dev* FUNC_11 (int,int ) ;
 int FUNC_12 (struct device*,int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct usb_interface*,struct dln2_dev*) ;

__attribute__((used)) static int FUNC_16(struct usb_interface *VAR_6,
        const struct usb_device_id *VAR_7)
{
 struct usb_host_interface *VAR_8 = VAR_6->cur_altsetting;
 struct device *VAR_9 = &VAR_6->dev;
 struct dln2_dev *VAR_10;
 int VAR_11;
 int VAR_12, VAR_13;

 if (VAR_8->desc.bInterfaceNumber != 0 ||
     VAR_8->desc.bNumEndpoints < 2)
  return -VAR_2;

 VAR_10 = FUNC_11(sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return -VAR_3;

 VAR_10->ep_out = VAR_8->endpoint[0].desc.bEndpointAddress;
 VAR_10->ep_in = VAR_8->endpoint[1].desc.bEndpointAddress;
 VAR_10->usb_dev = FUNC_14(FUNC_10(VAR_6));
 VAR_10->interface = VAR_6;
 FUNC_15(VAR_6, VAR_10);
 FUNC_9(&VAR_10->disconnect_wq);

 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  FUNC_9(&VAR_10->mod_rx_slots[VAR_12].wq);
  FUNC_13(&VAR_10->mod_rx_slots[VAR_12].lock);
  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++)
   FUNC_8(&VAR_10->mod_rx_slots[VAR_12].slots[VAR_13].done);
 }

 FUNC_13(&VAR_10->event_cb_lock);
 FUNC_13(&VAR_10->disconnect_lock);
 FUNC_1(&VAR_10->event_cb_list);

 VAR_11 = FUNC_5(VAR_10, VAR_8);
 if (VAR_11)
  goto out_free;

 VAR_11 = FUNC_6(VAR_10, VAR_4);
 if (VAR_11)
  goto out_stop_rx;

 VAR_11 = FUNC_4(VAR_10);
 if (VAR_11 < 0) {
  FUNC_2(VAR_9, "failed to initialize hardware\n");
  goto out_stop_rx;
 }

 VAR_11 = FUNC_12(VAR_9, VAR_5, FUNC_0(VAR_5));
 if (VAR_11 != 0) {
  FUNC_2(VAR_9, "failed to add mfd devices to core\n");
  goto out_stop_rx;
 }

 return 0;

out_stop_rx:
 FUNC_7(VAR_10);

out_free:
 FUNC_3(VAR_10);

 return VAR_11;
}
