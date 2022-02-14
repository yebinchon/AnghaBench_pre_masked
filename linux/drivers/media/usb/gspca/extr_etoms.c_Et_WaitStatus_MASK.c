
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {scalar_t__* usb_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_1)
{
 int VAR_2 = 10;

 while (VAR_2--) {
  FUNC_0(VAR_1, VAR_0, 1);
  if (VAR_1->usb_buf[0] != 0)
   return 1;
 }
 return 0;
}
