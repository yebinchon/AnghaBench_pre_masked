
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_hcd {int dummy; } ;
struct usb_device {scalar_t__ speed; } ;
struct max3421_hcd {int mode; int port_status; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct max3421_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct usb_hcd*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct usb_hcd *VAR_5, struct usb_device *VAR_6)
{
 struct max3421_hcd *VAR_7 = FUNC_1(VAR_5);
 u8 VAR_8, VAR_9, VAR_10 = VAR_7->mode;

 VAR_8 = FUNC_0(VAR_1);
 VAR_9 = FUNC_0(VAR_0);
 if (VAR_7->port_status & VAR_3) {
  VAR_10 |= VAR_8;
  VAR_10 &= ~VAR_9;
 } else if (VAR_6->speed == VAR_4) {
  VAR_10 |= VAR_8 | VAR_9;
 } else {
  VAR_10 &= ~(VAR_8 | VAR_9);
 }
 if (VAR_10 != VAR_7->mode) {
  VAR_7->mode = VAR_10;
  FUNC_2(VAR_5, VAR_2, VAR_7->mode);
 }

}
