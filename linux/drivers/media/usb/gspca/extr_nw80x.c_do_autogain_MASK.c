
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ ag_cnt; scalar_t__ bridge; int ae_res; int webcam; } ;
struct gspca_dev {int* usb_buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 int FUNC_0 (struct gspca_dev*,int,int,int) ;
 int FUNC_1 (struct gspca_dev*,int,int,int,int,int ) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 int VAR_4;

 if (VAR_3->ag_cnt < 0)
  return;
 if (--VAR_3->ag_cnt >= 0)
  return;
 VAR_3->ag_cnt = VAR_0;


 FUNC_2(VAR_2, VAR_3->bridge == VAR_1 ? 0x080d : 0x080c, 4);
 VAR_4 = (VAR_2->usb_buf[3] << 24) + (VAR_2->usb_buf[2] << 16)
  + (VAR_2->usb_buf[1] << 8) + VAR_2->usb_buf[0];
 VAR_4 /= VAR_3->ae_res;

 switch (VAR_3->webcam) {
 case 128:
  FUNC_0(VAR_2, VAR_4, 100, 5);
  break;
 default:
  FUNC_1(VAR_2, VAR_4, 100, 5, 230, 0);
  break;
 }
}
