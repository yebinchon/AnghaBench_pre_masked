
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ep {int dummy; } ;
struct s3c_hsudc_ep {int wedge; } ;


 int VAR_0 ;
 struct s3c_hsudc_ep* FUNC_0 (struct usb_ep*) ;
 int FUNC_1 (struct usb_ep*) ;

__attribute__((used)) static int FUNC_2(struct usb_ep *VAR_1)
{
 struct s3c_hsudc_ep *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2)
  return -VAR_0;

 VAR_2->wedge = 1;
 return FUNC_1(VAR_1);
}
