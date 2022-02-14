
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_descriptor_header {unsigned int bLength; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct usb_descriptor_header const*,unsigned int) ;

int
FUNC_1(void *VAR_1, unsigned VAR_2,
  const struct usb_descriptor_header **VAR_3)
{
 u8 *VAR_4 = VAR_1;

 if (!VAR_3)
  return -VAR_0;


 for (; ((void*)0) != *VAR_3; VAR_3++) {
  unsigned VAR_5 = (*VAR_3)->bLength;

  if (VAR_5 > VAR_2)
   return -VAR_0;
  FUNC_0(VAR_4, *VAR_3, VAR_5);
  VAR_2 -= VAR_5;
  VAR_4 += VAR_5;
 }
 return VAR_4 - (u8 *)VAR_1;
}
