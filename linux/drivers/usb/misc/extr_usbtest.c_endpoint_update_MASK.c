
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {int dummy; } ;



__attribute__((used)) static inline void FUNC_0(int VAR_0,
       struct usb_host_endpoint **VAR_1,
       struct usb_host_endpoint **VAR_2,
       struct usb_host_endpoint *VAR_3)
{
 if (VAR_0) {
  if (!*VAR_1)
   *VAR_1 = VAR_3;
 } else {
  if (!*VAR_2)
   *VAR_2 = VAR_3;
 }
}
