
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_device {int dummy; } ;
struct gspca_dev {struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct usb_device*,int ,int ,int,int ,int ,int *,int ,int) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_3, u16 VAR_4, u16 VAR_5)
{
 int VAR_6;
 struct usb_device *VAR_7 = VAR_3->dev;

 VAR_6 = FUNC_2(VAR_7,
   FUNC_3(VAR_7, 0),
   0,
   VAR_2 | VAR_1,
   VAR_5, VAR_4, ((void*)0), 0, 500);
 FUNC_0(VAR_3, VAR_0, "reg write i:0x%04x = 0x%02x\n",
    VAR_4, VAR_5);
 if (VAR_6 < 0)
  FUNC_1("reg write: error %d\n", VAR_6);
 return VAR_6;
}
