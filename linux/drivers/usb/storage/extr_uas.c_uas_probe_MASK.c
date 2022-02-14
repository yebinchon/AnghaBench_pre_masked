
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {TYPE_3__* altsetting; int dev; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {TYPE_1__* bus; } ;
struct uas_dev_info {unsigned long flags; scalar_t__ qdepth; int work; int lock; int data_urbs; int sense_urbs; int cmd_urbs; scalar_t__ shutdown; scalar_t__ resetting; struct usb_device* udev; struct usb_interface* intf; } ;
struct Scsi_Host {int max_cmd_len; int max_id; int max_lun; scalar_t__ can_queue; scalar_t__ hostdata; int sg_tablesize; scalar_t__ max_channel; } ;
struct TYPE_5__ {int bInterfaceNumber; } ;
struct TYPE_6__ {TYPE_2__ desc; } ;
struct TYPE_4__ {int sg_tablesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct Scsi_Host*,int *) ;
 struct Scsi_Host* FUNC_4 (int *,int) ;
 int FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct uas_dev_info*) ;
 int VAR_2 ;
 int FUNC_9 (struct uas_dev_info*) ;
 int VAR_3 ;
 scalar_t__ FUNC_10 (struct usb_device*,struct usb_interface*) ;
 int FUNC_11 (struct usb_interface*,struct usb_device_id const*,unsigned long*) ;
 int FUNC_12 (struct usb_device*,int ,int ) ;
 int FUNC_13 (struct usb_interface*,struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_14(struct usb_interface *VAR_4, const struct usb_device_id *VAR_5)
{
 int VAR_6 = -VAR_1;
 struct Scsi_Host *VAR_7 = ((void*)0);
 struct uas_dev_info *VAR_8;
 struct usb_device *VAR_9 = FUNC_2(VAR_4);
 unsigned long VAR_10;

 if (!FUNC_11(VAR_4, VAR_5, &VAR_10))
  return -VAR_0;

 if (FUNC_10(VAR_9, VAR_4))
  return -VAR_0;

 VAR_7 = FUNC_4(&VAR_3,
    sizeof(struct uas_dev_info));
 if (!VAR_7)
  goto set_alt0;

 VAR_7->max_cmd_len = 16 + 252;
 VAR_7->max_id = 1;
 VAR_7->max_lun = 256;
 VAR_7->max_channel = 0;
 VAR_7->sg_tablesize = VAR_9->bus->sg_tablesize;

 VAR_8 = (struct uas_dev_info *)VAR_7->hostdata;
 VAR_8->intf = VAR_4;
 VAR_8->udev = VAR_9;
 VAR_8->resetting = 0;
 VAR_8->shutdown = 0;
 VAR_8->flags = VAR_10;
 FUNC_1(&VAR_8->cmd_urbs);
 FUNC_1(&VAR_8->sense_urbs);
 FUNC_1(&VAR_8->data_urbs);
 FUNC_7(&VAR_8->lock);
 FUNC_0(&VAR_8->work, VAR_2);

 VAR_6 = FUNC_8(VAR_8);
 if (VAR_6)
  goto set_alt0;





 VAR_7->can_queue = VAR_8->qdepth - 2;

 FUNC_13(VAR_4, VAR_7);
 VAR_6 = FUNC_3(VAR_7, &VAR_4->dev);
 if (VAR_6)
  goto free_streams;

 FUNC_6(VAR_7);
 return VAR_6;

free_streams:
 FUNC_9(VAR_8);
 FUNC_13(VAR_4, ((void*)0));
set_alt0:
 FUNC_12(VAR_9, VAR_4->altsetting[0].desc.bInterfaceNumber, 0);
 if (VAR_7)
  FUNC_5(VAR_7);
 return VAR_6;
}
