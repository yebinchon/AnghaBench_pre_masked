
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct imx21 {int regs; int clk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct imx21* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usb_hcd*) ;
 struct usb_hcd* FUNC_5 (struct platform_device*) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct imx21*) ;
 int FUNC_9 (struct resource*) ;
 int FUNC_10 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_1)
{
 struct usb_hcd *VAR_2 = FUNC_5(VAR_1);
 struct imx21 *VAR_3 = FUNC_2(VAR_2);
 struct resource *VAR_4 = FUNC_6(VAR_1, VAR_0, 0);

 FUNC_8(VAR_3);
 FUNC_10(VAR_2);

 if (VAR_4 != ((void*)0)) {
  FUNC_0(VAR_3->clk);
  FUNC_1(VAR_3->clk);
  FUNC_3(VAR_3->regs);
  FUNC_7(VAR_4->start, FUNC_9(VAR_4));
 }

 FUNC_4(VAR_2);
 return 0;
}
