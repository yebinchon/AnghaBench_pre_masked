
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_hcd {int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct usb_hcd *VAR_2, u32 VAR_3,
        u32 VAR_4, u32 VAR_5, int VAR_6)
{
 u32 VAR_7;

 do {
  VAR_7 = FUNC_0(VAR_2->regs, VAR_3);
  if (VAR_7 == ~0)
   return -VAR_0;
  VAR_7 &= VAR_4;
  if (VAR_7 == VAR_5)
   return 0;
  FUNC_1(1);
  VAR_6--;
 } while (VAR_6 > 0);
 return -VAR_1;
}
