
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget_strings {int language; } ;
typedef scalar_t__ __le16 ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct usb_gadget_strings **VAR_0, __le16 *VAR_1)
{
 const struct usb_gadget_strings *VAR_2;
 __le16 VAR_3;
 __le16 *VAR_4;

 while (*VAR_0) {
  VAR_2 = *VAR_0;
  VAR_3 = FUNC_0(VAR_2->language);
  for (VAR_4 = VAR_1; *VAR_4 && VAR_4 < &VAR_1[126]; VAR_4++) {
   if (*VAR_4 == VAR_3)
    goto repeat;
  }
  *VAR_4++ = VAR_3;
repeat:
  VAR_0++;
 }
}
