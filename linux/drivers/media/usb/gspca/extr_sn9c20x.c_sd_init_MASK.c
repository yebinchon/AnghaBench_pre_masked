
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int i2c_addr; int flags; int sensor; } ;
struct gspca_dev {scalar_t__ usb_err; } ;


 int FUNC_0 (int**) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int** VAR_2 ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*) ;
 int FUNC_5 (struct gspca_dev*) ;
 int FUNC_6 (struct gspca_dev*) ;
 int FUNC_7 (struct gspca_dev*) ;
 int FUNC_8 (struct gspca_dev*) ;
 int FUNC_9 (struct gspca_dev*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct gspca_dev*,int,int*,int) ;
 int FUNC_13 (struct gspca_dev*,int,int) ;
 int FUNC_14 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_15(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;
 int VAR_5;
 u8 VAR_6;
 u8 VAR_7[9] = {
  0x80, VAR_4->i2c_addr, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03
 };

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  VAR_6 = VAR_2[VAR_5][1];
  FUNC_12(VAR_3, VAR_2[VAR_5][0], &VAR_6, 1);
  if (VAR_3->usb_err < 0) {
   FUNC_10("Device initialization failed\n");
   return VAR_3->usb_err;
  }
 }

 if (VAR_4->flags & VAR_1)
  FUNC_13(VAR_3, 0x1006, 0x00);
 else
  FUNC_13(VAR_3, 0x1006, 0x20);

 FUNC_12(VAR_3, 0x10c0, VAR_7, 9);
 if (VAR_3->usb_err < 0) {
  FUNC_10("Device initialization failed\n");
  return VAR_3->usb_err;
 }

 switch (VAR_4->sensor) {
 case 130:
  FUNC_8(VAR_3);
  if (VAR_3->usb_err < 0)
   break;
  FUNC_11("OV9650 sensor detected\n");
  break;
 case 129:
  FUNC_9(VAR_3);
  if (VAR_3->usb_err < 0)
   break;
  FUNC_11("OV9655 sensor detected\n");
  break;
 case 128:
  FUNC_14(VAR_3);
  if (VAR_3->usb_err < 0)
   break;
  FUNC_11("SOI968 sensor detected\n");
  break;
 case 132:
  FUNC_6(VAR_3);
  if (VAR_3->usb_err < 0)
   break;
  FUNC_11("OV7660 sensor detected\n");
  break;
 case 131:
  FUNC_7(VAR_3);
  if (VAR_3->usb_err < 0)
   break;
  FUNC_11("OV7670 sensor detected\n");
  break;
 case 133:
  FUNC_5(VAR_3);
  if (VAR_3->usb_err < 0)
   break;
  FUNC_11("MT9VPRB sensor detected\n");
  break;
 case 135:
  FUNC_3(VAR_3);
  if (VAR_3->usb_err < 0)
   break;
  FUNC_11("MT9M111 sensor detected\n");
  break;
 case 134:
  FUNC_4(VAR_3);
  if (VAR_3->usb_err < 0)
   break;
  FUNC_11("MT9M112 sensor detected\n");
  break;
 case 136:
  FUNC_2(VAR_3);
  if (VAR_3->usb_err < 0)
   break;
  break;
 case 137:
  FUNC_1(VAR_3);
  if (VAR_3->usb_err < 0)
   break;
  FUNC_11("HV7131R sensor detected\n");
  break;
 default:
  FUNC_10("Unsupported sensor\n");
  VAR_3->usb_err = -VAR_0;
 }
 return VAR_3->usb_err;
}
