
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct se_tmr_req {TYPE_2__* tmr_dev; int tmr_list; } ;
struct se_session {struct se_node_acl* se_node_acl; } ;
struct se_node_acl {int dummy; } ;
struct se_lun {int lun_se_dev; int lun_ref; } ;
struct se_dev_entry {int pr_res_key; int se_lun; } ;
struct se_cmd {int lun_ref_active; void* se_dev; TYPE_1__* se_tfo; int se_cmd_flags; int orig_fe_lun; int pr_res_key; struct se_lun* se_lun; struct se_tmr_req* se_tmr_req; struct se_session* se_sess; } ;
struct TYPE_4__ {int se_tmr_lock; int dev_tmr_list; } ;
struct TYPE_3__ {int fabric_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ) ;
 struct se_lun* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct se_dev_entry* FUNC_9 (struct se_node_acl*,int ) ;

int FUNC_10(struct se_cmd *VAR_2, u64 VAR_3)
{
 struct se_dev_entry *VAR_4;
 struct se_lun *VAR_5 = ((void*)0);
 struct se_session *VAR_6 = VAR_2->se_sess;
 struct se_node_acl *VAR_7 = VAR_6->se_node_acl;
 struct se_tmr_req *VAR_8 = VAR_2->se_tmr_req;
 unsigned long VAR_9;

 FUNC_5();
 VAR_4 = FUNC_9(VAR_7, VAR_3);
 if (VAR_4) {
  VAR_5 = FUNC_3(VAR_4->se_lun);

  if (!FUNC_1(&VAR_5->lun_ref)) {
   VAR_5 = ((void*)0);
   goto out_unlock;
  }

  VAR_2->se_lun = VAR_5;
  VAR_2->pr_res_key = VAR_4->pr_res_key;
  VAR_2->orig_fe_lun = VAR_3;
  VAR_2->se_cmd_flags |= VAR_1;
  VAR_2->lun_ref_active = 1;
 }
out_unlock:
 FUNC_6();

 if (!VAR_5) {
  FUNC_2("TARGET_CORE[%s]: Detected NON_EXISTENT_LUN"
   " Access for 0x%08llx\n",
   VAR_2->se_tfo->fabric_name,
   VAR_3);
  return -VAR_0;
 }
 VAR_2->se_dev = FUNC_4(VAR_5->lun_se_dev);
 VAR_8->tmr_dev = FUNC_4(VAR_5->lun_se_dev);

 FUNC_7(&VAR_8->tmr_dev->se_tmr_lock, VAR_9);
 FUNC_0(&VAR_8->tmr_list, &VAR_8->tmr_dev->dev_tmr_list);
 FUNC_8(&VAR_8->tmr_dev->se_tmr_lock, VAR_9);

 return 0;
}
