
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3 {int current_dr_role; int regs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(struct dwc3 *VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_2->regs, VAR_0);
 VAR_4 &= ~(FUNC_0(VAR_1));
 VAR_4 |= FUNC_0(VAR_3);
 FUNC_2(VAR_2->regs, VAR_0, VAR_4);

 VAR_2->current_dr_role = VAR_3;
}
