
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int d_fsdata; } ;
struct config_item {int dummy; } ;
struct TYPE_2__ {struct config_item cg_item; } ;
struct configfs_subsystem {TYPE_1__ su_group; } ;
struct configfs_dirent {int s_dentry; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ,struct config_item*) ;
 struct configfs_dirent* FUNC_3 (int ,struct config_item*) ;
 struct dentry* FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

int FUNC_9(struct configfs_subsystem *VAR_1,
    struct config_item *VAR_2)
{
 int VAR_3;
 struct configfs_dirent *VAR_4;
 struct config_item *VAR_5 = &VAR_1->su_group.cg_item;
 struct dentry *VAR_6;





 VAR_6 = FUNC_4();
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);






 FUNC_7(FUNC_6(VAR_6));

 VAR_4 = FUNC_3(VAR_6->d_fsdata, VAR_5);
 if (!VAR_4) {
  VAR_3 = -VAR_0;
  goto out_unlock_fs;
 }


 VAR_3 = FUNC_2(VAR_4->s_dentry, VAR_2);

out_unlock_fs:
 FUNC_8(FUNC_6(VAR_6));





 FUNC_5();

 return VAR_3;
}
