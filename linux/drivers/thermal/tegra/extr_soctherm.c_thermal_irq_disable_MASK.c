
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tegra_thermctl_zone {TYPE_1__* ts; TYPE_2__* sg; } ;
struct TYPE_4__ {int thermctl_isr_mask; } ;
struct TYPE_3__ {int thermctl_lock; scalar_t__ regs; } ;


 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct tegra_thermctl_zone *VAR_1)
{
 u32 VAR_2;


 FUNC_1(&VAR_1->ts->thermctl_lock);
 VAR_2 = FUNC_3(VAR_1->ts->regs + VAR_0);
 VAR_2 = FUNC_0(VAR_2, VAR_1->sg->thermctl_isr_mask, 0);
 FUNC_4(VAR_2, VAR_1->ts->regs + VAR_0);
 FUNC_2(&VAR_1->ts->thermctl_lock);
}
