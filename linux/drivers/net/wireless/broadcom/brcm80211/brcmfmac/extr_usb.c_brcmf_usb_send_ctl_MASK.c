
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int usb_complete_t ;
typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {int wLength; } ;
struct brcmf_usbdev_info {TYPE_2__* ctl_urb; TYPE_1__ ctl_write; int ctl_out_pipe; int usbdev; scalar_t__ ctl_urb_actual_length; scalar_t__ ctl_urb_status; } ;
struct TYPE_5__ {int transfer_buffer_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int*) ;
 int FUNC_3 (TYPE_2__*,int ,int ,unsigned char*,int *,int,int ,struct brcmf_usbdev_info*) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_5(struct brcmf_usbdev_info *VAR_4, u8 *VAR_5, int VAR_6)
{
 int VAR_7;
 u16 VAR_8;

 FUNC_0(VAR_2, "Enter\n");
 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) ||
     VAR_6 == 0 || VAR_4->ctl_urb == ((void*)0))
  return -VAR_0;

 VAR_8 = VAR_6;
 VAR_4->ctl_write.wLength = FUNC_2(&VAR_8);
 VAR_4->ctl_urb->transfer_buffer_length = VAR_8;
 VAR_4->ctl_urb_status = 0;
 VAR_4->ctl_urb_actual_length = 0;

 FUNC_3(VAR_4->ctl_urb,
  VAR_4->usbdev,
  VAR_4->ctl_out_pipe,
  (unsigned char *) &VAR_4->ctl_write,
  VAR_5, VAR_8,
  (usb_complete_t)VAR_3,
  VAR_4);

 VAR_7 = FUNC_4(VAR_4->ctl_urb, VAR_1);
 if (VAR_7 < 0)
  FUNC_1("usb_submit_urb failed %d\n", VAR_7);

 return VAR_7;
}
