
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3 {int regs; int dis_u2_susphy_quirk; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

void FUNC_3(struct dwc3 *VAR_9)
{
 u32 VAR_10;
 VAR_10 = FUNC_1(VAR_9->regs, VAR_3);
 VAR_10 &= ~(VAR_6 | VAR_8 |
   VAR_4 | VAR_5);
 FUNC_2(VAR_9->regs, VAR_3, VAR_10);




 VAR_10 = FUNC_1(VAR_9->regs, VAR_1);
 VAR_10 &= ~VAR_2;
 FUNC_2(VAR_9->regs, VAR_1, VAR_10);
 if (!VAR_9->dis_u2_susphy_quirk) {
  VAR_10 = FUNC_1(VAR_9->regs, FUNC_0(0));
  VAR_10 |= VAR_0;
  FUNC_2(VAR_9->regs, FUNC_0(0), VAR_10);
 }


 VAR_10 = FUNC_1(VAR_9->regs, VAR_3);
 VAR_10 |= VAR_7;
 FUNC_2(VAR_9->regs, VAR_3, VAR_10);
}
