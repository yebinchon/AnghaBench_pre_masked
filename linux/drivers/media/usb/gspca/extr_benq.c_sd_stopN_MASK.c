
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {scalar_t__ num_altsetting; } ;
struct gspca_dev {int iface; int dev; } ;


 int FUNC_0 (struct gspca_dev*,int,int) ;
 struct usb_interface* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_0)
{
 struct usb_interface *VAR_1;

 FUNC_0(VAR_0, 0x003c, 0x0003);
 FUNC_0(VAR_0, 0x003c, 0x0004);
 FUNC_0(VAR_0, 0x003c, 0x0005);
 FUNC_0(VAR_0, 0x003c, 0x0006);
 FUNC_0(VAR_0, 0x003c, 0x0007);

 VAR_1 = FUNC_1(VAR_0->dev, VAR_0->iface);
 FUNC_2(VAR_0->dev, VAR_0->iface,
     VAR_1->num_altsetting - 1);
}
