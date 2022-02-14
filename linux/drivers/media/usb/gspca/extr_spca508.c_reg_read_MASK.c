
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gspca_dev {int* usb_buf; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ,int ,int,int ,int ,int*,int,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_4,
   u16 VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_4->dev,
   FUNC_3(VAR_4->dev, 0),
   0,
   VAR_1 | VAR_3 | VAR_2,
   0,
   VAR_5,
   VAR_4->usb_buf, 1,
   500);
 FUNC_0(VAR_4, VAR_0, "reg read i:%04x --> %02x\n",
    VAR_5, VAR_4->usb_buf[0]);
 if (VAR_6 < 0) {
  FUNC_1("reg_read err %d\n", VAR_6);
  return VAR_6;
 }
 return VAR_4->usb_buf[0];
}
