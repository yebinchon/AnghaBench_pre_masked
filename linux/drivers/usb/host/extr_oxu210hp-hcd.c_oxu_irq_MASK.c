
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_hcd {int regs; } ;
struct oxu_hcd {scalar_t__ is_otg; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct oxu_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(struct usb_hcd *VAR_7)
{
 struct oxu_hcd *VAR_8 = FUNC_0(VAR_7);
 int VAR_9 = VAR_0;

 u32 VAR_10 = FUNC_2(VAR_7->regs, VAR_4);
 u32 VAR_11 = FUNC_2(VAR_7->regs, VAR_3);


 FUNC_3(VAR_7->regs, VAR_2, VAR_11);

 if ((VAR_8->is_otg && (VAR_10 & VAR_5)) ||
  (!VAR_8->is_otg && (VAR_10 & VAR_6)))
  FUNC_1(VAR_7);
 else
  VAR_9 = VAR_1;


 FUNC_3(VAR_7->regs, VAR_3, VAR_11);

 return VAR_9;
}
