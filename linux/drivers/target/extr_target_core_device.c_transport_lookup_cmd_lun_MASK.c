
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct se_session {TYPE_2__* se_tpg; struct se_node_acl* se_node_acl; } ;
struct se_node_acl {int dummy; } ;
struct se_lun {int lun_se_dev; int lun_ref; } ;
struct se_dev_entry {scalar_t__ lun_access_ro; int pr_res_key; int se_lun; int read_bytes; int write_bytes; int total_cmds; } ;
struct se_cmd {scalar_t__ data_direction; int lun_ref_active; TYPE_3__* se_dev; int data_length; int se_cmd_flags; scalar_t__ orig_fe_lun; struct se_lun* se_lun; TYPE_1__* se_tfo; int pr_res_key; struct se_session* se_sess; } ;
typedef int sense_reason_t ;
struct TYPE_6__ {int read_bytes; int write_bytes; int num_cmds; } ;
struct TYPE_5__ {struct se_lun* tpg_virt_lun0; } ;
struct TYPE_4__ {int fabric_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,scalar_t__) ;
 struct se_lun* FUNC_5 (int ) ;
 TYPE_3__* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 struct se_dev_entry* FUNC_9 (struct se_node_acl*,scalar_t__) ;

sense_reason_t
FUNC_10(struct se_cmd *VAR_7, u64 VAR_8)
{
 struct se_lun *VAR_9 = ((void*)0);
 struct se_session *VAR_10 = VAR_7->se_sess;
 struct se_node_acl *VAR_11 = VAR_10->se_node_acl;
 struct se_dev_entry *VAR_12;
 sense_reason_t VAR_13 = VAR_5;

 FUNC_7();
 VAR_12 = FUNC_9(VAR_11, VAR_8);
 if (VAR_12) {
  FUNC_1(&VAR_12->total_cmds);

  if (VAR_7->data_direction == VAR_2)
   FUNC_0(VAR_7->data_length,
     &VAR_12->write_bytes);
  else if (VAR_7->data_direction == VAR_0)
   FUNC_0(VAR_7->data_length,
     &VAR_12->read_bytes);

  VAR_9 = FUNC_5(VAR_12->se_lun);

  if (!FUNC_3(&VAR_9->lun_ref)) {
   VAR_9 = ((void*)0);
   goto out_unlock;
  }

  VAR_7->se_lun = VAR_9;
  VAR_7->pr_res_key = VAR_12->pr_res_key;
  VAR_7->orig_fe_lun = VAR_8;
  VAR_7->se_cmd_flags |= VAR_3;
  VAR_7->lun_ref_active = 1;

  if ((VAR_7->data_direction == VAR_2) &&
      VAR_12->lun_access_ro) {
   FUNC_4("TARGET_CORE[%s]: Detected WRITE_PROTECTED LUN"
    " Access for 0x%08llx\n",
    VAR_7->se_tfo->fabric_name,
    VAR_8);
   FUNC_8();
   VAR_13 = VAR_6;
   goto ref_dev;
  }
 }
out_unlock:
 FUNC_8();

 if (!VAR_9) {





  if (VAR_8 != 0) {
   FUNC_4("TARGET_CORE[%s]: Detected NON_EXISTENT_LUN"
    " Access for 0x%08llx\n",
    VAR_7->se_tfo->fabric_name,
    VAR_8);
   return VAR_4;
  }

  VAR_9 = VAR_10->se_tpg->tpg_virt_lun0;
  VAR_7->se_lun = VAR_10->se_tpg->tpg_virt_lun0;
  VAR_7->orig_fe_lun = 0;
  VAR_7->se_cmd_flags |= VAR_3;

  FUNC_2(&VAR_9->lun_ref);
  VAR_7->lun_ref_active = 1;




  if ((VAR_7->data_direction != VAR_0) &&
      (VAR_7->data_direction != VAR_1)) {
   VAR_13 = VAR_6;
   goto ref_dev;
  }
 }






ref_dev:
 VAR_7->se_dev = FUNC_6(VAR_9->lun_se_dev);
 FUNC_1(&VAR_7->se_dev->num_cmds);

 if (VAR_7->data_direction == VAR_2)
  FUNC_0(VAR_7->data_length,
    &VAR_7->se_dev->write_bytes);
 else if (VAR_7->data_direction == VAR_0)
  FUNC_0(VAR_7->data_length,
    &VAR_7->se_dev->read_bytes);

 return VAR_13;
}
