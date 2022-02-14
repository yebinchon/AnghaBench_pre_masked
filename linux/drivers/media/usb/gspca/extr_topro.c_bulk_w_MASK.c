
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;
struct gspca_dev {int usb_err; int * usb_buf; struct usb_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (struct usb_device*,int ,int *,int,int*,int) ;
 int FUNC_3 (struct usb_device*,int) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_1,
    u8 VAR_2,
    const u8 *VAR_3,
    int VAR_4)
{
 struct usb_device *VAR_5 = VAR_1->dev;
 int VAR_6, VAR_7, VAR_8;

 if (VAR_1->usb_err < 0)
  return;
 for (;;) {
  VAR_6 = VAR_4 > VAR_0 - 1
    ? VAR_0 - 1 : VAR_4;
  VAR_1->usb_buf[0] = VAR_2;
  FUNC_0(&VAR_1->usb_buf[1], VAR_3, VAR_6);
  VAR_8 = FUNC_2(VAR_5,
       FUNC_3(VAR_5, 3),
       VAR_1->usb_buf, VAR_6 + 1,
       &VAR_7, 500);
  if (VAR_8 < 0) {
   FUNC_1("bulk write error %d tag=%02x\n",
    VAR_8, VAR_2);
   VAR_1->usb_err = VAR_8;
   return;
  }
  VAR_4 -= VAR_6;
  if (VAR_4 <= 0)
   break;
  VAR_3 += VAR_6;
 }
}
