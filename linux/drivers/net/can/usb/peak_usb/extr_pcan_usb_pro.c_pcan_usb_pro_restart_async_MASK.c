
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct urb {int dummy; } ;
struct peak_usb_device {int udev; int ctrl_idx; } ;
struct pcan_usb_pro_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pcan_usb_pro_msg*,int ,int ,int) ;
 int FUNC_1 (struct pcan_usb_pro_msg*,int *,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct urb*,int ,int ,int *,int ,int ,struct peak_usb_device*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_5(struct peak_usb_device *VAR_5,
          struct urb *VAR_6, u8 *VAR_7)
{
 struct pcan_usb_pro_msg VAR_8;

 FUNC_1(&VAR_8, VAR_7, VAR_3);
 FUNC_0(&VAR_8, VAR_2, VAR_5->ctrl_idx, 1);

 FUNC_2(VAR_6, VAR_5->udev,
   FUNC_3(VAR_5->udev, VAR_1),
   VAR_7, VAR_3,
   VAR_4, VAR_5);

 return FUNC_4(VAR_6, VAR_0);
}
