
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct usb_gadget_strings {scalar_t__ language; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_gadget_strings*,int,void*) ;

__attribute__((used)) static int FUNC_1(
 struct usb_gadget_strings **VAR_1,
 void *VAR_2,
 u16 VAR_3,
 int VAR_4
)
{
 struct usb_gadget_strings *VAR_5;
 int VAR_6;

 while (*VAR_1) {
  VAR_5 = *VAR_1++;
  if (VAR_5->language != VAR_3)
   continue;
  VAR_6 = FUNC_0(VAR_5, VAR_4, VAR_2);
  if (VAR_6 > 0)
   return VAR_6;
 }
 return -VAR_0;
}
