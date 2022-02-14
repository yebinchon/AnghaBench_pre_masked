
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_composite_dev {int next_string_id; } ;


 int VAR_0 ;

int FUNC_0(struct usb_composite_dev *VAR_1)
{
 if (VAR_1->next_string_id < 254) {



  VAR_1->next_string_id++;
  return VAR_1->next_string_id;
 }
 return -VAR_0;
}
