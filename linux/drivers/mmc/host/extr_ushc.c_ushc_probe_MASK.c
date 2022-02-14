
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ushc_int_data {int dummy; } ;
struct ushc_data {int caps; struct mmc_host* mmc; int * int_urb; TYPE_5__* csw; struct usb_device* usb_dev; int * csw_urb; int * data_urb; TYPE_5__* cbw; int * cbw_urb; int * int_data; int lock; } ;
struct ushc_csw {int dummy; } ;
struct ushc_cbw {int dummy; } ;
struct usb_interface {TYPE_4__* cur_altsetting; int dev; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct mmc_host {int f_min; int f_max; int ocr_avail; int caps; int max_seg_size; int max_segs; int max_req_size; int max_blk_size; int max_blk_count; int * ops; } ;
struct TYPE_10__ {int signature; } ;
struct TYPE_6__ {int bNumEndpoints; } ;
struct TYPE_9__ {TYPE_3__* endpoint; TYPE_1__ desc; } ;
struct TYPE_7__ {int bInterval; int bEndpointAddress; } ;
struct TYPE_8__ {TYPE_2__ desc; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 struct usb_device* FUNC_0 (struct usb_interface*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mmc_host*) ;
 struct mmc_host* FUNC_3 (int,int *) ;
 struct ushc_data* FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,struct usb_device*,int ,TYPE_5__*,int,int ,struct ushc_data*) ;
 int FUNC_9 (int *,struct usb_device*,int ,int *,int,int ,struct ushc_data*,int ) ;
 int FUNC_10 (struct usb_device*,int) ;
 int FUNC_11 (struct usb_device*,int ) ;
 int FUNC_12 (struct usb_interface*,struct ushc_data*) ;
 int FUNC_13 (struct usb_device*,int) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (struct ushc_data*) ;
 int FUNC_16 (struct ushc_data*) ;
 int FUNC_17 (struct ushc_data*) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_18(struct usb_interface *VAR_14, const struct usb_device_id *VAR_15)
{
 struct usb_device *VAR_16 = FUNC_0(VAR_14);
 struct mmc_host *VAR_17;
 struct ushc_data *VAR_18;
 int VAR_19;

 if (VAR_14->cur_altsetting->desc.bNumEndpoints < 1)
  return -VAR_0;

 VAR_17 = FUNC_3(sizeof(struct ushc_data), &VAR_14->dev);
 if (VAR_17 == ((void*)0))
  return -VAR_1;
 VAR_18 = FUNC_4(VAR_17);
 FUNC_12(VAR_14, VAR_18);

 VAR_18->usb_dev = VAR_16;
 VAR_18->mmc = VAR_17;

 FUNC_6(&VAR_18->lock);

 VAR_19 = FUNC_17(VAR_18);
 if (VAR_19 < 0)
  goto err;


 VAR_19 = FUNC_16(VAR_18);
 if (VAR_19 < 0)
  goto err;

 VAR_17->ops = &VAR_13;

 VAR_17->f_min = 400000;
 VAR_17->f_max = 50000000;
 VAR_17->ocr_avail = VAR_6 | VAR_7;
 VAR_17->caps = VAR_3 | VAR_4;
 VAR_17->caps |= (VAR_18->caps & VAR_9) ? VAR_5 : 0;

 VAR_17->max_seg_size = 512*511;
 VAR_17->max_segs = 1;
 VAR_17->max_req_size = 512*511;
 VAR_17->max_blk_size = 512;
 VAR_17->max_blk_count = 511;

 VAR_18->int_urb = FUNC_7(0, VAR_2);
 if (VAR_18->int_urb == ((void*)0)) {
  VAR_19 = -VAR_1;
  goto err;
 }
 VAR_18->int_data = FUNC_1(sizeof(struct ushc_int_data), VAR_2);
 if (VAR_18->int_data == ((void*)0)) {
  VAR_19 = -VAR_1;
  goto err;
 }
 FUNC_9(VAR_18->int_urb, VAR_18->usb_dev,
    FUNC_11(VAR_16,
     VAR_14->cur_altsetting->endpoint[0].desc.bEndpointAddress),
    VAR_18->int_data, sizeof(struct ushc_int_data),
    VAR_12, VAR_18,
    VAR_14->cur_altsetting->endpoint[0].desc.bInterval);

 VAR_18->cbw_urb = FUNC_7(0, VAR_2);
 if (VAR_18->cbw_urb == ((void*)0)) {
  VAR_19 = -VAR_1;
  goto err;
 }
 VAR_18->cbw = FUNC_1(sizeof(struct ushc_cbw), VAR_2);
 if (VAR_18->cbw == ((void*)0)) {
  VAR_19 = -VAR_1;
  goto err;
 }
 VAR_18->cbw->signature = VAR_8;

 FUNC_8(VAR_18->cbw_urb, VAR_18->usb_dev, FUNC_13(VAR_16, 2),
     VAR_18->cbw, sizeof(struct ushc_cbw),
     VAR_10, VAR_18);

 VAR_18->data_urb = FUNC_7(0, VAR_2);
 if (VAR_18->data_urb == ((void*)0)) {
  VAR_19 = -VAR_1;
  goto err;
 }

 VAR_18->csw_urb = FUNC_7(0, VAR_2);
 if (VAR_18->csw_urb == ((void*)0)) {
  VAR_19 = -VAR_1;
  goto err;
 }
 VAR_18->csw = FUNC_1(sizeof(struct ushc_csw), VAR_2);
 if (VAR_18->csw == ((void*)0)) {
  VAR_19 = -VAR_1;
  goto err;
 }
 FUNC_8(VAR_18->csw_urb, VAR_18->usb_dev, FUNC_10(VAR_16, 6),
     VAR_18->csw, sizeof(struct ushc_csw),
     VAR_11, VAR_18);

 VAR_19 = FUNC_2(VAR_18->mmc);
 if (VAR_19)
  goto err;

 VAR_19 = FUNC_14(VAR_18->int_urb, VAR_2);
 if (VAR_19 < 0) {
  FUNC_5(VAR_18->mmc);
  goto err;
 }

 return 0;

err:
 FUNC_15(VAR_18);
 return VAR_19;
}
