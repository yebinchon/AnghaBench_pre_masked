
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct gspca_dev {scalar_t__ usb_err; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int FUNC_3 (struct gspca_dev*,int,int) ;

__attribute__((used)) static u16 FUNC_4(struct gspca_dev *VAR_0,
   u8 VAR_1)
{
 u8 VAR_2;
 u16 VAR_3;

 if (VAR_0->usb_err < 0)
  return 0;
 FUNC_3(VAR_0, VAR_1, 0x0092);
 FUNC_3(VAR_0, 0x02, 0x0090);
 FUNC_0(20);
 VAR_2 = FUNC_2(VAR_0, 0x0091);
 if (VAR_2 != 0x00)
  FUNC_1("i2c_r status error %02x\n", VAR_2);
 VAR_3 = FUNC_2(VAR_0, 0x0095);
 VAR_3 |= FUNC_2(VAR_0, 0x0096) << 8;
 return VAR_3;
}
