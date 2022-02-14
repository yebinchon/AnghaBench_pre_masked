
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_device {int dummy; } ;
struct rsi_hw {scalar_t__ rsi_dev; } ;
struct rsi_91x_usbdev {struct usb_device* usbdev; } ;


 int FUNC_0 (struct usb_device*,unsigned long,unsigned long,int ) ;

__attribute__((used)) static int FUNC_1(struct rsi_hw *VAR_0,
        unsigned long VAR_1,
        unsigned long VAR_2, u16 VAR_3)
{
 struct usb_device *VAR_4 =
  ((struct rsi_91x_usbdev *)VAR_0->rsi_dev)->usbdev;

 return FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
}
