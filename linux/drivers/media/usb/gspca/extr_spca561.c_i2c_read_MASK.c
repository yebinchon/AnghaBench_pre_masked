
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int* usb_buf; } ;
typedef int __u8 ;
typedef int __u16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_0, __u16 VAR_1, __u8 VAR_2)
{
 int VAR_3 = 60;
 __u8 VAR_4;

 FUNC_2(VAR_0, 0x8804, 0x92);
 FUNC_2(VAR_0, 0x8801, VAR_1);
 FUNC_2(VAR_0, 0x8802, VAR_2 | 0x01);
 do {
  FUNC_1(VAR_0, 0x8803, 1);
  if (!VAR_0->usb_buf[0]) {
   FUNC_1(VAR_0, 0x8800, 1);
   VAR_4 = VAR_0->usb_buf[0];
   FUNC_1(VAR_0, 0x8805, 1);
   return ((int) VAR_4 << 8) | VAR_0->usb_buf[0];
  }
  FUNC_0(10);
 } while (--VAR_3);
 return -1;
}
