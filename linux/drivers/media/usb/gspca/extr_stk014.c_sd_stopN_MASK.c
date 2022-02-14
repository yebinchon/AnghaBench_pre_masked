
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct gspca_dev {int iface; struct usb_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*) ;
 int FUNC_1 (struct gspca_dev*,int) ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int FUNC_3 (struct gspca_dev*,int,int ) ;
 int FUNC_4 (struct gspca_dev*,int) ;
 int FUNC_5 (struct gspca_dev*,int,int) ;
 int FUNC_6 (struct usb_device*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct gspca_dev *VAR_1)
{
 struct usb_device *VAR_2 = VAR_1->dev;

 FUNC_4(VAR_1, 0x02000000);
 FUNC_4(VAR_1, 0x02000000);
 FUNC_6(VAR_2, VAR_1->iface, 1);
 FUNC_2(VAR_1, 0x0630);
 FUNC_1(VAR_1, 0x000020);
 FUNC_2(VAR_1, 0x0650);
 FUNC_5(VAR_1, 0x000020, 0xffffffff);
 FUNC_3(VAR_1, 0x0620, 0);
 FUNC_3(VAR_1, 0x0630, 0);
 FUNC_3(VAR_1, 0x0640, 0);
 FUNC_3(VAR_1, 0x0650, 0);
 FUNC_3(VAR_1, 0x0660, 0);
 FUNC_0(VAR_1, VAR_0, "camera stopped\n");
}
