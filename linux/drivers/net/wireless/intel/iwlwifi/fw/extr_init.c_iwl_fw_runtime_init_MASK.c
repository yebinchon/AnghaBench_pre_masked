
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_trans {int dev; } ;
struct iwl_fw_runtime_ops {int dummy; } ;
struct TYPE_4__ {TYPE_1__* wks; int conf; } ;
struct iwl_fw_runtime {TYPE_2__ dump; void* ops_ctx; struct iwl_fw_runtime_ops const* ops; int dev; struct iwl_fw const* fw; struct iwl_trans* trans; } ;
struct iwl_fw {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_3__ {int idx; int wk; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct iwl_fw_runtime*,struct dentry*) ;
 int FUNC_2 (struct iwl_fw_runtime*,int ,int) ;

void FUNC_3(struct iwl_fw_runtime *VAR_3, struct iwl_trans *VAR_4,
   const struct iwl_fw *VAR_5,
   const struct iwl_fw_runtime_ops *VAR_6, void *VAR_7,
   struct dentry *VAR_8)
{
 int VAR_9;

 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->trans = VAR_4;
 VAR_3->fw = VAR_5;
 VAR_3->dev = VAR_4->dev;
 VAR_3->dump.conf = VAR_0;
 VAR_3->ops = VAR_6;
 VAR_3->ops_ctx = VAR_7;
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_3->dump.wks[VAR_9].idx = VAR_9;
  FUNC_0(&VAR_3->dump.wks[VAR_9].wk, VAR_2);
 }
 FUNC_1(VAR_3, VAR_8);
}
