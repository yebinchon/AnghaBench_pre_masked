
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct imx21 {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 struct imx21* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct usb_hcd *VAR_1)
{
 struct imx21 *VAR_2 = FUNC_0(VAR_1);

 return FUNC_2(FUNC_1(VAR_2->regs + VAR_0));
}
