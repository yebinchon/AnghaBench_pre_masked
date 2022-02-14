
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3 {scalar_t__ revision; int regs; } ;
typedef enum dwc3_link_state { ____Placeholder_dwc3_link_state } dwc3_link_state ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int) ;

int FUNC_5(struct dwc3 *VAR_6, enum dwc3_link_state VAR_7)
{
 int VAR_8 = 10000;
 u32 VAR_9;





 if (VAR_6->revision >= VAR_4) {
  while (--VAR_8) {
   VAR_9 = FUNC_2(VAR_6->regs, VAR_2);
   if (VAR_9 & VAR_3)
    FUNC_4(5);
   else
    break;
  }

  if (VAR_8 <= 0)
   return -VAR_5;
 }

 VAR_9 = FUNC_2(VAR_6->regs, VAR_0);
 VAR_9 &= ~VAR_1;


 VAR_9 |= FUNC_0(VAR_7);
 FUNC_3(VAR_6->regs, VAR_0, VAR_9);





 if (VAR_6->revision >= VAR_4)
  return 0;


 VAR_8 = 10000;
 while (--VAR_8) {
  VAR_9 = FUNC_2(VAR_6->regs, VAR_2);

  if (FUNC_1(VAR_9) == VAR_7)
   return 0;

  FUNC_4(5);
 }

 return -VAR_5;
}
