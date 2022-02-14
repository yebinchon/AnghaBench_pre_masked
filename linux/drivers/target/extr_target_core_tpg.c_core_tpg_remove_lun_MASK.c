
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_portal_group {int tpg_lun_mutex; } ;
struct se_lun {int lun_shutdown; int lun_ref; int link; scalar_t__ lun_se_dev; int lun_dev_link; } ;
struct se_device {TYPE_1__* se_hba; int se_port_lock; int export_count; } ;
struct TYPE_2__ {int hba_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct se_lun*,struct se_portal_group*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,int *) ;
 struct se_device* FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct se_lun*) ;
 int FUNC_11 (struct se_lun*) ;

void FUNC_12(
 struct se_portal_group *VAR_1,
 struct se_lun *VAR_2)
{




 struct se_device *VAR_3 = FUNC_7(VAR_2->lun_se_dev);

 VAR_2->lun_shutdown = 1;

 FUNC_0(VAR_2, VAR_1);






 FUNC_11(VAR_2);

 FUNC_3(&VAR_1->tpg_lun_mutex);
 if (VAR_2->lun_se_dev) {
  FUNC_10(VAR_2);

  FUNC_8(&VAR_3->se_port_lock);
  FUNC_2(&VAR_2->lun_dev_link);
  VAR_3->export_count--;
  FUNC_6(VAR_2->lun_se_dev, ((void*)0));
  FUNC_9(&VAR_3->se_port_lock);
 }
 if (!(VAR_3->se_hba->hba_flags & VAR_0))
  FUNC_1(&VAR_2->link);

 VAR_2->lun_shutdown = 0;
 FUNC_4(&VAR_1->tpg_lun_mutex);

 FUNC_5(&VAR_2->lun_ref);
}
