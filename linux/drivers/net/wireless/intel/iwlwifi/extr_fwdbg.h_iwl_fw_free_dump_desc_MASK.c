
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ umac_err_id; scalar_t__* lmac_err_id; int * desc; } ;
struct TYPE_3__ {int num_lmacs; } ;
struct iwl_fw_runtime {TYPE_2__ dump; TYPE_1__ smem_cfg; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct iwl_fw_runtime *VAR_1)
{
 if (VAR_1->dump.desc != &VAR_0)
  FUNC_0(VAR_1->dump.desc);
 VAR_1->dump.desc = ((void*)0);
 VAR_1->dump.lmac_err_id[0] = 0;
 if (VAR_1->smem_cfg.num_lmacs > 1)
  VAR_1->dump.lmac_err_id[1] = 0;
 VAR_1->dump.umac_err_id = 0;
}
