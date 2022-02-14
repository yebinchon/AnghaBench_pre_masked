
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otg_fsm {int dummy; } ;
struct fsl_otg_timer {int dummy; } ;
typedef enum otg_fsm_timer { ____Placeholder_otg_fsm_timer } otg_fsm_timer ;


 int FUNC_0 (struct otg_fsm*,struct fsl_otg_timer*) ;
 struct fsl_otg_timer* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct otg_fsm *VAR_0, enum otg_fsm_timer VAR_1)
{
 struct fsl_otg_timer *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2)
  return;

 FUNC_0(VAR_0, VAR_2);
}
