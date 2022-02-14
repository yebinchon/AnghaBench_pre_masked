
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int usb_err; int usb_buf; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int const,int const) ;
 int FUNC_1 (int ,int const*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int ,int,int,int,int ,int ,int,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct gspca_dev *VAR_4,
     const u8 *VAR_5)
{
 int VAR_6;

 if (VAR_4->usb_err < 0)
  return;
 FUNC_0(VAR_4, VAR_0, "i2c_w8 [%02x] = %02x ..\n",
    VAR_5[2], VAR_5[3]);
 FUNC_1(VAR_4->usb_buf, VAR_5, 8);
 VAR_6 = FUNC_4(VAR_4->dev,
   FUNC_5(VAR_4->dev, 0),
   0x08,
   VAR_1 | VAR_3 | VAR_2,
   0x08, 0,
   VAR_4->usb_buf, 8,
   500);
 FUNC_2(2);
 if (VAR_6 < 0) {
  FUNC_3("i2c_w8 err %d\n", VAR_6);
  VAR_4->usb_err = VAR_6;
 }
}
