
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usbatm_data {int flags; struct cxacru_data* driver_data; } ;
struct usb_interface {int dummy; } ;
struct TYPE_2__ {int bmAttributes; } ;
struct usb_host_endpoint {TYPE_1__ desc; } ;
struct usb_device_id {scalar_t__ driver_info; } ;
struct usb_device {struct usb_host_endpoint** ep_in; } ;
struct cxacru_modem_type {int dummy; } ;
struct cxacru_data {int line_status; int adsl_status; void* rcv_urb; void* snd_urb; int * rcv_buf; int * snd_buf; int poll_work; int cm_serialize; int snd_done; int rcv_done; int adsl_state_serialize; int poll_state; int poll_state_serialize; struct cxacru_modem_type* modem_type; struct usbatm_data* usbatm; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct cxacru_data*) ;
 int VAR_10 ;
 int FUNC_3 (unsigned long) ;
 struct usb_device* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct cxacru_data*) ;
 struct cxacru_data* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct usbatm_data*,char*) ;
 int FUNC_10 (void*,struct usb_device*,int ,int *,int ,int ,int *) ;
 int FUNC_11 (void*,struct usb_device*,int ,int *,int ,int ,int *,int) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (struct usb_device*,size_t) ;
 int FUNC_14 (struct usb_device*,size_t) ;
 int FUNC_15 (struct usb_device*,size_t) ;
 int FUNC_16 (struct usb_device*,size_t) ;

__attribute__((used)) static int FUNC_17(struct usbatm_data *VAR_11,
         struct usb_interface *VAR_12, const struct usb_device_id *VAR_13)
{
 struct cxacru_data *VAR_14;
 struct usb_device *VAR_15 = FUNC_4(VAR_12);
 struct usb_host_endpoint *VAR_16 = VAR_15->ep_in[VAR_0];
 int VAR_17;


 VAR_14 = FUNC_6(sizeof(*VAR_14), VAR_4);
 if (!VAR_14)
  return -VAR_3;

 VAR_14->usbatm = VAR_11;
 VAR_14->modem_type = (struct cxacru_modem_type *) VAR_13->driver_info;

 FUNC_7(&VAR_14->poll_state_serialize);
 VAR_14->poll_state = VAR_1;
 VAR_14->line_status = -1;
 VAR_14->adsl_status = -1;

 FUNC_7(&VAR_14->adsl_state_serialize);

 VAR_14->rcv_buf = (u8 *) FUNC_1(VAR_4);
 if (!VAR_14->rcv_buf) {
  FUNC_9(VAR_11, "cxacru_bind: no memory for rcv_buf\n");
  VAR_17 = -VAR_3;
  goto fail;
 }
 VAR_14->snd_buf = (u8 *) FUNC_1(VAR_4);
 if (!VAR_14->snd_buf) {
  FUNC_9(VAR_11, "cxacru_bind: no memory for snd_buf\n");
  VAR_17 = -VAR_3;
  goto fail;
 }
 VAR_14->rcv_urb = FUNC_8(0, VAR_4);
 if (!VAR_14->rcv_urb) {
  VAR_17 = -VAR_3;
  goto fail;
 }
 VAR_14->snd_urb = FUNC_8(0, VAR_4);
 if (!VAR_14->snd_urb) {
  VAR_17 = -VAR_3;
  goto fail;
 }

 if (!VAR_16) {
  FUNC_9(VAR_11, "cxacru_bind: no command endpoint\n");
  VAR_17 = -VAR_2;
  goto fail;
 }

 if ((VAR_16->desc.bmAttributes & VAR_7)
   == VAR_8) {
  FUNC_11(VAR_14->rcv_urb,
   VAR_15, FUNC_14(VAR_15, VAR_0),
   VAR_14->rcv_buf, VAR_5,
   VAR_9, &VAR_14->rcv_done, 1);

  FUNC_11(VAR_14->snd_urb,
   VAR_15, FUNC_16(VAR_15, VAR_0),
   VAR_14->snd_buf, VAR_5,
   VAR_9, &VAR_14->snd_done, 4);
 } else {
  FUNC_10(VAR_14->rcv_urb,
   VAR_15, FUNC_13(VAR_15, VAR_0),
   VAR_14->rcv_buf, VAR_5,
   VAR_9, &VAR_14->rcv_done);

  FUNC_10(VAR_14->snd_urb,
   VAR_15, FUNC_15(VAR_15, VAR_0),
   VAR_14->snd_buf, VAR_5,
   VAR_9, &VAR_14->snd_done);
 }

 FUNC_7(&VAR_14->cm_serialize);

 FUNC_0(&VAR_14->poll_work, VAR_10);

 VAR_11->driver_data = VAR_14;

 VAR_11->flags = (FUNC_2(VAR_14) ? 0 : VAR_6);

 return 0;

 fail:
 FUNC_3((unsigned long) VAR_14->snd_buf);
 FUNC_3((unsigned long) VAR_14->rcv_buf);
 FUNC_12(VAR_14->snd_urb);
 FUNC_12(VAR_14->rcv_urb);
 FUNC_5(VAR_14);

 return VAR_17;
}
