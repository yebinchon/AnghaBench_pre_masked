
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_string {int id; scalar_t__ s; } ;
struct usb_composite_dev {int next_string_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

int FUNC_1(struct usb_composite_dev *VAR_1, struct usb_string *VAR_2)
{
 int VAR_3 = VAR_1->next_string_id;

 for (; VAR_2->s; ++VAR_2) {
  if (FUNC_0(VAR_3 >= 254))
   return -VAR_0;
  VAR_2->id = ++VAR_3;
 }

 VAR_1->next_string_id = VAR_3;

 return 0;
}
