
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct se_portal_group {int tpg_lun_mutex; int tpg_lun_hlist; } ;
struct se_lun {int lun_access_ro; int lun_ref; int link; int lun_dev_link; int lun_se_dev; int lun_index; } ;
struct TYPE_5__ {int default_tg_pt_gp; } ;
struct se_device {int dev_flags; TYPE_3__* se_hba; int se_port_lock; int dev_sep_list; int export_count; int dev_index; TYPE_2__ t10_alua; TYPE_1__* transport; } ;
struct TYPE_6__ {int hba_flags; } ;
struct TYPE_4__ {int transport_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct se_lun*,struct se_device*) ;
 int VAR_4 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (int ,struct se_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct se_lun*,int ) ;

int FUNC_11(
 struct se_portal_group *VAR_5,
 struct se_lun *VAR_6,
 bool VAR_7,
 struct se_device *VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_6(&VAR_6->lun_ref, VAR_4, 0,
         VAR_1);
 if (VAR_9 < 0)
  goto out;

 VAR_9 = FUNC_0(VAR_6, VAR_8);
 if (VAR_9)
  goto out_kill_ref;

 if (!(VAR_8->transport->transport_flags &
      VAR_3) &&
     !(VAR_8->se_hba->hba_flags & VAR_2))
  FUNC_10(VAR_6, VAR_8->t10_alua.default_tg_pt_gp);

 FUNC_3(&VAR_5->tpg_lun_mutex);

 FUNC_8(&VAR_8->se_port_lock);
 VAR_6->lun_index = VAR_8->dev_index;
 FUNC_7(VAR_6->lun_se_dev, VAR_8);
 VAR_8->export_count++;
 FUNC_2(&VAR_6->lun_dev_link, &VAR_8->dev_sep_list);
 FUNC_9(&VAR_8->se_port_lock);

 if (VAR_8->dev_flags & VAR_0)
  VAR_6->lun_access_ro = 1;
 else
  VAR_6->lun_access_ro = VAR_7;
 if (!(VAR_8->se_hba->hba_flags & VAR_2))
  FUNC_1(&VAR_6->link, &VAR_5->tpg_lun_hlist);
 FUNC_4(&VAR_5->tpg_lun_mutex);

 return 0;

out_kill_ref:
 FUNC_5(&VAR_6->lun_ref);
out:
 return VAR_9;
}
