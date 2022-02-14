
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct gspca_dev {int iface; struct usb_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*) ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct usb_device*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_1)
{
 struct usb_device *VAR_2 = VAR_1->dev;

 FUNC_2(VAR_2, VAR_1->iface, 0);

 FUNC_1(VAR_1);

 FUNC_0(VAR_1, VAR_0, "camera stopped\n");
}
