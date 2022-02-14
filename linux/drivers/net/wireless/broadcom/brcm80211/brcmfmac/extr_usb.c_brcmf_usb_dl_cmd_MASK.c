
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int usb_complete_t ;
typedef int u8 ;
typedef int u16 ;
struct TYPE_5__ {int bRequestType; int bRequest; int wLength; } ;
struct brcmf_usbdev_info {int ctl_completed; TYPE_2__* ctl_urb; TYPE_1__ ctl_read; int usbdev; } ;
struct TYPE_6__ {int transfer_buffer_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct brcmf_usbdev_info*) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int,int ) ;
 int FUNC_5 (void*,char*,int) ;
 int FUNC_6 (TYPE_2__*,int ,int ,unsigned char*,void*,int,int ,struct brcmf_usbdev_info*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_10(struct brcmf_usbdev_info *VAR_8, u8 VAR_9,
       void *VAR_10, int VAR_11)
{
 int VAR_12;
 char *VAR_13;
 u16 VAR_14;

 if ((!VAR_8) || (VAR_8->ctl_urb == ((void*)0)))
  return -VAR_0;

 VAR_13 = FUNC_4(VAR_11, VAR_3);
 if (!VAR_13)
  return -VAR_1;

 VAR_14 = VAR_11;
 VAR_8->ctl_urb->transfer_buffer_length = VAR_14;

 VAR_8->ctl_read.wLength = FUNC_2(&VAR_14);
 VAR_8->ctl_read.bRequestType = VAR_4 | VAR_6 |
  VAR_5;
 VAR_8->ctl_read.bRequest = VAR_9;

 FUNC_6(VAR_8->ctl_urb,
  VAR_8->usbdev,
  FUNC_8(VAR_8->usbdev, 0),
  (unsigned char *) &VAR_8->ctl_read,
  (void *) VAR_13, VAR_14,
  (usb_complete_t)VAR_7, VAR_8);

 VAR_8->ctl_completed = 0;
 VAR_12 = FUNC_9(VAR_8->ctl_urb, VAR_3);
 if (VAR_12 < 0) {
  FUNC_0("usb_submit_urb failed %d\n", VAR_12);
  goto finalize;
 }

 if (!FUNC_1(VAR_8)) {
  FUNC_7(VAR_8->ctl_urb);
  VAR_12 = -VAR_2;
 } else {
  FUNC_5(VAR_10, VAR_13, VAR_11);
 }

finalize:
 FUNC_3(VAR_13);
 return VAR_12;
}
