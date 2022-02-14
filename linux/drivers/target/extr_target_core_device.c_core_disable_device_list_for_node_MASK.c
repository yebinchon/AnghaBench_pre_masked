
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_portal_group {int dummy; } ;
struct se_node_acl {int lun_entry_mutex; } ;
struct se_lun {int lun_deve_lock; int lun_se_dev; } ;
struct se_device {int dummy; } ;
struct se_dev_entry {int lun_access_ro; int se_lun_acl; int se_lun; int pr_comp; int pr_kref; int attach_count; scalar_t__ creation_time; int deve_flags; int link; int lun_link; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct se_device*,struct se_node_acl*) ;
 int FUNC_2 (struct se_dev_entry*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct se_dev_entry*,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 struct se_device* FUNC_9 (int ) ;
 int VAR_1 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct se_node_acl*,int *,int) ;
 int VAR_2 ;
 int FUNC_13 (int *) ;

void FUNC_14(
 struct se_lun *VAR_3,
 struct se_dev_entry *VAR_4,
 struct se_node_acl *VAR_5,
 struct se_portal_group *VAR_6)
{




 struct se_device *VAR_7 = FUNC_9(VAR_3->lun_se_dev);

 FUNC_7(&VAR_5->lun_entry_mutex);
 FUNC_10(&VAR_3->lun_deve_lock);
 FUNC_6(&VAR_4->lun_link);
 FUNC_11(&VAR_3->lun_deve_lock);



 FUNC_2(VAR_4);

 FUNC_3(&VAR_4->link);
 FUNC_0(VAR_0, &VAR_4->deve_flags);
 VAR_4->lun_access_ro = 0;
 VAR_4->creation_time = 0;
 VAR_4->attach_count--;




 FUNC_5(&VAR_4->pr_kref, VAR_2);
 FUNC_13(&VAR_4->pr_comp);

 FUNC_8(VAR_4->se_lun, ((void*)0));
 FUNC_8(VAR_4->se_lun_acl, ((void*)0));

 FUNC_4(VAR_4, VAR_1);

 FUNC_1(VAR_7, VAR_5);
 FUNC_12(VAR_5, ((void*)0), 0);
}
