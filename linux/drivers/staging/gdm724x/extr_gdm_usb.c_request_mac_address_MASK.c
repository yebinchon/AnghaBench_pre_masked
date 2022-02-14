
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;
struct lte_udev {int request_mac_addr; int gdm_ed; struct usb_device* usbdev; } ;
struct hci_packet {int * data; void* len; void* cmd_evt; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int) ;
 int FUNC_1 (struct usb_device*,int ,int *,int,int*,int) ;
 int FUNC_2 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_3(struct lte_udev *VAR_2)
{
 u8 VAR_3[16] = {0,};
 struct hci_packet *VAR_4 = (struct hci_packet *)VAR_3;
 struct usb_device *VAR_5 = VAR_2->usbdev;
 int VAR_6;
 int VAR_7 = -1;

 VAR_4->cmd_evt = FUNC_0(VAR_2->gdm_ed, VAR_0);
 VAR_4->len = FUNC_0(VAR_2->gdm_ed, 1);
 VAR_4->data[0] = VAR_1;

 VAR_7 = FUNC_1(VAR_5, FUNC_2(VAR_5, 2), VAR_3, 5,
      &VAR_6, 1000);

 VAR_2->request_mac_addr = 1;

 return VAR_7;
}
