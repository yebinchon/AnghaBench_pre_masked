
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int needs_remote_wakeup; int dev; } ;
struct usb_device_id {int idProduct; int idVendor; } ;
struct usb_device {int devnum; TYPE_1__* bus; } ;
struct rtsx_ucr {int iobuf_dma; scalar_t__ iobuf; struct usb_device* pusb_dev; int sg_timer; struct usb_interface* pusb_intf; int dev_mutex; scalar_t__ rsp_buf; scalar_t__ cmd_buf; int product_id; int vendor_id; } ;
struct TYPE_2__ {int busnum; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int ,int ) ;
 struct rtsx_ucr* FUNC_2 (int *,int,int ) ;
 struct usb_device* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (struct rtsx_ucr*) ;
 int VAR_4 ;
 int FUNC_7 (int *,int ,int ) ;
 scalar_t__ FUNC_8 (struct usb_device*,int ,int ,int *) ;
 int FUNC_9 (struct usb_device*) ;
 int FUNC_10 (struct usb_device*,int ,scalar_t__,int ) ;
 int FUNC_11 (struct usb_interface*,struct rtsx_ucr*) ;

__attribute__((used)) static int FUNC_12(struct usb_interface *VAR_5,
    const struct usb_device_id *VAR_6)
{
 struct usb_device *VAR_7 = FUNC_3(VAR_5);
 struct rtsx_ucr *VAR_8;
 int VAR_9;

 FUNC_1(&VAR_5->dev,
  ": Realtek USB Card Reader found at bus %03d address %03d\n",
   VAR_7->bus->busnum, VAR_7->devnum);

 VAR_8 = FUNC_2(&VAR_5->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->pusb_dev = VAR_7;

 VAR_8->iobuf = FUNC_8(VAR_8->pusb_dev, VAR_2,
   VAR_1, &VAR_8->iobuf_dma);
 if (!VAR_8->iobuf)
  return -VAR_0;

 FUNC_11(VAR_5, VAR_8);

 VAR_8->vendor_id = VAR_6->idVendor;
 VAR_8->product_id = VAR_6->idProduct;
 VAR_8->cmd_buf = VAR_8->rsp_buf = VAR_8->iobuf;

 FUNC_5(&VAR_8->dev_mutex);

 VAR_8->pusb_intf = VAR_5;


 VAR_9 = FUNC_6(VAR_8);
 if (VAR_9)
  goto out_init_fail;


 FUNC_7(&VAR_8->sg_timer, VAR_4, 0);

 VAR_9 = FUNC_4(&VAR_5->dev, VAR_3,
          FUNC_0(VAR_3));
 if (VAR_9)
  goto out_init_fail;






 return 0;

out_init_fail:
 FUNC_10(VAR_8->pusb_dev, VAR_2, VAR_8->iobuf,
   VAR_8->iobuf_dma);
 return VAR_9;
}
