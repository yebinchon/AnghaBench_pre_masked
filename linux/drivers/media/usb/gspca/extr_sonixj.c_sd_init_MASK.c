
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int bridge; int sensor; int i2c_addr; } ;
struct gspca_dev {int* usb_buf; scalar_t__ usb_err; scalar_t__ audio; } ;




 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct gspca_dev*,int ,char*,int) ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*) ;
 int FUNC_5 (struct gspca_dev*,int,int) ;
 int FUNC_6 (struct gspca_dev*,int,int*,int) ;
 int FUNC_7 (struct gspca_dev*,int,int) ;
 int** VAR_2 ;

__attribute__((used)) static int FUNC_8(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;
 const u8 *VAR_5;
 u8 VAR_6[] = { 0x29, 0x70 };
 u8 VAR_7;


 FUNC_7(VAR_3, 0xf1, 0x01);
 FUNC_5(VAR_3, 0x00, 1);
 FUNC_7(VAR_3, 0xf1, 0x00);
 FUNC_5(VAR_3, 0x00, 1);
 VAR_7 = VAR_3->usb_buf[0];
 if (VAR_3->usb_err < 0)
  return VAR_3->usb_err;
 FUNC_0(VAR_3, VAR_0, "Sonix chip id: %02x\n", VAR_7);
 if (VAR_3->audio)
  VAR_6[1] |= 0x04;
 switch (VAR_4->bridge) {
 case 133:
 case 132:
  if (VAR_7 != 0x11)
   return -VAR_1;
  break;
 default:


  if (VAR_7 != 0x12)
   return -VAR_1;
 }

 switch (VAR_4->sensor) {
 case 131:
  FUNC_1(VAR_3);
  break;
 case 130:
  FUNC_2(VAR_3);
  break;
 case 129:
  FUNC_3(VAR_3);
  break;
 case 128:
  FUNC_4(VAR_3);
  break;
 }

 switch (VAR_4->bridge) {
 case 133:
  FUNC_7(VAR_3, 0x02, VAR_6[1]);
  break;
 default:
  FUNC_6(VAR_3, 0x01, VAR_6, 2);
  break;
 }



 FUNC_7(VAR_3, 0xf1, 0x00);


 VAR_5 = VAR_2[VAR_4->sensor];
 VAR_4->i2c_addr = VAR_5[9];

 return VAR_3->usb_err;
}
