
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_txq {unsigned int n_window; int write_ptr; int read_ptr; } ;
struct iwl_trans {TYPE_2__* trans_cfg; } ;
struct TYPE_4__ {TYPE_1__* base_params; } ;
struct TYPE_3__ {unsigned int max_tfd_queue_size; } ;


 scalar_t__ FUNC_0 (int) ;

int FUNC_1(struct iwl_trans *VAR_0, const struct iwl_txq *VAR_1)
{
 unsigned int VAR_2;
 unsigned int VAR_3;







 if (VAR_1->n_window < VAR_0->trans_cfg->base_params->max_tfd_queue_size)
  VAR_2 = VAR_1->n_window;
 else
  VAR_2 = VAR_0->trans_cfg->base_params->max_tfd_queue_size - 1;





 VAR_3 = (VAR_1->write_ptr - VAR_1->read_ptr) &
  (VAR_0->trans_cfg->base_params->max_tfd_queue_size - 1);

 if (FUNC_0(VAR_3 > VAR_2))
  return 0;

 return VAR_2 - VAR_3;
}
