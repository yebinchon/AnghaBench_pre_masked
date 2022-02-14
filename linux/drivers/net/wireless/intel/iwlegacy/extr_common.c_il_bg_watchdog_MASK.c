
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_3__ {int max_txq_num; } ;
struct il_priv {int cmd_queue; int watchdog; TYPE_1__ hw_params; TYPE_2__* cfg; int status; } ;
struct TYPE_4__ {unsigned long wd_timeout; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 struct il_priv* FUNC_1 (int ,struct timer_list*,int ) ;
 struct il_priv* VAR_1 ;
 scalar_t__ FUNC_2 (struct il_priv*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int VAR_3 ;

void
FUNC_6(struct timer_list *VAR_4)
{
 struct il_priv *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_3);
 int VAR_6;
 unsigned long VAR_7;

 if (FUNC_5(VAR_0, &VAR_5->status))
  return;

 VAR_7 = VAR_5->cfg->wd_timeout;
 if (VAR_7 == 0)
  return;


 if (FUNC_2(VAR_5, VAR_5->cmd_queue))
  return;


 for (VAR_6 = 0; VAR_6 < VAR_5->hw_params.max_txq_num; VAR_6++) {

  if (VAR_6 == VAR_5->cmd_queue)
   continue;
  if (FUNC_2(VAR_5, VAR_6))
   return;
 }

 FUNC_3(&VAR_5->watchdog,
    VAR_2 + FUNC_4(FUNC_0(VAR_7)));
}
