
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ ag_cnt; int chip_revision; } ;
struct gspca_dev {int* usb_buf; } ;
typedef int __u8 ;


 scalar_t__ VAR_0 ;

 int FUNC_0 (struct gspca_dev*,int,int) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 int VAR_3;
 int VAR_4;
 int VAR_5;
 __u8 VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;
 __u8 VAR_11 = 110;
 __u8 VAR_12 = 20;
 __u8 VAR_13 = 4;

 if (VAR_2->ag_cnt < 0)
  return;
 if (--VAR_2->ag_cnt >= 0)
  return;
 VAR_2->ag_cnt = VAR_0;

 switch (VAR_2->chip_revision) {
 case 128:
  FUNC_2(VAR_1, 0x8621, 1);
  VAR_7 = VAR_1->usb_buf[0];
  FUNC_2(VAR_1, 0x8622, 1);
  VAR_6 = VAR_1->usb_buf[0];
  FUNC_2(VAR_1, 0x8623, 1);
  VAR_9 = VAR_1->usb_buf[0];
  FUNC_2(VAR_1, 0x8624, 1);
  VAR_8 = VAR_1->usb_buf[0];
  VAR_10 = (77 * VAR_6 + 75 * (VAR_7 + VAR_8) + 29 * VAR_9) >> 8;



  if (VAR_10 < VAR_11 - VAR_12 ||
      VAR_10 > VAR_11 + VAR_12) {
   VAR_3 = FUNC_0(VAR_1, 0x09, 0x10);
   VAR_4 = 0x0800;
   VAR_3 = VAR_3 & 0x07ff;
   VAR_5 = FUNC_0(VAR_1, 0x35, 0x10);

   VAR_3 += (VAR_11 - VAR_10) >> VAR_13;
   VAR_5 += (VAR_11 - VAR_10) / 50;

   if (VAR_5 > 0x3f)
    VAR_5 = 0x3f;
   else if (VAR_5 < 3)
    VAR_5 = 3;
   FUNC_1(VAR_1, VAR_5, 0x35);

   if (VAR_3 > 0x0256)
    VAR_3 = 0x0256;
   else if (VAR_3 < 3)
    VAR_3 = 3;
   FUNC_1(VAR_1, VAR_3 | VAR_4, 0x09);
  }
  break;
 }
}
