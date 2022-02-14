
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int) ;
 int FUNC_1 (struct gspca_dev*,int) ;
 int FUNC_2 (struct gspca_dev*,int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct gspca_dev*,int) ;
 int FUNC_5 (struct gspca_dev*,int,int) ;
 int FUNC_6 (struct gspca_dev*,int ) ;
 int FUNC_7 (struct gspca_dev*,int) ;

__attribute__((used)) static int FUNC_8(struct gspca_dev *VAR_2)
{
 u16 VAR_3;

 FUNC_7(VAR_2, 0x00);
 FUNC_2(VAR_2, 0x01, 0xaa, 0x00);
 VAR_3 = FUNC_1(VAR_2, 0x01);
 if (VAR_3 != 0)
  return 0x00;

 FUNC_7(VAR_2, 0x04);
 FUNC_2(VAR_2, 0x01, 0xaa, 0x00);
 VAR_3 = FUNC_1(VAR_2, 0x01);
 if (VAR_3 != 0)
  return 0x04;

 FUNC_7(VAR_2, 0x06);
 FUNC_5(VAR_2, 0x08, 0x008d);
 FUNC_2(VAR_2, 0x11, 0xaa, 0x00);
 VAR_3 = FUNC_1(VAR_2, 0x11);
 if (VAR_3 != 0) {


  goto ov_check;
 }

 FUNC_7(VAR_2, 0x08);
 FUNC_2(VAR_2, 0x1c, 0x00, 0x00);
 FUNC_2(VAR_2, 0x15, 0xaa, 0x00);
 VAR_3 = FUNC_1(VAR_2, 0x15);
 if (VAR_3 != 0)
  return 0x08;

 FUNC_7(VAR_2, 0x0a);
 FUNC_2(VAR_2, 0x07, 0xaa, 0xaa);
 VAR_3 = FUNC_1(VAR_2, 0x07);
 if (VAR_3 != 0)
  return 0x0a;
 VAR_3 = FUNC_1(VAR_2, 0x03);
 if (VAR_3 != 0)
  return 0x0a;
 VAR_3 = FUNC_1(VAR_2, 0x04);
 if (VAR_3 != 0)
  return 0x0a;

 FUNC_7(VAR_2, 0x0c);
 FUNC_2(VAR_2, 0x01, 0x11, 0x00);
 VAR_3 = FUNC_1(VAR_2, 0x01);
 if (VAR_3 != 0)
  return 0x0c;

 FUNC_7(VAR_2, 0x0e);
 FUNC_5(VAR_2, 0x08, 0x008d);
 FUNC_2(VAR_2, 0x03, 0xaa, 0x00);
 FUNC_3(50);
 VAR_3 = FUNC_1(VAR_2, 0x03);
 if (VAR_3 != 0) {
  FUNC_6(VAR_2, VAR_1);
  return 0x0e;
 }

 FUNC_7(VAR_2, 0x02);
 FUNC_2(VAR_2, 0x01, 0xaa, 0x00);
 VAR_3 = FUNC_1(VAR_2, 0x01);
 if (VAR_3 != 0)
  return 0x02;
ov_check:
 FUNC_4(VAR_2, 0x0010);
 FUNC_4(VAR_2, 0x0010);

 FUNC_5(VAR_2, 0x01, 0x0000);
 FUNC_5(VAR_2, 0x01, 0x0001);
 FUNC_5(VAR_2, 0x06, 0x0010);
 FUNC_5(VAR_2, 0xa1, 0x008b);
 FUNC_5(VAR_2, 0x08, 0x008d);
 FUNC_3(500);
 FUNC_5(VAR_2, 0x01, 0x0012);
 FUNC_2(VAR_2, 0x12, 0x80, 0x00);
 VAR_3 = FUNC_1(VAR_2, 0x0a) << 8;
 VAR_3 |= FUNC_1(VAR_2, 0x0b);
 FUNC_0(VAR_2, VAR_0, "probe 2wr ov vga 0x%04x\n", VAR_3);
 switch (VAR_3) {
 case 0x7631:
  FUNC_5(VAR_2, 0x06, 0x0010);
  break;
 case 0x7620:
 case 0x7648:
  break;
 default:
  return -1;
 }
 return VAR_3;
}
