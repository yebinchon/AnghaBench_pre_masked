
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3 {int regs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct dwc3*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct dwc3*,int ) ;
 int FUNC_4 (int ,int ,int ) ;

void FUNC_5(struct dwc3 *VAR_2)
{
 u32 VAR_3;






 FUNC_3(VAR_2, VAR_0);

 VAR_3 = FUNC_2(VAR_2->regs, FUNC_0(0));
 VAR_3 &= ~VAR_1;
 FUNC_4(VAR_2->regs, FUNC_0(0), VAR_3);


 FUNC_1(VAR_2);
}
