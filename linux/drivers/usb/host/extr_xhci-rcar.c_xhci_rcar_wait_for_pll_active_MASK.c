
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_hcd {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(struct usb_hcd *VAR_2)
{
 int VAR_3 = 1000;
 u32 VAR_4, VAR_5 = VAR_1;

 while (VAR_3 > 0) {
  VAR_4 = FUNC_0(VAR_2->regs + VAR_0);
  if ((VAR_4 & VAR_5) == VAR_5)
   return 1;
  FUNC_1(1);
  VAR_3--;
 }

 return 0;
}
