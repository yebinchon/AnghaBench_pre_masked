
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int* usb_buf; int usb_err; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;
 int FUNC_3 (struct gspca_dev*,int,int const*,int) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_1, const u8 *VAR_2)
{
 int VAR_3;

 FUNC_3(VAR_1, 0x10c0, VAR_2, 8);
 for (VAR_3 = 0; VAR_3 < 5; VAR_3++) {
  FUNC_2(VAR_1, 0x10c0, 1);
  if (VAR_1->usb_err < 0)
   return;
  if (VAR_1->usb_buf[0] & 0x04) {
   if (VAR_1->usb_buf[0] & 0x08) {
    FUNC_1("i2c_w error\n");
    VAR_1->usb_err = -VAR_0;
   }
   return;
  }
  FUNC_0(10);
 }
 FUNC_1("i2c_w reg %02x no response\n", VAR_2[2]);

}
