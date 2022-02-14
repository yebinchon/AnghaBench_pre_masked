
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int hard_mtu; int rx_urb_size; int maxpacket; } ;
struct net_device {int hard_header_len; int mtu; } ;


 int VAR_0 ;
 struct usbnet* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct usbnet*) ;
 int FUNC_2 (struct usbnet*) ;
 int FUNC_3 (struct usbnet*) ;
 int FUNC_4 (struct usbnet*) ;

int FUNC_5 (struct net_device *VAR_1, int VAR_2)
{
 struct usbnet *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = VAR_2 + VAR_1->hard_header_len;
 int VAR_5 = VAR_3->hard_mtu;
 int VAR_6 = VAR_3->rx_urb_size;


 if ((VAR_4 % VAR_3->maxpacket) == 0)
  return -VAR_0;
 VAR_1->mtu = VAR_2;

 VAR_3->hard_mtu = VAR_1->mtu + VAR_1->hard_header_len;
 if (VAR_3->rx_urb_size == VAR_5) {
  VAR_3->rx_urb_size = VAR_3->hard_mtu;
  if (VAR_3->rx_urb_size > VAR_6) {
   FUNC_1(VAR_3);
   FUNC_3(VAR_3);
   FUNC_2(VAR_3);
  }
 }


 FUNC_4(VAR_3);

 return 0;
}
