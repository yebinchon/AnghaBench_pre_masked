
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct gspca_dev {int usb_err; int usb_buf; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ,int const,int const) ;
 int FUNC_1 (struct gspca_dev*,char*) ;
 int FUNC_2 (int ,int const*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int ,int,int,int ,int ,int ,int,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct gspca_dev *VAR_5,
     u16 VAR_6,
     const u8 *VAR_7,
     int VAR_8)
{
 int VAR_9;

 if (VAR_5->usb_err < 0)
  return;
 FUNC_0(VAR_5, VAR_0, "reg_w [%04x] = %02x %02x ..\n",
    VAR_6, VAR_7[0], VAR_7[1]);

 if (VAR_8 > VAR_1) {
  FUNC_1(VAR_5, "reg_w: buffer overflow\n");
  return;
 }

 FUNC_2(VAR_5->usb_buf, VAR_7, VAR_8);
 VAR_9 = FUNC_4(VAR_5->dev,
   FUNC_5(VAR_5->dev, 0),
   0x08,
   VAR_2 | VAR_4 | VAR_3,
   VAR_6, 0,
   VAR_5->usb_buf, VAR_8,
   500);
 if (VAR_9 < 0) {
  FUNC_3("reg_w err %d\n", VAR_9);
  VAR_5->usb_err = VAR_9;
 }
}
