
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_trans {TYPE_2__* trans_cfg; } ;
struct TYPE_4__ {TYPE_1__* base_params; } ;
struct TYPE_3__ {int max_tfd_queue_size; } ;



__attribute__((used)) static inline int FUNC_0(struct iwl_trans *VAR_0, int VAR_1)
{
 return ++VAR_1 &
  (VAR_0->trans_cfg->base_params->max_tfd_queue_size - 1);
}
