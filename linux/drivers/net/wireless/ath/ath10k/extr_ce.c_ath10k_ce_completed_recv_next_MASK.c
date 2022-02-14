
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_ce_pipe {TYPE_1__* ops; struct ath10k* ar; } ;
struct ath10k_ce {int ce_lock; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {int (* ce_completed_recv_next_nolock ) (struct ath10k_ce_pipe*,void**,unsigned int*) ;} ;


 struct ath10k_ce* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ath10k_ce_pipe*,void**,unsigned int*) ;

int FUNC_4(struct ath10k_ce_pipe *VAR_0,
      void **VAR_1,
      unsigned int *VAR_2)
{
 struct ath10k *VAR_3 = VAR_0->ar;
 struct ath10k_ce *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;

 FUNC_1(&VAR_4->ce_lock);
 VAR_5 = VAR_0->ops->ce_completed_recv_next_nolock(VAR_0,
         VAR_1,
         VAR_2);

 FUNC_2(&VAR_4->ce_lock);

 return VAR_5;
}
