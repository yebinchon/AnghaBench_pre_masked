
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_ce_pipe {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* ce_completed_send_next_nolock ) (struct ath10k_ce_pipe*,void**) ;} ;


 int FUNC_0 (struct ath10k_ce_pipe*,void**) ;

int FUNC_1(struct ath10k_ce_pipe *VAR_0,
      void **VAR_1)
{
 return VAR_0->ops->ce_completed_send_next_nolock(VAR_0,
           VAR_1);
}
