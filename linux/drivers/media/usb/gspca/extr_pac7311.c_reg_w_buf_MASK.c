
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int usb_err; int usb_buf; int dev; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int const*,int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,int ,int ,int,int ,int ,int ,int,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_3,
    __u8 VAR_4,
    const u8 *VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_3->usb_err < 0)
  return;
 FUNC_0(VAR_3->usb_buf, VAR_5, VAR_6);
 VAR_7 = FUNC_2(VAR_3->dev,
   FUNC_3(VAR_3->dev, 0),
   0,
   VAR_0 | VAR_2 | VAR_1,
   0,
   VAR_4, VAR_3->usb_buf, VAR_6,
   500);
 if (VAR_7 < 0) {
  FUNC_1("reg_w_buf() failed index 0x%02x, error %d\n",
         VAR_4, VAR_7);
  VAR_3->usb_err = VAR_7;
 }
}
