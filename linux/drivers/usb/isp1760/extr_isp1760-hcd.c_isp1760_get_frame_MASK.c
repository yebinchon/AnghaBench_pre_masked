
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_hcd {int regs; } ;
struct isp1760_hcd {int periodic_size; } ;


 int VAR_0 ;
 struct isp1760_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_hcd *VAR_1)
{
 struct isp1760_hcd *VAR_2 = FUNC_0(VAR_1);
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_1->regs, VAR_0);
 return (VAR_3 >> 3) % VAR_2->periodic_size;
}
