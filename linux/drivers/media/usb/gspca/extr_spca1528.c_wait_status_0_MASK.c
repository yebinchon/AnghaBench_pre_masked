
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {scalar_t__* usb_buf; int usb_err; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct gspca_dev*,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = 16;
 VAR_3 = 0;
 do {
  FUNC_2(VAR_1, 0x21, 0x0000, 1);
  if (VAR_1->usb_buf[0] == 0)
   return;
  VAR_3 += 15;
  FUNC_1(VAR_3);
 } while (--VAR_2 > 0);
 FUNC_0(VAR_1, "wait_status_0 timeout\n");
 VAR_1->usb_err = -VAR_0;
}
