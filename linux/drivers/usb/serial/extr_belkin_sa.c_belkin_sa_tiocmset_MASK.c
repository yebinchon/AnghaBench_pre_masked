
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dev; struct usb_serial* serial; } ;
struct usb_serial {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct belkin_sa_private {unsigned long control_state; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct belkin_sa_private* FUNC_4 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_4,
          unsigned int VAR_5, unsigned int VAR_6)
{
 struct usb_serial_port *VAR_7 = VAR_4->driver_data;
 struct usb_serial *VAR_8 = VAR_7->serial;
 struct belkin_sa_private *VAR_9 = FUNC_4(VAR_7);
 unsigned long VAR_10;
 unsigned long VAR_11;
 int VAR_12;
 int VAR_13 = 0;
 int VAR_14 = 0;

 FUNC_2(&VAR_9->lock, VAR_11);
 VAR_10 = VAR_9->control_state;

 if (VAR_5 & VAR_3) {
  VAR_10 |= VAR_3;
  VAR_13 = 1;
 }
 if (VAR_5 & VAR_2) {
  VAR_10 |= VAR_2;
  VAR_14 = 1;
 }
 if (VAR_6 & VAR_3) {
  VAR_10 &= ~VAR_3;
  VAR_13 = 0;
 }
 if (VAR_6 & VAR_2) {
  VAR_10 &= ~VAR_2;
  VAR_14 = 0;
 }

 VAR_9->control_state = VAR_10;
 FUNC_3(&VAR_9->lock, VAR_11);

 VAR_12 = FUNC_0(VAR_1, VAR_13);
 if (VAR_12 < 0) {
  FUNC_1(&VAR_7->dev, "Set RTS error %d\n", VAR_12);
  goto exit;
 }

 VAR_12 = FUNC_0(VAR_0, VAR_14);
 if (VAR_12 < 0) {
  FUNC_1(&VAR_7->dev, "Set DTR error %d\n", VAR_12);
  goto exit;
 }
exit:
 return VAR_12;
}
