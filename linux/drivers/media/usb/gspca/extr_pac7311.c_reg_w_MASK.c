
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int usb_err; int * usb_buf; int dev; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int,int ,int ,int *,int,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_3,
    __u8 VAR_4,
    __u8 VAR_5)
{
 int VAR_6;

 if (VAR_3->usb_err < 0)
  return;
 VAR_3->usb_buf[0] = VAR_5;
 VAR_6 = FUNC_1(VAR_3->dev,
   FUNC_2(VAR_3->dev, 0),
   0,
   VAR_0 | VAR_2 | VAR_1,
   0, VAR_4, VAR_3->usb_buf, 1,
   500);
 if (VAR_6 < 0) {
  FUNC_0("reg_w() failed index 0x%02x, value 0x%02x, error %d\n",
         VAR_4, VAR_5, VAR_6);
  VAR_3->usb_err = VAR_6;
 }
}
