
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_composite_dev {unsigned int next_string_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

int FUNC_1(struct usb_composite_dev *VAR_1, unsigned VAR_2)
{
 unsigned VAR_3 = VAR_1->next_string_id;
 if (FUNC_0(VAR_2 > 254 || (unsigned)VAR_3 + VAR_2 > 254))
  return -VAR_0;
 VAR_1->next_string_id += VAR_2;
 return VAR_3 + 1;
}
