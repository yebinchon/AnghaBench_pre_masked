
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct tower_reset_reply {int dummy; } ;
struct lego_usb_tower {int open_count; int interrupt_in_running; int lock; TYPE_1__* udev; int interrupt_in_urb; scalar_t__ interrupt_in_done; int interrupt_in_interval; TYPE_4__* interrupt_in_endpoint; int interrupt_in_buffer; scalar_t__ read_packet_length; scalar_t__ read_buffer_length; } ;
struct inode {int dummy; } ;
struct file {struct lego_usb_tower* private_data; } ;
struct TYPE_7__ {int bEndpointAddress; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct tower_reset_reply*) ;
 struct tower_reset_reply* FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,struct file*) ;
 int FUNC_8 (char*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (TYPE_1__*,int ,int ,int,int ,int ,struct tower_reset_reply*,int,int) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int ,TYPE_1__*,int ,int ,int ,int ,struct lego_usb_tower*,int ) ;
 struct usb_interface* FUNC_12 (int *,int) ;
 struct lego_usb_tower* FUNC_13 (struct usb_interface*) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (TYPE_1__*,int ) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static int FUNC_17 (struct inode *VAR_11, struct file *VAR_12)
{
 struct lego_usb_tower *VAR_13 = ((void*)0);
 int VAR_14;
 int VAR_15 = 0;
 struct usb_interface *VAR_16;
 struct tower_reset_reply *VAR_17;
 int VAR_18;

 VAR_17 = FUNC_3(sizeof(*VAR_17), VAR_4);

 if (!VAR_17) {
  VAR_15 = -VAR_2;
  goto exit;
 }

 FUNC_7(VAR_11, VAR_12);
 VAR_14 = FUNC_1(VAR_11);

 VAR_16 = FUNC_12 (&VAR_9, VAR_14);

 if (!VAR_16) {
  FUNC_8("error, can't find device for minor %d\n", VAR_14);
  VAR_15 = -VAR_1;
  goto exit;
 }

 VAR_13 = FUNC_13(VAR_16);
 if (!VAR_13) {
  VAR_15 = -VAR_1;
  goto exit;
 }


 if (FUNC_5(&VAR_13->lock)) {
         VAR_15 = -VAR_3;
  goto exit;
 }



 if (VAR_13->open_count) {
  VAR_15 = -VAR_0;
  goto unlock_exit;
 }


 VAR_18 = FUNC_9 (VAR_13->udev,
      FUNC_14(VAR_13->udev, 0),
      VAR_5,
      VAR_8 | VAR_6 | VAR_7,
      0,
      0,
      VAR_17,
      sizeof(*VAR_17),
      1000);
 if (VAR_18 < 0) {
  FUNC_0(&VAR_13->udev->dev,
   "LEGO USB Tower reset control request failed\n");
  VAR_15 = VAR_18;
  goto unlock_exit;
 }


 VAR_13->read_buffer_length = 0;
 VAR_13->read_packet_length = 0;
 FUNC_11 (VAR_13->interrupt_in_urb,
     VAR_13->udev,
     FUNC_15(VAR_13->udev, VAR_13->interrupt_in_endpoint->bEndpointAddress),
     VAR_13->interrupt_in_buffer,
     FUNC_10(VAR_13->interrupt_in_endpoint),
     VAR_10,
     VAR_13,
     VAR_13->interrupt_in_interval);

 VAR_13->interrupt_in_running = 1;
 VAR_13->interrupt_in_done = 0;
 FUNC_4();

 VAR_15 = FUNC_16 (VAR_13->interrupt_in_urb, VAR_4);
 if (VAR_15) {
  FUNC_0(&VAR_13->udev->dev,
   "Couldn't submit interrupt_in_urb %d\n", VAR_15);
  VAR_13->interrupt_in_running = 0;
  goto unlock_exit;
 }


 VAR_12->private_data = VAR_13;

 VAR_13->open_count = 1;

unlock_exit:
 FUNC_6(&VAR_13->lock);

exit:
 FUNC_2(VAR_17);
 return VAR_15;
}
