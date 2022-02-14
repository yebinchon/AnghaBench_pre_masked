
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct iwl_fw_runtime {TYPE_3__* trans; TYPE_1__* fw; } ;
struct iwl_fw_dbg_params {int dummy; } ;
struct TYPE_7__ {scalar_t__ ini_dest; int rec_on; int dest_tlv; } ;
struct TYPE_8__ {TYPE_2__ dbg; int status; } ;
struct TYPE_6__ {int ucode_capa; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_3__*,struct iwl_fw_dbg_params*) ;
 int FUNC_2 (TYPE_3__*,struct iwl_fw_dbg_params*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (struct iwl_fw_runtime*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int FUNC_6(struct iwl_fw_runtime *VAR_3,
          struct iwl_fw_dbg_params *VAR_4,
          bool VAR_5)
{
 int VAR_6 = 0;




 if (FUNC_5(VAR_2, &VAR_3->trans->status) ||
     (!VAR_3->trans->dbg.dest_tlv &&
      VAR_3->trans->dbg.ini_dest == VAR_0))
  return 0;

 if (FUNC_0(&VAR_3->fw->ucode_capa,
   VAR_1))
  VAR_6 = FUNC_3(VAR_3->trans, VAR_5);
 else if (VAR_5)
  FUNC_2(VAR_3->trans, VAR_4);
 else
  VAR_6 = FUNC_1(VAR_3->trans, VAR_4);
 return VAR_6;
}
