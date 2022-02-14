
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {int rx_urb_size; int hard_mtu; int rx_qlen; int tx_qlen; TYPE_1__* udev; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;
struct TYPE_2__ {int speed; } ;


 int VAR_0 ;




void FUNC_0(struct usbnet *VAR_1)
{
 enum usb_device_speed VAR_2 = VAR_1->udev->speed;

 if (!VAR_1->rx_urb_size || !VAR_1->hard_mtu)
  goto insanity;
 switch (VAR_2) {
 case 130:
  VAR_1->rx_qlen = VAR_0 / VAR_1->rx_urb_size;
  VAR_1->tx_qlen = VAR_0 / VAR_1->hard_mtu;
  break;
 case 129:
 case 128:





  VAR_1->rx_qlen = 5 * VAR_0 / VAR_1->rx_urb_size;
  VAR_1->tx_qlen = 5 * VAR_0 / VAR_1->hard_mtu;
  break;
 default:
insanity:
  VAR_1->rx_qlen = VAR_1->tx_qlen = 4;
 }
}
