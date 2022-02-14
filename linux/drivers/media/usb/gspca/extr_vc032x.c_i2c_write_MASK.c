
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {scalar_t__ usb_err; scalar_t__* usb_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int,int const,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct gspca_dev*,int,int,int) ;
 int FUNC_4 (struct gspca_dev*,int,int const,int) ;

__attribute__((used)) static void FUNC_5(struct gspca_dev *VAR_1,
   u8 VAR_2, const u8 *VAR_3,
   u8 VAR_4)
{
 int VAR_5;

 if (VAR_1->usb_err < 0)
  return;
 if (VAR_4 == 1)
  FUNC_0(VAR_1, VAR_0, "i2c_w %02x %02x\n", VAR_2, *VAR_3);
 else
  FUNC_0(VAR_1, VAR_0, "i2c_w %02x %02x%02x\n",
     VAR_2, *VAR_3, VAR_3[1]);
 FUNC_3(VAR_1, 0xa1, 0xb33f, 1);

 FUNC_4(VAR_1, 0xa0, VAR_4, 0xb334);
 FUNC_4(VAR_1, 0xa0, VAR_2, 0xb33a);
 FUNC_4(VAR_1, 0xa0, VAR_3[0], 0xb336);
 if (VAR_4 > 1)
  FUNC_4(VAR_1, 0xa0, VAR_3[1], 0xb337);
 FUNC_4(VAR_1, 0xa0, 0x01, 0xb339);
 VAR_5 = 4;
 do {
  FUNC_3(VAR_1, 0xa1, 0xb33b, 1);
  if (VAR_1->usb_buf[0] == 0)
   break;
  FUNC_1(20);
 } while (--VAR_5 > 0);
 if (VAR_5 <= 0)
  FUNC_2("i2c_write timeout\n");
}
