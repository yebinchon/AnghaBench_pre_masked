
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sisusb_usb_data {unsigned int sisusb_cursor_loc; int bad_cursor_pos; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sisusb_usb_data*,int ,int,unsigned int) ;
 scalar_t__ FUNC_1 (struct sisusb_usb_data*,int ,int,int) ;
 scalar_t__ FUNC_2 (struct sisusb_usb_data*,int ,int,int,int) ;

void
FUNC_3(struct sisusb_usb_data *VAR_1, unsigned int VAR_2)
{
 if (VAR_1->sisusb_cursor_loc == VAR_2)
  return;

 VAR_1->sisusb_cursor_loc = VAR_2;






 if ((VAR_2 & 0x0007) == 0x0007) {
  VAR_1->bad_cursor_pos = 1;
  VAR_2--;
  if (FUNC_2(VAR_1, VAR_0, 0x0b, 0x1f, 0x20))
   return;
 } else if (VAR_1->bad_cursor_pos) {
  if (FUNC_1(VAR_1, VAR_0, 0x0b, 0x1f))
   return;
  VAR_1->bad_cursor_pos = 0;
 }

 if (FUNC_0(VAR_1, VAR_0, 0x0e, (VAR_2 >> 8)))
  return;
 FUNC_0(VAR_1, VAR_0, 0x0f, (VAR_2 & 0xff));
}
