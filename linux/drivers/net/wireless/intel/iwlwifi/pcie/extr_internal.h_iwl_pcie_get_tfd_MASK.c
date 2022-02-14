
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_txq {void* tfds; } ;
struct iwl_trans_pcie {int tfd_size; } ;
struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct TYPE_2__ {scalar_t__ use_tfh; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int FUNC_1 (struct iwl_txq*,int) ;

__attribute__((used)) static inline void *FUNC_2(struct iwl_trans *VAR_0,
         struct iwl_txq *VAR_1, int VAR_2)
{
 struct iwl_trans_pcie *VAR_3 = FUNC_0(VAR_0);

 if (VAR_0->trans_cfg->use_tfh)
  VAR_2 = FUNC_1(VAR_1, VAR_2);

 return VAR_1->tfds + VAR_3->tfd_size * VAR_2;
}
