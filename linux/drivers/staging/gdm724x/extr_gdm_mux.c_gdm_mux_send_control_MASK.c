
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct mux_dev {struct usb_device* usbdev; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct usb_device*,int ,int,int ,int,int,void*,int,int) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_1, int VAR_2, int VAR_3,
    void *VAR_4, int VAR_5)
{
 struct mux_dev *VAR_6 = VAR_1;
 struct usb_device *VAR_7 = VAR_6->usbdev;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_7,
         FUNC_3(VAR_7, 0),
         VAR_2,
         VAR_0,
         VAR_3,
         2,
         VAR_4,
         VAR_5,
         5000
        );

 if (VAR_8 < 0)
  FUNC_1("usb_control_msg error: %d\n", VAR_8);

 return FUNC_0(VAR_8, 0);
}
