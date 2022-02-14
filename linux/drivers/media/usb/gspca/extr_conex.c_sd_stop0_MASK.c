
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {scalar_t__* usb_buf; int present; } ;


 int FUNC_0 (struct gspca_dev*,int,int) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0)
{
 int VAR_1 = 50;

 if (!VAR_0->present)
  return;
 FUNC_1(VAR_0, 0x0000, 0x00);
 FUNC_0(VAR_0, 0x0002, 1);
 FUNC_1(VAR_0, 0x0053, 0x00);

 while (VAR_1--) {

  FUNC_0(VAR_0, 0x0053, 1);
  if (VAR_0->usb_buf[0] == 0)
   break;
 }
 FUNC_1(VAR_0, 0x0000, 0x00);
 FUNC_0(VAR_0, 0x0002, 1);

 FUNC_1(VAR_0, 0x0010, 0x00);
 FUNC_0(VAR_0, 0x0033, 1);
 FUNC_1(VAR_0, 0x00fc, 0xe0);
}
