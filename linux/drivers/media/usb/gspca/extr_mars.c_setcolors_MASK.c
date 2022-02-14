
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int* usb_buf; } ;
typedef int s32 ;


 int FUNC_0 (struct gspca_dev*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, s32 VAR_1)
{
 VAR_0->usb_buf[0] = 0x5f;
 VAR_0->usb_buf[1] = VAR_1 << 3;
 VAR_0->usb_buf[2] = ((VAR_1 >> 2) & 0xf8) | 0x04;
 FUNC_0(VAR_0, 3);
}
