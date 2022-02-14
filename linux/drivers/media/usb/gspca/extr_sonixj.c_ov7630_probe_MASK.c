
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sd {int i2c_addr; int sensor; } ;
struct TYPE_2__ {int input_flags; } ;
struct gspca_dev {int* usb_buf; scalar_t__ usb_err; TYPE_1__ cam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,...) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_4;
 u16 VAR_6;


 FUNC_2(VAR_4, 0x17, 0x62);
 FUNC_2(VAR_4, 0x01, 0x08);
 VAR_5->i2c_addr = 0x21;
 FUNC_1(VAR_4, 0x0a, 2);
 VAR_6 = (VAR_4->usb_buf[3] << 8) | VAR_4->usb_buf[4];
 FUNC_2(VAR_4, 0x01, 0x29);
 FUNC_2(VAR_4, 0x17, 0x42);
 if (VAR_4->usb_err < 0)
  return;
 if (VAR_6 == 0x7628) {
  VAR_5->sensor = VAR_1;

  VAR_4->cam.input_flags =
    VAR_3 | VAR_2;
  FUNC_0(VAR_4, VAR_0, "Sensor soi768\n");
  return;
 }
 FUNC_0(VAR_4, VAR_0, "Sensor ov%04x\n", VAR_6);
}
