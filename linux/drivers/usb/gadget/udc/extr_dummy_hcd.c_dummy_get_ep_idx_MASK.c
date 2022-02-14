
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_endpoint_descriptor {int dummy; } ;


 scalar_t__ FUNC_0 (struct usb_endpoint_descriptor const*) ;
 int FUNC_1 (struct usb_endpoint_descriptor const*) ;

__attribute__((used)) static unsigned int FUNC_2(const struct usb_endpoint_descriptor *VAR_0)
{
 unsigned int VAR_1;

 VAR_1 = FUNC_1(VAR_0) << 1;
 if (FUNC_0(VAR_0))
  VAR_1 |= 1;
 return VAR_1;
}
