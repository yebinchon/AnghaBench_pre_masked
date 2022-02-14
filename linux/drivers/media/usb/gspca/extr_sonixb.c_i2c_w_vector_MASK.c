
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {scalar_t__ usb_err; } ;
typedef int __u8 ;


 int FUNC_0 (struct gspca_dev*,int const*) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0,
   const __u8 VAR_1[][8], int VAR_2)
{
 for (;;) {
  if (VAR_0->usb_err < 0)
   return;
  FUNC_0(VAR_0, *VAR_1);
  VAR_2 -= 8;
  if (VAR_2 <= 0)
   break;
  VAR_1++;
 }
}
