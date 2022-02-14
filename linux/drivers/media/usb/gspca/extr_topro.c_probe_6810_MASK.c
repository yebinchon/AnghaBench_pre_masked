
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int* usb_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;
 scalar_t__ FUNC_1 (struct gspca_dev*,int,int) ;
 int FUNC_2 (struct gspca_dev*,int ) ;
 int FUNC_3 (struct gspca_dev*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_6)
{
 u8 VAR_7;
 int VAR_8;

 FUNC_2(VAR_6, VAR_4);
 VAR_7 = VAR_6->usb_buf[0];
 FUNC_3(VAR_6, VAR_4, VAR_7);
 FUNC_3(VAR_6, VAR_4, VAR_7 | 0x20);
 FUNC_3(VAR_6, VAR_4, VAR_7);
 FUNC_3(VAR_6, VAR_2, 0x04);
 FUNC_3(VAR_6, VAR_3, 0x21);
 FUNC_3(VAR_6, VAR_5, 0x00);
 if (FUNC_1(VAR_6, 0x00, 0x00) >= 0)
  return VAR_1;

 FUNC_3(VAR_6, VAR_4, VAR_7 | 0x20);
 FUNC_3(VAR_6, VAR_2, 0x00);
 FUNC_3(VAR_6, VAR_3, 0x7f);
 if (FUNC_1(VAR_6, 0x00, 0x00) >= 0)
  return -2;

 FUNC_3(VAR_6, VAR_4, VAR_7 | 0x20);
 FUNC_3(VAR_6, VAR_4, VAR_7);
 FUNC_3(VAR_6, VAR_4, VAR_7 | 0x20);
 FUNC_3(VAR_6, VAR_2, 0x00);
 FUNC_3(VAR_6, VAR_3, 0x11);
 VAR_8 = FUNC_0(VAR_6, 0x00, 1);
 if (VAR_8 > 0)
  return -3;

 FUNC_3(VAR_6, VAR_4, VAR_7 | 0x20);
 FUNC_3(VAR_6, VAR_4, VAR_7);
 FUNC_3(VAR_6, VAR_4, VAR_7 | 0x20);
 FUNC_3(VAR_6, VAR_3, 0x6e);
 VAR_8 = FUNC_0(VAR_6, 0x00, 1);
 if (VAR_8 > 0)
  return -4;

 VAR_8 = FUNC_0(VAR_6, 0x01, 1);
 if (VAR_8 > 0)
  return -5;

 FUNC_3(VAR_6, VAR_4, VAR_7 | 0x20);
 FUNC_3(VAR_6, VAR_4, VAR_7);
 FUNC_3(VAR_6, VAR_4, VAR_7 | 0x20);
 FUNC_3(VAR_6, VAR_2, 0x04);
 FUNC_3(VAR_6, VAR_3, 0x5d);
 VAR_8 = FUNC_0(VAR_6, 0x00, 2);
 if (VAR_8 > 0)
  return -6;

 FUNC_3(VAR_6, VAR_4, VAR_7 | 0x20);
 FUNC_3(VAR_6, VAR_4, VAR_7);
 FUNC_3(VAR_6, VAR_4, VAR_7 | 0x20);
 FUNC_3(VAR_6, VAR_3, 0x5c);
 VAR_8 = FUNC_0(VAR_6, 0x36, 2);
 if (VAR_8 > 0)
  return -7;

 FUNC_3(VAR_6, VAR_4, VAR_7);
 FUNC_3(VAR_6, VAR_4, VAR_7 | 0x20);
 FUNC_3(VAR_6, VAR_4, VAR_7);
 FUNC_3(VAR_6, VAR_3, 0x61);
 FUNC_3(VAR_6, VAR_5, 0x10);
 if (FUNC_1(VAR_6, 0xff, 0x00) >= 0)
  return -8;

 FUNC_3(VAR_6, VAR_4, VAR_7 | 0x20);
 FUNC_3(VAR_6, VAR_4, VAR_7);
 FUNC_3(VAR_6, VAR_4, VAR_7 | 0x20);
 FUNC_3(VAR_6, VAR_2, 0x00);
 FUNC_3(VAR_6, VAR_3, 0x20);
 VAR_8 = FUNC_0(VAR_6, 0x00, 1);
 if (VAR_8 > 0)
  return VAR_0;
 return -9;
}
