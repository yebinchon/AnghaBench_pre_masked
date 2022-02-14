
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arche_platform_drvdata {scalar_t__ state; int is_reset_act_hi; int svc_reset; int svc_ref_clk; int wake_lock; int wake_detect_irq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct arche_platform_drvdata*,scalar_t__) ;
 int FUNC_1 (struct arche_platform_drvdata*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct arche_platform_drvdata *VAR_3)
{
 unsigned long VAR_4;

 if (VAR_3->state == VAR_1)
  return;


 if (VAR_3->state != VAR_0) {
  FUNC_3(VAR_3->wake_detect_irq);

  FUNC_4(&VAR_3->wake_lock, VAR_4);
  FUNC_1(VAR_3,
           VAR_2);
  FUNC_5(&VAR_3->wake_lock, VAR_4);
 }

 FUNC_2(VAR_3->svc_ref_clk);


 FUNC_6(VAR_3->svc_reset, VAR_3->is_reset_act_hi);

 FUNC_0(VAR_3, VAR_1);
}
