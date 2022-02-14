
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_5__ {int ctrl; } ;
struct TYPE_4__ {int quirk_suspend_irq; TYPE_2__ reg_timings; } ;
struct img_ir_priv {int lock; TYPE_1__ hw; } ;
struct TYPE_6__ {int suspend_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct img_ir_priv* FUNC_0 (int ,struct timer_list*,int ) ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 (struct img_ir_priv*,int ) ;
 int FUNC_2 (struct img_ir_priv*,int ,int) ;
 struct img_ir_priv* VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_5)
{
 struct img_ir_priv *VAR_6 = FUNC_0(VAR_6, VAR_5, VAR_3.suspend_timer);

 FUNC_3(&VAR_6->lock);




 if ((VAR_6->hw.quirk_suspend_irq & VAR_1) ==
    FUNC_1(VAR_6, VAR_2))
  FUNC_2(VAR_6, VAR_2,
     VAR_6->hw.quirk_suspend_irq);

 FUNC_2(VAR_6, VAR_0, VAR_6->hw.reg_timings.ctrl);
 FUNC_4(&VAR_6->lock);
}
