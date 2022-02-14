
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct usbnet {int rx_urb_size; int hard_mtu; TYPE_1__* net; } ;
struct TYPE_2__ {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usbnet*,int ) ;
 int FUNC_1 (struct usbnet*,int ) ;
 int FUNC_2 (struct usbnet*,int,int ) ;
 int FUNC_3 (struct usbnet*,int,int ) ;
 int FUNC_4 (struct usbnet*) ;

__attribute__((used)) static void FUNC_5(struct usbnet *VAR_5)
{
 u16 VAR_6 = VAR_1;
 u16 VAR_7;
 u16 VAR_8;
 int VAR_9 = VAR_5->rx_urb_size;

 if (VAR_5->hard_mtu < 2048) {
  VAR_5->rx_urb_size = 2048;
  VAR_6 = VAR_2;
 } else if (VAR_5->hard_mtu < 4096) {
  VAR_5->rx_urb_size = 4096;
  VAR_6 = VAR_3;
 } else if (VAR_5->hard_mtu < 8192) {
  VAR_5->rx_urb_size = 8192;
  VAR_6 = VAR_4;
 } else if (VAR_5->hard_mtu < 16384) {
  VAR_5->rx_urb_size = 16384;
  VAR_6 = VAR_1;
 }

 VAR_7 = FUNC_1(VAR_5, 0);
 FUNC_3(VAR_5, (VAR_7 & ~VAR_1) | VAR_6, 0);

 VAR_8 = FUNC_0(VAR_5, 0);
 if (VAR_5->net->mtu > 1500)
  VAR_8 |= VAR_0;
 else
  VAR_8 &= ~VAR_0;
 FUNC_2(VAR_5, VAR_8, 0);

 if (VAR_5->rx_urb_size > VAR_9)
  FUNC_4(VAR_5);
}
