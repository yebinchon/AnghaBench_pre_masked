
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct usb_device {int dummy; } ;
struct TYPE_2__ {int usb_err; int usb_buf; struct usb_device* dev; } ;
struct sd {TYPE_1__ gspca_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct usb_device*,int ,int ,int,int ,int,int ,int,int) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_5(struct sd *VAR_3, u16* VAR_4)
{
 struct usb_device *VAR_5 = VAR_3->gspca_dev.dev;
 u16 VAR_6;
 int VAR_7;

 if (VAR_3->gspca_dev.usb_err < 0)
  return;

 VAR_6 = *VAR_4++;
 FUNC_0(VAR_3->gspca_dev.usb_buf, VAR_4, 6);


 FUNC_2(150);
 VAR_7 = FUNC_3(VAR_5, FUNC_4(VAR_5, 0), 0,
         VAR_2 | VAR_0 | VAR_1,
         VAR_6, 0x06, VAR_3->gspca_dev.usb_buf, 6, 500);
 if (VAR_7 < 0) {
  FUNC_1("Write FSB registers failed (%d)\n", VAR_7);
  VAR_3->gspca_dev.usb_err = VAR_7;
 }
}
