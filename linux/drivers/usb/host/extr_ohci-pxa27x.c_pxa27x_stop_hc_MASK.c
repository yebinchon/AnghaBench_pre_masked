
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct usb_hcd {int self; } ;
struct pxaohci_platform_data {int (* exit ) (struct device*) ;} ;
struct pxa27x_ohci {int clk; scalar_t__ mmio_base; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 struct usb_hcd* FUNC_4 (struct device*) ;
 struct pxaohci_platform_data* FUNC_5 (struct device*) ;
 int FUNC_6 (struct pxa27x_ohci*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct pxa27x_ohci *VAR_1, struct device *VAR_2)
{
 struct pxaohci_platform_data *VAR_3;
 struct usb_hcd *VAR_4 = FUNC_4(VAR_2);
 uint32_t VAR_5;

 VAR_3 = FUNC_5(VAR_2);

 if (FUNC_3())
  FUNC_7(&VAR_4->self);

 if (VAR_3->exit)
  VAR_3->exit(VAR_2);

 FUNC_6(VAR_1);


 VAR_5 = FUNC_0(VAR_1->mmio_base + VAR_0) | 0x01;
 FUNC_1(VAR_5, VAR_1->mmio_base + VAR_0);
 FUNC_9(10);

 FUNC_2(VAR_1->clk);
}
