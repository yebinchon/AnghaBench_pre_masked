
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int* usb_buf; int usb_err; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct gspca_dev*,int,int,int) ;
 int FUNC_3 (struct gspca_dev*,int,int,int,int) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_1)
{
 int VAR_2;

 VAR_2 = 10;
 do {
  FUNC_2(VAR_1, 0x21, 0x0001, 1);
  FUNC_1(10);
  if (VAR_1->usb_buf[0] == 1) {
   FUNC_3(VAR_1, 0x21, 0x0000, 0x0001, 0x00);
   FUNC_2(VAR_1, 0x21, 0x0001, 1);
   return;
  }
 } while (--VAR_2 > 0);
 FUNC_0(VAR_1, "wait_status_1 timeout\n");
 VAR_1->usb_err = -VAR_0;
}
