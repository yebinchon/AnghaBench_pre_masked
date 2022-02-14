
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int usb_complete_t ;
typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {int bRequestType; int bRequest; int wLength; } ;
struct brcmf_usbdev_info {TYPE_2__* ctl_urb; TYPE_1__ ctl_read; int ctl_in_pipe; int usbdev; } ;
struct TYPE_5__ {int transfer_buffer_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int*) ;
 int FUNC_3 (TYPE_2__*,int ,int ,unsigned char*,int *,int,int ,struct brcmf_usbdev_info*) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_5(struct brcmf_usbdev_info *VAR_7, u8 *VAR_8, int VAR_9)
{
 int VAR_10;
 u16 VAR_11;

 FUNC_0(VAR_2, "Enter\n");
 if ((VAR_7 == ((void*)0)) || (VAR_8 == ((void*)0)) || (VAR_9 == 0)
  || (VAR_7->ctl_urb == ((void*)0)))
  return -VAR_0;

 VAR_11 = VAR_9;
 VAR_7->ctl_read.wLength = FUNC_2(&VAR_11);
 VAR_7->ctl_urb->transfer_buffer_length = VAR_11;

 VAR_7->ctl_read.bRequestType = VAR_3
  | VAR_5 | VAR_4;
 VAR_7->ctl_read.bRequest = 1;

 FUNC_3(VAR_7->ctl_urb,
  VAR_7->usbdev,
  VAR_7->ctl_in_pipe,
  (unsigned char *) &VAR_7->ctl_read,
  VAR_8, VAR_11,
  (usb_complete_t)VAR_6,
  VAR_7);

 VAR_10 = FUNC_4(VAR_7->ctl_urb, VAR_1);
 if (VAR_10 < 0)
  FUNC_1("usb_submit_urb failed %d\n", VAR_10);

 return VAR_10;
}
