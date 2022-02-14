
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iwl_fw_runtime {int ops_ctx; TYPE_4__* ops; TYPE_3__* trans; TYPE_1__* fw; } ;
struct TYPE_8__ {scalar_t__ (* d3_debug_enable ) (int ) ;} ;
struct TYPE_7__ {TYPE_2__* cfg; } ;
struct TYPE_6__ {scalar_t__ d3_debug_data_length; } ;
struct TYPE_5__ {int ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct iwl_fw_runtime*,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline bool FUNC_3(struct iwl_fw_runtime *VAR_2)
{
 return FUNC_0(&VAR_2->fw->ucode_capa,
      VAR_1) &&
  VAR_2->trans->cfg->d3_debug_data_length && VAR_2->ops &&
  VAR_2->ops->d3_debug_enable &&
  VAR_2->ops->d3_debug_enable(VAR_2->ops_ctx) &&
  FUNC_1(VAR_2, VAR_0);
}
