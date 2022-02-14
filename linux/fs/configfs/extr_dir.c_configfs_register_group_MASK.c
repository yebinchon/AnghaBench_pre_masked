
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int d_fsdata; } ;
struct configfs_subsystem {int su_mutex; } ;
struct configfs_fragment {int dummy; } ;
struct TYPE_2__ {struct dentry* ci_dentry; } ;
struct config_group {TYPE_1__ cg_item; struct configfs_subsystem* cg_subsys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct config_group*,struct config_group*,struct configfs_fragment*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct config_group*,struct config_group*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct configfs_fragment* FUNC_8 () ;
 int FUNC_9 (struct configfs_fragment*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct config_group*) ;

int FUNC_13(struct config_group *VAR_3,
       struct config_group *VAR_4)
{
 struct configfs_subsystem *VAR_5 = VAR_3->cg_subsys;
 struct dentry *VAR_6;
 struct configfs_fragment *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_8();
 if (!VAR_7)
  return -VAR_0;

 FUNC_6(&VAR_5->su_mutex);
 FUNC_5(VAR_3, VAR_4);
 FUNC_7(&VAR_5->su_mutex);

 VAR_6 = VAR_3->cg_item.ci_dentry;

 FUNC_3(FUNC_2(VAR_6), VAR_1);
 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_7);
 if (VAR_8)
  goto err_out;

 FUNC_10(&VAR_2);
 FUNC_0(VAR_4->cg_item.ci_dentry->d_fsdata);
 FUNC_11(&VAR_2);
 FUNC_4(FUNC_2(VAR_6));
 FUNC_9(VAR_7);
 return 0;
err_out:
 FUNC_4(FUNC_2(VAR_6));
 FUNC_6(&VAR_5->su_mutex);
 FUNC_12(VAR_4);
 FUNC_7(&VAR_5->su_mutex);
 FUNC_9(VAR_7);
 return VAR_8;
}
