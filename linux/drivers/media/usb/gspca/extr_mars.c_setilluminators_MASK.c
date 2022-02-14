
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int* usb_buf; } ;


 int FUNC_0 (struct gspca_dev*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, bool VAR_1, bool VAR_2)
{

 VAR_0->usb_buf[0] = 0x22;
 if (VAR_1)
  VAR_0->usb_buf[1] = 0x76;
 else if (VAR_2)
  VAR_0->usb_buf[1] = 0x7a;
 else
  VAR_0->usb_buf[1] = 0x7e;
 FUNC_0(VAR_0, 2);
}
