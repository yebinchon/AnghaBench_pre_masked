
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sd {int i2c_addr; int hstart; int vstart; int sensor; } ;
struct gspca_dev {int usb_err; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct gspca_dev*,int,int*) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;
 int FUNC_3 (struct gspca_dev*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(struct gspca_dev *VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_7;
 u16 VAR_9;

 VAR_8->i2c_addr = 0x5d;
 FUNC_1(VAR_7, 0xff, &VAR_9);
 if (VAR_7->usb_err >= 0
  && VAR_9 == 0x8243) {
  FUNC_3(VAR_7, VAR_4, FUNC_0(VAR_4));
  if (VAR_7->usb_err < 0) {
   FUNC_4("MT9V011 sensor initialization failed\n");
   return;
  }
  VAR_8->hstart = 2;
  VAR_8->vstart = 2;
  VAR_8->sensor = VAR_1;
  FUNC_5("MT9V011 sensor detected\n");
  return;
 }

 VAR_7->usb_err = 0;
 VAR_8->i2c_addr = 0x5c;
 FUNC_2(VAR_7, 0x01, 0x0004);
 FUNC_1(VAR_7, 0xff, &VAR_9);
 if (VAR_7->usb_err >= 0
  && VAR_9 == 0x823a) {
  FUNC_3(VAR_7, VAR_5, FUNC_0(VAR_5));
  if (VAR_7->usb_err < 0) {
   FUNC_4("MT9V111 sensor initialization failed\n");
   return;
  }
  VAR_8->hstart = 2;
  VAR_8->vstart = 2;
  VAR_8->sensor = VAR_2;
  FUNC_5("MT9V111 sensor detected\n");
  return;
 }

 VAR_7->usb_err = 0;
 VAR_8->i2c_addr = 0x5d;
 FUNC_2(VAR_7, 0xf0, 0x0000);
 if (VAR_7->usb_err < 0) {
  VAR_7->usb_err = 0;
  VAR_8->i2c_addr = 0x48;
  FUNC_2(VAR_7, 0xf0, 0x0000);
 }
 FUNC_1(VAR_7, 0x00, &VAR_9);
 if (VAR_7->usb_err >= 0
  && VAR_9 == 0x1229) {
  FUNC_3(VAR_7, VAR_6, FUNC_0(VAR_6));
  if (VAR_7->usb_err < 0) {
   FUNC_4("MT9V112 sensor initialization failed\n");
   return;
  }
  VAR_8->hstart = 6;
  VAR_8->vstart = 2;
  VAR_8->sensor = VAR_3;
  FUNC_5("MT9V112 sensor detected\n");
  return;
 }

 VAR_7->usb_err = -VAR_0;
}
