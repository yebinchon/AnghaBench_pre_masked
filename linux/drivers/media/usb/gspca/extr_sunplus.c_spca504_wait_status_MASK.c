
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {scalar_t__* usb_buf; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct gspca_dev*,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = 256;
 while (--VAR_1 > 0) {

  FUNC_1(VAR_0, 0x06, 0x00, 1);
  if (VAR_0->usb_buf[0] == 0)
   return;
  FUNC_0(10);
 }
}
