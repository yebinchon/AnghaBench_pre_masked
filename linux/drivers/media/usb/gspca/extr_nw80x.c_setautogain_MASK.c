
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {int ag_cnt; int ae_res; } ;
struct TYPE_2__ {int width; int height; } ;
struct gspca_dev {int* usb_buf; TYPE_1__ pixfmt; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1, s32 VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;
 int VAR_4, VAR_5;

 if (!VAR_2) {
  VAR_3->ag_cnt = -1;
  return;
 }
 VAR_3->ag_cnt = VAR_0;

 FUNC_0(VAR_1, 0x1004, 1);
 if (VAR_1->usb_buf[0] & 0x04) {
  VAR_3->ae_res = VAR_1->pixfmt.width * VAR_1->pixfmt.height;
 } else {
  FUNC_0(VAR_1, 0x1011, 8);
  VAR_4 = (VAR_1->usb_buf[1] << 8) + VAR_1->usb_buf[0]
    - (VAR_1->usb_buf[3] << 8) - VAR_1->usb_buf[2];
  VAR_5 = (VAR_1->usb_buf[5] << 8) + VAR_1->usb_buf[4]
    - (VAR_1->usb_buf[7] << 8) - VAR_1->usb_buf[6];
  VAR_3->ae_res = VAR_5 * VAR_4;
  if (VAR_3->ae_res == 0)
   VAR_3->ae_res = VAR_1->pixfmt.width *
     VAR_1->pixfmt.height;
 }
}
