
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct se_session {scalar_t__ sess_bin_isid; TYPE_4__* se_node_acl; struct se_portal_group* se_tpg; } ;
struct se_portal_group {TYPE_2__* se_tpg_tfo; } ;
struct se_device {scalar_t__ dev_res_bin_isid; int dev_reservation_lock; TYPE_1__* reservation_holder; } ;
struct se_cmd {int orig_fe_lun; TYPE_3__* se_lun; struct se_session* se_sess; struct se_device* se_dev; } ;
typedef int sense_reason_t ;
struct TYPE_8__ {int initiatorname; } ;
struct TYPE_7__ {int unpacked_lun; } ;
struct TYPE_6__ {int fabric_name; } ;
struct TYPE_5__ {TYPE_4__* se_node_acl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct se_cmd*) ;
 int FUNC_4 (struct se_cmd*,int ) ;
 int FUNC_5 (struct se_device*) ;

sense_reason_t
FUNC_6(struct se_cmd *VAR_2)
{
 struct se_device *VAR_3 = VAR_2->se_dev;
 struct se_session *VAR_4 = VAR_2->se_sess;
 struct se_portal_group *VAR_5;
 int VAR_6;

 if (!VAR_4 || !VAR_4->se_tpg)
  goto out;
 VAR_6 = FUNC_3(VAR_2);
 if (VAR_6 == 1)
  goto out;
 if (VAR_6 < 0)
  return VAR_1;

 FUNC_1(&VAR_3->dev_reservation_lock);
 if (!VAR_3->reservation_holder || !VAR_4)
  goto out_unlock;

 if (VAR_3->reservation_holder->se_node_acl != VAR_4->se_node_acl)
  goto out_unlock;

 if (VAR_3->dev_res_bin_isid != VAR_4->sess_bin_isid)
  goto out_unlock;

 FUNC_5(VAR_3);
 VAR_5 = VAR_4->se_tpg;
 FUNC_0("SCSI-2 Released reservation for %s LUN: %llu ->"
  " MAPPED LUN: %llu for %s\n",
  VAR_5->se_tpg_tfo->fabric_name,
  VAR_2->se_lun->unpacked_lun, VAR_2->orig_fe_lun,
  VAR_4->se_node_acl->initiatorname);

out_unlock:
 FUNC_2(&VAR_3->dev_reservation_lock);
out:
 FUNC_4(VAR_2, VAR_0);
 return 0;
}
