
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lpm; } ;
struct ci_hdrc {TYPE_1__ hw_bank; } ;
typedef enum ci_hw_regs { ____Placeholder_ci_hw_regs } ci_hw_regs ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ci_hdrc*,int,int ) ;
 int FUNC_2 (struct ci_hdrc*,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ci_hdrc *VAR_2, bool VAR_3)
{
 enum ci_hw_regs VAR_4 = VAR_2->hw_bank.lpm ? VAR_0 : VAR_1;
 bool VAR_5 = !!(FUNC_1(VAR_2, VAR_4, FUNC_0(VAR_2->hw_bank.lpm)));

 if (VAR_3 && !VAR_5)
  FUNC_2(VAR_2, VAR_4, FUNC_0(VAR_2->hw_bank.lpm),
    FUNC_0(VAR_2->hw_bank.lpm));
 else if (!VAR_3 && VAR_5)
  FUNC_2(VAR_2, VAR_4, FUNC_0(VAR_2->hw_bank.lpm),
    0);
}
