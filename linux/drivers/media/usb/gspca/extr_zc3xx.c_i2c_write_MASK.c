
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {scalar_t__ usb_err; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int FUNC_3 (struct gspca_dev*,int,int) ;

__attribute__((used)) static u8 FUNC_4(struct gspca_dev *VAR_0,
   u8 VAR_1,
   u8 VAR_2,
   u8 VAR_3)
{
 u8 VAR_4;

 if (VAR_0->usb_err < 0)
  return 0;
 FUNC_3(VAR_0, VAR_1, 0x92);
 FUNC_3(VAR_0, VAR_2, 0x93);
 FUNC_3(VAR_0, VAR_3, 0x94);
 FUNC_3(VAR_0, 0x01, 0x90);
 FUNC_0(1);
 VAR_4 = FUNC_2(VAR_0, 0x0091);
 if (VAR_4 != 0x00)
  FUNC_1("i2c_w status error %02x\n", VAR_4);
 return VAR_4;
}
