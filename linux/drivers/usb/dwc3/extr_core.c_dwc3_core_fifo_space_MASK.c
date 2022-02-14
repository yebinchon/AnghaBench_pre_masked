
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dwc3_ep {int number; struct dwc3* dwc; } ;
struct dwc3 {int regs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

u32 FUNC_5(struct dwc3_ep *VAR_1, u8 VAR_2)
{
 struct dwc3 *VAR_3 = VAR_1->dwc;
 u32 VAR_4;

 FUNC_4(VAR_3->regs, VAR_0,
   FUNC_0(VAR_1->number) |
   FUNC_2(VAR_2));

 VAR_4 = FUNC_3(VAR_3->regs, VAR_0);

 return FUNC_1(VAR_4);
}
