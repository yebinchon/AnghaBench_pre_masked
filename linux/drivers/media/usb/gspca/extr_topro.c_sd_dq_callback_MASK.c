
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {int ag_cnt; int bridge; } ;
struct TYPE_2__ {int width; } ;
struct gspca_dev {int* usb_buf; int exposure; TYPE_1__ pixfmt; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int,int,int,int,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;
 int FUNC_3 (struct gspca_dev*,int) ;
 int FUNC_4 (int ,int ,int*,int,int*,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 int VAR_4, VAR_5;
 int VAR_6, VAR_7;

 if (VAR_3->ag_cnt < 0)
  return;
 if (--VAR_3->ag_cnt > 5)
  return;
 switch (VAR_3->ag_cnt) {

 default:
  FUNC_2(VAR_2, 0x7d, 0x00);
  break;
 case 4:
  FUNC_2(VAR_2, 0x27, 0xb0);
  break;
 case 3:
  FUNC_2(VAR_2, 0x0c, 0x01);
  break;
 case 2:
  VAR_4 = FUNC_4(VAR_2->dev,
    FUNC_5(VAR_2->dev, 0x02),
    VAR_2->usb_buf,
    32,
    &VAR_5,
    500);
  if (VAR_4 < 0) {
   FUNC_1("bulk err %d\n", VAR_4);
   break;
  }

  break;
 case 1:
  FUNC_2(VAR_2, 0x27, 0xd0);
  break;
 case 0:
  VAR_4 = FUNC_4(VAR_2->dev,
    FUNC_5(VAR_2->dev, 0x02),
    VAR_2->usb_buf,
    32,
    &VAR_5,
    500);
  if (VAR_4 < 0) {
   FUNC_1("bulk err %d\n", VAR_4);
   break;
  }
  VAR_6 = ((VAR_2->usb_buf[8] << 8) + VAR_2->usb_buf[7] +
   (VAR_2->usb_buf[11] << 8) + VAR_2->usb_buf[10] +
   (VAR_2->usb_buf[14] << 8) + VAR_2->usb_buf[13] +
   (VAR_2->usb_buf[17] << 8) + VAR_2->usb_buf[16] +
   (VAR_2->usb_buf[20] << 8) + VAR_2->usb_buf[19] +
   (VAR_2->usb_buf[23] << 8) + VAR_2->usb_buf[22] +
   (VAR_2->usb_buf[26] << 8) + VAR_2->usb_buf[25] +
   (VAR_2->usb_buf[29] << 8) + VAR_2->usb_buf[28])
    / 8;
  if (VAR_2->pixfmt.width == 640)
   VAR_6 /= 4;
  FUNC_2(VAR_2, 0x7d, 0x00);

  VAR_7 = FUNC_6(VAR_2->exposure);
  VAR_4 = FUNC_0(VAR_2, VAR_6,
    60,
    6,
    2,
    70);
  VAR_3->ag_cnt = VAR_0;
  if (VAR_3->bridge == VAR_1) {
   int VAR_8 = FUNC_6(VAR_2->exposure);

   if ((VAR_7 >= 128 && VAR_8 < 128)
    || (VAR_7 < 128 && VAR_8 >= 128))
    FUNC_3(VAR_2, VAR_8);
  }
  break;
 }
}
