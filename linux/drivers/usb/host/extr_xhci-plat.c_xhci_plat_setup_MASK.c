
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;


 int FUNC_0 (struct usb_hcd*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_2(struct usb_hcd *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;

 return FUNC_0(VAR_1, VAR_0);
}
