
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct lock_class_key {int dummy; } ;
struct iwl_txq {int need_update; int overflow_q; int lock; } ;
struct iwl_trans {TYPE_2__* trans_cfg; } ;
struct TYPE_4__ {TYPE_1__* base_params; } ;
struct TYPE_3__ {int max_tfd_queue_size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iwl_txq*,int) ;
 int FUNC_3 (int *,struct lock_class_key*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct iwl_trans *VAR_1, struct iwl_txq *VAR_2,
        int VAR_3, bool VAR_4)
{
 int VAR_5;
 u32 VAR_6 =
  VAR_1->trans_cfg->base_params->max_tfd_queue_size;

 VAR_2->need_update = 0;



 if (FUNC_0(VAR_6 & (VAR_6 - 1),
        "Max tfd queue size must be a power of two, but is %d",
        VAR_6))
  return -VAR_0;


 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_4(&VAR_2->lock);

 if (VAR_4) {
  static struct lock_class_key VAR_7;

  FUNC_3(&VAR_2->lock, &VAR_7);
 }

 FUNC_1(&VAR_2->overflow_q);

 return 0;
}
