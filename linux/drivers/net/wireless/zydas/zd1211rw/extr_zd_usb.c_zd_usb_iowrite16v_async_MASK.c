
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct zd_usb {struct urb* urb_async_waiting; int in_async; } ;
struct zd_ioreq16 {int value; scalar_t__ addr; } ;
struct usb_req_write_regs {struct reg_data* reg_writes; void* id; } ;
struct TYPE_4__ {int bInterval; } ;
struct usb_host_endpoint {TYPE_2__ desc; } ;
struct usb_device {int dummy; } ;
struct urb {int transfer_flags; } ;
struct reg_data {void* value; void* addr; } ;
struct TYPE_3__ {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 () ;
 int VAR_9 ;
 struct usb_req_write_regs* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int VAR_10 ;
 int FUNC_6 (struct usb_req_write_regs*,int ,unsigned int) ;
 struct urb* FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct urb*,struct usb_device*,int ,struct usb_req_write_regs*,int,int ,struct zd_usb*) ;
 int FUNC_10 (struct urb*,struct usb_device*,int ,struct usb_req_write_regs*,int,int ,struct zd_usb*,int ) ;
 int FUNC_11 (struct urb*) ;
 struct usb_host_endpoint* FUNC_12 (struct usb_device*,int ) ;
 int FUNC_13 (struct usb_device*,int ) ;
 int FUNC_14 (struct usb_device*,int ) ;
 int FUNC_15 (struct zd_usb*,int) ;
 int FUNC_16 (struct zd_usb*) ;
 TYPE_1__* FUNC_17 (struct zd_usb*) ;
 struct usb_device* FUNC_18 (struct zd_usb*) ;

int FUNC_19(struct zd_usb *VAR_11, const struct zd_ioreq16 *VAR_12,
       unsigned int VAR_13)
{
 int VAR_14;
 struct usb_device *VAR_15;
 struct usb_req_write_regs *VAR_16 = ((void*)0);
 int VAR_17, VAR_18;
 struct urb *VAR_19;
 struct usb_host_endpoint *VAR_20;

 FUNC_0(FUNC_5(&FUNC_17(VAR_11)->mutex));
 FUNC_0(VAR_11->in_async);

 if (VAR_13 == 0)
  return 0;
 if (VAR_13 > VAR_7) {
  FUNC_2(FUNC_16(VAR_11),
   "error: count %u exceeds possible max %u\n",
   VAR_13, VAR_7);
  return -VAR_0;
 }
 if (FUNC_3()) {
  FUNC_2(FUNC_16(VAR_11),
   "error: io in atomic context not supported\n");
  return -VAR_4;
 }

 VAR_15 = FUNC_18(VAR_11);

 VAR_20 = FUNC_12(VAR_15, FUNC_14(VAR_15, VAR_3));
 if (!VAR_20)
  return -VAR_1;

 VAR_19 = FUNC_7(0, VAR_5);
 if (!VAR_19)
  return -VAR_2;

 VAR_18 = FUNC_6(VAR_16, VAR_10, VAR_13);
 VAR_16 = FUNC_4(VAR_18, VAR_5);
 if (!VAR_16) {
  VAR_14 = -VAR_2;
  goto error;
 }

 VAR_16->id = FUNC_1(VAR_8);
 for (VAR_17 = 0; VAR_17 < VAR_13; VAR_17++) {
  struct reg_data *VAR_21 = &VAR_16->reg_writes[VAR_17];
  VAR_21->addr = FUNC_1((u16)VAR_12[VAR_17].addr);
  VAR_21->value = FUNC_1(VAR_12[VAR_17].value);
 }




 if (FUNC_8(&VAR_20->desc))
  FUNC_10(VAR_19, VAR_15, FUNC_14(VAR_15, VAR_3),
     VAR_16, VAR_18, VAR_9, VAR_11,
     VAR_20->desc.bInterval);
 else
  FUNC_9(VAR_19, VAR_15, FUNC_13(VAR_15, VAR_3),
      VAR_16, VAR_18, VAR_9, VAR_11);

 VAR_19->transfer_flags |= VAR_6;


 VAR_14 = FUNC_15(VAR_11, 0);
 if (VAR_14) {
  FUNC_2(FUNC_16(VAR_11),
   "error in zd_submit_waiting_usb(). "
   "Error number %d\n", VAR_14);
  goto error;
 }




 VAR_11->urb_async_waiting = VAR_19;
 return 0;
error:
 FUNC_11(VAR_19);
 return VAR_14;
}
