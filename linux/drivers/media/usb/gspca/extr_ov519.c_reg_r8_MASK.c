
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int usb_err; int* usb_buf; int dev; } ;
struct sd {TYPE_1__ gspca_dev; } ;
struct gspca_dev {int usb_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,char*,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int,int,int ,int ,int*,int,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sd *VAR_3,
    u16 VAR_4)
{
 struct gspca_dev *VAR_5 = (struct gspca_dev *)VAR_3;
 int VAR_6;

 if (VAR_3->gspca_dev.usb_err < 0)
  return -1;


 FUNC_2(150);
 VAR_6 = FUNC_3(VAR_3->gspca_dev.dev,
   FUNC_4(VAR_3->gspca_dev.dev, 0),
   1,
   VAR_0 | VAR_2 | VAR_1,
   0, VAR_4, VAR_3->gspca_dev.usb_buf, 8, 500);

 if (VAR_6 >= 0) {
  VAR_6 = VAR_3->gspca_dev.usb_buf[0];
 } else {
  FUNC_0(VAR_5, "reg_r8 %02x failed %d\n", VAR_4, VAR_6);
  VAR_3->gspca_dev.usb_err = VAR_6;




  FUNC_1(VAR_5->usb_buf, 0, 8);
 }

 return VAR_6;
}
