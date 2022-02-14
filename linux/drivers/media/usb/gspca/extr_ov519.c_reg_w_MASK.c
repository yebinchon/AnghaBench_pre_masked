
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int usb_err; int * usb_buf; int dev; } ;
struct sd {int bridge; TYPE_1__ gspca_dev; } ;
struct gspca_dev {int dummy; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int,int ,int ) ;
 int FUNC_1 (struct gspca_dev*,char*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int,int,int ,int ,int *,int,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct sd *VAR_4, u16 VAR_5, u16 VAR_6)
{
 struct gspca_dev *VAR_7 = (struct gspca_dev *)VAR_4;
 int VAR_8, VAR_9 = 0;

 if (VAR_4->gspca_dev.usb_err < 0)
  return;


 FUNC_2(150);

 switch (VAR_4->bridge) {
 case 131:
 case 130:
  VAR_9 = 2;
  break;
 case 129:
  VAR_9 = 0x0a;

 case 128:
  FUNC_0(VAR_7, VAR_0, "SET %02x %04x %04x\n",
     VAR_9, VAR_6, VAR_5);
  VAR_8 = FUNC_3(VAR_4->gspca_dev.dev,
   FUNC_4(VAR_4->gspca_dev.dev, 0),
   VAR_9,
   VAR_1 | VAR_3 | VAR_2,
   VAR_6, VAR_5, ((void*)0), 0, 500);
  goto leave;
 default:
  VAR_9 = 1;
 }

 FUNC_0(VAR_7, VAR_0, "SET %02x 0000 %04x %02x\n",
    VAR_9, VAR_5, VAR_6);
 VAR_4->gspca_dev.usb_buf[0] = VAR_6;
 VAR_8 = FUNC_3(VAR_4->gspca_dev.dev,
   FUNC_4(VAR_4->gspca_dev.dev, 0),
   VAR_9,
   VAR_1 | VAR_3 | VAR_2,
   0, VAR_5,
   VAR_4->gspca_dev.usb_buf, 1, 500);
leave:
 if (VAR_8 < 0) {
  FUNC_1(VAR_7, "reg_w %02x failed %d\n", VAR_5, VAR_8);
  VAR_4->gspca_dev.usb_err = VAR_8;
  return;
 }
}
