
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_hwparams {void* hwparams8; void* hwparams7; void* hwparams6; void* hwparams5; void* hwparams4; void* hwparams3; void* hwparams2; void* hwparams1; void* hwparams0; } ;
struct dwc3 {int regs; struct dwc3_hwparams hwparams; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct dwc3 *VAR_9)
{
 struct dwc3_hwparams *VAR_10 = &VAR_9->hwparams;

 VAR_10->hwparams0 = FUNC_0(VAR_9->regs, VAR_0);
 VAR_10->hwparams1 = FUNC_0(VAR_9->regs, VAR_1);
 VAR_10->hwparams2 = FUNC_0(VAR_9->regs, VAR_2);
 VAR_10->hwparams3 = FUNC_0(VAR_9->regs, VAR_3);
 VAR_10->hwparams4 = FUNC_0(VAR_9->regs, VAR_4);
 VAR_10->hwparams5 = FUNC_0(VAR_9->regs, VAR_5);
 VAR_10->hwparams6 = FUNC_0(VAR_9->regs, VAR_6);
 VAR_10->hwparams7 = FUNC_0(VAR_9->regs, VAR_7);
 VAR_10->hwparams8 = FUNC_0(VAR_9->regs, VAR_8);
}
