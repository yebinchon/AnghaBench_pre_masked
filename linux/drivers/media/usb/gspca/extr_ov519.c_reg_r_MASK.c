
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int usb_err; int* usb_buf; int dev; } ;
struct sd {int bridge; TYPE_1__ gspca_dev; } ;
struct gspca_dev {scalar_t__* usb_buf; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int,int ,int) ;
 int FUNC_1 (struct gspca_dev*,char*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int,int,int ,int ,int*,int,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sd *VAR_4, u16 VAR_5)
{
 struct gspca_dev *VAR_6 = (struct gspca_dev *)VAR_4;
 int VAR_7;
 int VAR_8;

 if (VAR_4->gspca_dev.usb_err < 0)
  return -1;

 switch (VAR_4->bridge) {
 case 130:
 case 129:
  VAR_8 = 3;
  break;
 case 128:
  VAR_8 = 0x0b;
  break;
 default:
  VAR_8 = 1;
 }


 FUNC_2(150);
 VAR_7 = FUNC_3(VAR_4->gspca_dev.dev,
   FUNC_4(VAR_4->gspca_dev.dev, 0),
   VAR_8,
   VAR_1 | VAR_3 | VAR_2,
   0, VAR_5, VAR_4->gspca_dev.usb_buf, 1, 500);

 if (VAR_7 >= 0) {
  VAR_7 = VAR_4->gspca_dev.usb_buf[0];
  FUNC_0(VAR_6, VAR_0, "GET %02x 0000 %04x %02x\n",
     VAR_8, VAR_5, VAR_7);
 } else {
  FUNC_1(VAR_6, "reg_r %02x failed %d\n", VAR_5, VAR_7);
  VAR_4->gspca_dev.usb_err = VAR_7;




  VAR_6->usb_buf[0] = 0;
 }

 return VAR_7;
}
