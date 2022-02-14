
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* ci_dentry; } ;
struct TYPE_6__ {TYPE_4__ cg_item; } ;
struct configfs_subsystem {TYPE_2__ su_group; } ;
struct configfs_dirent {int s_dentry; } ;
struct config_item {TYPE_3__* ci_dentry; struct config_group* ci_group; } ;
struct config_group {struct config_item cg_item; struct configfs_subsystem* cg_subsys; } ;
struct TYPE_7__ {int d_fsdata; } ;
struct TYPE_5__ {struct configfs_dirent* d_fsdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct config_item*) ;
 struct configfs_dirent* FUNC_1 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_2 (struct config_item*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct config_item*) ;
 struct configfs_subsystem* FUNC_7 (int ) ;

int FUNC_8(struct configfs_subsystem *VAR_2,
      struct config_item *VAR_3)
{
 struct configfs_subsystem *VAR_4;
 struct config_group *VAR_5, *VAR_6;
 struct configfs_dirent *VAR_7;
 int VAR_8 = -VAR_1;


 if (FUNC_2(VAR_3))
  return -VAR_0;

 VAR_6 = VAR_3->ci_group;




 if (FUNC_2(&VAR_6->cg_item)) {
  VAR_4 = FUNC_7(FUNC_6(VAR_3));
  VAR_5 = VAR_6;
 } else {
  VAR_4 = VAR_6->cg_subsys;

  for (VAR_5 = VAR_6; !FUNC_2(&VAR_5->cg_item);
       VAR_5 = VAR_5->cg_item.ci_group)
   ;
 }

 if (VAR_4 != VAR_2) {





  FUNC_4(FUNC_3(VAR_5->cg_item.ci_dentry));





  VAR_7 = FUNC_1(
    VAR_5->cg_item.ci_dentry->d_fsdata,
    &VAR_4->su_group.cg_item);
  if (!VAR_7)
   goto out_root_unlock;
 } else {
  VAR_7 = VAR_4->su_group.cg_item.ci_dentry->d_fsdata;
 }


 VAR_8 = FUNC_0(VAR_7->s_dentry, VAR_3);

 if (VAR_4 != VAR_2)
out_root_unlock:




  FUNC_5(FUNC_3(VAR_5->cg_item.ci_dentry));

 return VAR_8;
}
