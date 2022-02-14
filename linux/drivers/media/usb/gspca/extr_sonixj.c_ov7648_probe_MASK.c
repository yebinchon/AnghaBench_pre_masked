
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sd {int i2c_addr; int sensor; } ;
struct gspca_dev {int* usb_buf; scalar_t__ usb_err; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,...) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 u16 VAR_4;


 FUNC_3(VAR_2, 0x17, 0x62);
 FUNC_3(VAR_2, 0x01, 0x08);
 VAR_3->i2c_addr = 0x21;
 FUNC_1(VAR_2, 0x0a, 2);
 VAR_4 = (VAR_2->usb_buf[3] << 8) | VAR_2->usb_buf[4];
 FUNC_3(VAR_2, 0x01, 0x29);
 FUNC_3(VAR_2, 0x17, 0x42);
 if ((VAR_4 & 0xff00) == 0x7600) {
  FUNC_0(VAR_2, VAR_0, "Sensor ov%04x\n", VAR_4);
  return;
 }


 FUNC_3(VAR_2, 0x17, 0x62);
 FUNC_3(VAR_2, 0x01, 0x08);
 VAR_3->i2c_addr = 0x6e;
 FUNC_1(VAR_2, 0x00, 2);
 VAR_4 = (VAR_2->usb_buf[3] << 8) | VAR_2->usb_buf[4];
 FUNC_3(VAR_2, 0x01, 0x29);
 FUNC_3(VAR_2, 0x17, 0x42);
 if (VAR_2->usb_err < 0)
  return;
 if (VAR_4 == 0x1030) {
  FUNC_0(VAR_2, VAR_0, "Sensor po1030\n");
  VAR_3->sensor = VAR_1;
  return;
 }
 FUNC_2("Unknown sensor %04x\n", VAR_4);
}
