
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct max3421_hcd {int frame_number; } ;


 struct max3421_hcd* FUNC_0 (struct usb_hcd*) ;

__attribute__((used)) static int
FUNC_1(struct usb_hcd *VAR_0)
{
 struct max3421_hcd *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->frame_number;
}
