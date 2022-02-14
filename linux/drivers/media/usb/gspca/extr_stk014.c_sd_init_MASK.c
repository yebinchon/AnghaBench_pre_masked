
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int usb_err; int iface; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct gspca_dev*,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_1)
{
 u8 VAR_2;


 FUNC_2(VAR_1->dev, VAR_1->iface, 1);
 VAR_2 = FUNC_1(VAR_1, 0x0740);
 if (VAR_1->usb_err >= 0) {
  if (VAR_2 != 0xff) {
   FUNC_0("init reg: 0x%02x\n", VAR_2);
   VAR_1->usb_err = -VAR_0;
  }
 }
 return VAR_1->usb_err;
}
