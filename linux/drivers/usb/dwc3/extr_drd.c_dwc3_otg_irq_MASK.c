
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3 {scalar_t__ current_otg_role; int otg_restart_host; int regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_6, void *VAR_7)
{
 u32 VAR_8;
 struct dwc3 *VAR_9 = VAR_7;
 irqreturn_t VAR_10 = VAR_4;

 VAR_8 = FUNC_0(VAR_9->regs, VAR_0);
 if (VAR_8) {

  if (!(VAR_8 & VAR_2)) {
   FUNC_1(VAR_9->regs, VAR_0, VAR_8);
   return VAR_4;
  }

  if (VAR_9->current_otg_role == VAR_3 &&
      !(VAR_8 & VAR_1))
   VAR_9->otg_restart_host = 1;
  FUNC_1(VAR_9->regs, VAR_0, VAR_8);
  VAR_10 = VAR_5;
 }

 return VAR_10;
}
