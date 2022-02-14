
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwlagn_scd_bc_tbl {int dummy; } ;
struct iwl_txq {int wd_timeout; int bc_tbl; } ;
struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct iwl_gen3_bc_tbl {int dummy; } ;
struct TYPE_2__ {scalar_t__ device_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct iwl_trans*,char*) ;
 int FUNC_1 (struct iwl_trans*,int *,int) ;
 int FUNC_2 (struct iwl_trans*,struct iwl_txq*) ;
 int FUNC_3 (struct iwl_trans*,struct iwl_txq*,int,int) ;
 int FUNC_4 (struct iwl_trans*,struct iwl_txq*,int,int) ;
 int FUNC_5 (struct iwl_txq*) ;
 struct iwl_txq* FUNC_6 (int,int ) ;
 int FUNC_7 (unsigned int) ;

int FUNC_8(struct iwl_trans *VAR_3,
         struct iwl_txq **VAR_4, int VAR_5,
         unsigned int VAR_6)
{
 int VAR_7;

 struct iwl_txq *VAR_8;
 VAR_8 = FUNC_6(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;
 VAR_7 = FUNC_1(VAR_3, &VAR_8->bc_tbl,
         (VAR_3->trans_cfg->device_family >=
          VAR_2) ?
         sizeof(struct iwl_gen3_bc_tbl) :
         sizeof(struct iwlagn_scd_bc_tbl));
 if (VAR_7) {
  FUNC_0(VAR_3, "Scheduler BC Table allocation failed\n");
  FUNC_5(VAR_8);
  return -VAR_0;
 }

 VAR_7 = FUNC_3(VAR_3, VAR_8, VAR_5, 0);
 if (VAR_7) {
  FUNC_0(VAR_3, "Tx queue alloc failed\n");
  goto error;
 }
 VAR_7 = FUNC_4(VAR_3, VAR_8, VAR_5, 0);
 if (VAR_7) {
  FUNC_0(VAR_3, "Tx queue init failed\n");
  goto error;
 }

 VAR_8->wd_timeout = FUNC_7(VAR_6);

 *VAR_4 = VAR_8;
 return 0;

error:
 FUNC_2(VAR_3, VAR_8);
 return VAR_7;
}
