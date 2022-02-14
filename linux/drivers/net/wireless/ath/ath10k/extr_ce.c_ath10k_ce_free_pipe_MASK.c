
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_ce_pipe {TYPE_1__* ops; } ;
struct ath10k_ce {struct ath10k_ce_pipe* ce_states; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {int (* ce_free_pipe ) (struct ath10k*,int) ;} ;


 struct ath10k_ce* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*,int) ;

void FUNC_2(struct ath10k *VAR_0, int VAR_1)
{
 struct ath10k_ce *VAR_2 = FUNC_0(VAR_0);
 struct ath10k_ce_pipe *VAR_3 = &VAR_2->ce_states[VAR_1];

 VAR_3->ops->ce_free_pipe(VAR_0, VAR_1);
}
