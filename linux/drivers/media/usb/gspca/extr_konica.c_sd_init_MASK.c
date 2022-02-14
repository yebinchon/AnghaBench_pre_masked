
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int* usb_buf; int usb_err; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct gspca_dev*,int ,int) ;
 int FUNC_2 (struct gspca_dev*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_0)
{
 int VAR_1;






 FUNC_0(6000);
 for (VAR_1 = 0; VAR_1 < 20; VAR_1++) {
  FUNC_1(VAR_0, 0, 0x10);
  if (VAR_0->usb_buf[0] == 3)
   break;
  FUNC_0(100);
 }
 FUNC_2(VAR_0, 0, 0x0d);

 return VAR_0->usb_err;
}
