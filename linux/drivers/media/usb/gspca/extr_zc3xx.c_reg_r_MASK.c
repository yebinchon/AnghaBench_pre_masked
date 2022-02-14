
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct gspca_dev {int usb_err; int * usb_buf; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,int,int,int,int ,int *,int,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static u8 FUNC_3(struct gspca_dev *VAR_3,
  u16 VAR_4)
{
 int VAR_5;

 if (VAR_3->usb_err < 0)
  return 0;
 VAR_5 = FUNC_1(VAR_3->dev,
   FUNC_2(VAR_3->dev, 0),
   0xa1,
   VAR_0 | VAR_2 | VAR_1,
   0x01,
   VAR_4, VAR_3->usb_buf, 1,
   500);
 if (VAR_5 < 0) {
  FUNC_0("reg_r err %d\n", VAR_5);
  VAR_3->usb_err = VAR_5;
  return 0;
 }
 return VAR_3->usb_buf[0];
}
