
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ ag_cnt; } ;
struct gspca_dev {int* usb_buf; } ;
typedef int __u8 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct gspca_dev*,int ,char*,int) ;
 int FUNC_5 (struct gspca_dev*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;
 __u8 VAR_5;
 __u8 VAR_6 = 128;
 __u8 VAR_7 = 20;
 __u8 VAR_8 = 4;
 int VAR_9;
 __u8 VAR_10, VAR_11, VAR_12;

 if (VAR_4->ag_cnt < 0)
  return;
 if (--VAR_4->ag_cnt >= 0)
  return;
 VAR_4->ag_cnt = VAR_0;

 VAR_9 = FUNC_1(VAR_3);
 FUNC_5(VAR_3, VAR_2, 4);
 VAR_11 = (VAR_3->usb_buf[0] + VAR_3->usb_buf[3]) >> 1;
 VAR_10 = VAR_3->usb_buf[1];
 VAR_12 = VAR_3->usb_buf[2];
 VAR_10 = ((VAR_10 << 8) - (VAR_10 << 4) - (VAR_10 << 3)) >> 10;
 VAR_12 = ((VAR_12 << 7) >> 10);
 VAR_11 = ((VAR_11 << 9) + (VAR_11 << 7) + (VAR_11 << 5)) >> 10;
 VAR_5 = FUNC_3(VAR_10 + VAR_11 + VAR_12);
 FUNC_4(VAR_3, VAR_1, "Etoms luma G %d\n", VAR_5);
 if (VAR_5 < VAR_6 - VAR_7 || VAR_5 > VAR_6 + VAR_7) {
  VAR_9 += (VAR_6 - VAR_5) >> VAR_8;
  VAR_9 = FUNC_0(VAR_9);
  FUNC_4(VAR_3, VAR_1, "Etoms Gbright %d\n", VAR_9);
  FUNC_2(VAR_3, (__u8) VAR_9);
 }
}
