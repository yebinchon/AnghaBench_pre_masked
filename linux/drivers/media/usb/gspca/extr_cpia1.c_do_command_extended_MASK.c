
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct gspca_dev {void** usb_buf; } ;


 int FUNC_0 (struct gspca_dev*,void**) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_0, u16 VAR_1,
          u8 VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5,
          u8 VAR_6, u8 VAR_7, u8 VAR_8, u8 VAR_9,
          u8 VAR_10, u8 VAR_11, u8 VAR_12, u8 VAR_13)
{
 u8 VAR_14[8];

 VAR_14[0] = VAR_1 >> 8;
 VAR_14[1] = VAR_1 & 0xff;
 VAR_14[2] = VAR_2;
 VAR_14[3] = VAR_3;
 VAR_14[4] = VAR_4;
 VAR_14[5] = VAR_5;
 VAR_14[6] = 8;
 VAR_14[7] = 0;
 VAR_0->usb_buf[0] = VAR_6;
 VAR_0->usb_buf[1] = VAR_7;
 VAR_0->usb_buf[2] = VAR_8;
 VAR_0->usb_buf[3] = VAR_9;
 VAR_0->usb_buf[4] = VAR_10;
 VAR_0->usb_buf[5] = VAR_11;
 VAR_0->usb_buf[6] = VAR_12;
 VAR_0->usb_buf[7] = VAR_13;

 return FUNC_0(VAR_0, VAR_14);
}
