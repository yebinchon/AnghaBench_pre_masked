
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct usb_interface {int usb_dev; } ;
struct tty_dev {struct mux_dev* priv_dev; } ;
struct mux_dev {scalar_t__ usb_state; int rx_cb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mux_dev*,int ) ;
 struct tty_dev* FUNC_2 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_3)
{
 struct tty_dev *VAR_4;
 struct mux_dev *VAR_5;
 u8 VAR_6;

 VAR_4 = FUNC_2(VAR_3);
 VAR_5 = VAR_4->priv_dev;

 if (VAR_5->usb_state != VAR_2) {
  FUNC_0(VAR_3->usb_dev, "usb resume - invalid state\n");
  return -1;
 }

 VAR_5->usb_state = VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_1(VAR_5, VAR_5->rx_cb);

 return 0;
}
