
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct sl811 {int addr_reg; int data_reg; } ;
struct resource {int dummy; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 struct sl811* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int ) ;
 struct usb_hcd* FUNC_2 (struct platform_device*) ;
 struct resource* FUNC_3 (struct platform_device*,int ,int) ;
 int FUNC_4 (struct sl811*) ;
 int FUNC_5 (struct usb_hcd*) ;
 int FUNC_6 (struct usb_hcd*) ;

__attribute__((used)) static int
FUNC_7(struct platform_device *VAR_1)
{
 struct usb_hcd *VAR_2 = FUNC_2(VAR_1);
 struct sl811 *VAR_3 = FUNC_0(VAR_2);
 struct resource *VAR_4;

 FUNC_4(VAR_3);
 FUNC_6(VAR_2);


 VAR_4 = FUNC_3(VAR_1, VAR_0, 1);
 if (VAR_4)
  FUNC_1(VAR_3->data_reg);

 VAR_4 = FUNC_3(VAR_1, VAR_0, 0);
 if (VAR_4)
  FUNC_1(VAR_3->addr_reg);

 FUNC_5(VAR_2);
 return 0;
}
