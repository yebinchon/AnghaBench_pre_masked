
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_hcd {int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct usb_hcd *VAR_4)
{
 u32 VAR_5, VAR_6;

 FUNC_0(VAR_4);
 VAR_6 = FUNC_1(VAR_4->regs, VAR_1);
 FUNC_2(VAR_4->regs, VAR_1, VAR_6 &= ~VAR_3);

 VAR_5 = FUNC_1(VAR_4->regs, VAR_2);
 VAR_5 &= ~VAR_0;
 FUNC_2(VAR_4->regs, VAR_2, VAR_5);
}
