
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct fotg210_hcd {int periodic_size; } ;


 int FUNC_0 (struct fotg210_hcd*) ;
 struct fotg210_hcd* FUNC_1 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_2(struct usb_hcd *VAR_0)
{
 struct fotg210_hcd *VAR_1 = FUNC_1(VAR_0);

 return (FUNC_0(VAR_1) >> 3) %
  VAR_1->periodic_size;
}
