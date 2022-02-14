
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct timer_list {int dummy; } ;
struct meson_mx_mmc_host {TYPE_1__* cmd; scalar_t__ base; int mmc; int irq_lock; } ;
struct TYPE_2__ {int error; int opcode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 struct meson_mx_mmc_host* FUNC_1 (int ,struct timer_list*,int ) ;
 struct meson_mx_mmc_host* VAR_6 ;
 int FUNC_2 (struct meson_mx_mmc_host*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_7)
{
 struct meson_mx_mmc_host *VAR_8 = FUNC_1(VAR_8, VAR_7, VAR_5);
 unsigned long VAR_9;
 u32 VAR_10;

 FUNC_5(&VAR_8->irq_lock, VAR_9);


 VAR_10 = FUNC_4(VAR_8->base + VAR_2);
 VAR_10 &= ~VAR_3;
 FUNC_7(VAR_10, VAR_8->base + VAR_2);

 FUNC_6(&VAR_8->irq_lock, VAR_9);





 if (!VAR_8->cmd)
  return;

 FUNC_0(FUNC_3(VAR_8->mmc),
  "Timeout on CMD%u (IRQS = 0x%08x, ARGU = 0x%08x)\n",
  VAR_8->cmd->opcode, FUNC_4(VAR_8->base + VAR_4),
  FUNC_4(VAR_8->base + VAR_1));

 VAR_8->cmd->error = -VAR_0;

 FUNC_2(VAR_8);
}
