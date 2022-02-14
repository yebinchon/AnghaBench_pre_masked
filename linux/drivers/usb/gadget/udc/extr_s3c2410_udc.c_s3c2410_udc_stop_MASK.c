
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct s3c2410_udc {int * driver; } ;


 int FUNC_0 (struct s3c2410_udc*) ;
 struct s3c2410_udc* FUNC_1 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_2(struct usb_gadget *VAR_0)
{
 struct s3c2410_udc *VAR_1 = FUNC_1(VAR_0);

 VAR_1->driver = ((void*)0);


 FUNC_0(VAR_1);

 return 0;
}
