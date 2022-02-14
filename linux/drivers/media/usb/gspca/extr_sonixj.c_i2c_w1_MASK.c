
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct sd {int sensor; int i2c_addr; } ;
struct gspca_dev {int usb_err; int* usb_buf; int dev; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,void*,void*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int ,int,int,int,int ,int*,int,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct gspca_dev *VAR_4, u8 VAR_5, u8 VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_4;
 int VAR_8;

 if (VAR_4->usb_err < 0)
  return;
 FUNC_0(VAR_4, VAR_0, "i2c_w1 [%02x] = %02x\n", VAR_5, VAR_6);
 switch (VAR_7->sensor) {
 case 130:
 case 128:
 case 129:
  VAR_4->usb_buf[0] = 0x80 | (2 << 4);
  break;
 default:
  VAR_4->usb_buf[0] = 0x81 | (2 << 4);
  break;
 }
 VAR_4->usb_buf[1] = VAR_7->i2c_addr;
 VAR_4->usb_buf[2] = VAR_5;
 VAR_4->usb_buf[3] = VAR_6;
 VAR_4->usb_buf[4] = 0;
 VAR_4->usb_buf[5] = 0;
 VAR_4->usb_buf[6] = 0;
 VAR_4->usb_buf[7] = 0x10;
 VAR_8 = FUNC_3(VAR_4->dev,
   FUNC_4(VAR_4->dev, 0),
   0x08,
   VAR_1 | VAR_3 | VAR_2,
   0x08,
   0,
   VAR_4->usb_buf, 8,
   500);
 FUNC_1(2);
 if (VAR_8 < 0) {
  FUNC_2("i2c_w1 err %d\n", VAR_8);
  VAR_4->usb_err = VAR_8;
 }
}
