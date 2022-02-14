
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int* usb_buf; } ;
typedef int s32 ;


 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, s32 VAR_1)
{



 if (VAR_1 < 64)
  VAR_0->usb_buf[0] = VAR_1;
 else if (VAR_1 < 128)
  VAR_0->usb_buf[0] = (VAR_1 / 2) | 0x40;
 else
  VAR_0->usb_buf[0] = (VAR_1 / 4) | 0xc0;

 VAR_0->usb_buf[1] = 0;
 FUNC_0(VAR_0, 0x8335, 2);
}
