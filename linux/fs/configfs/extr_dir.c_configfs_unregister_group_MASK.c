
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dentry {struct configfs_dirent* d_fsdata; } ;
struct configfs_subsystem {int su_mutex; } ;
struct configfs_fragment {int frag_dead; int frag_sem; } ;
struct configfs_dirent {struct configfs_fragment* s_frag; } ;
struct TYPE_9__ {TYPE_1__* ci_parent; struct dentry* ci_dentry; } ;
struct config_group {TYPE_6__ cg_item; struct configfs_subsystem* cg_subsys; } ;
struct TYPE_8__ {int i_flags; } ;
struct TYPE_7__ {struct dentry* ci_dentry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (struct dentry*,int *) ;
 int VAR_2 ;
 int FUNC_2 (struct dentry*) ;
 TYPE_2__* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (TYPE_2__*,struct dentry*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct config_group*) ;
 int FUNC_15 (int *) ;

void FUNC_16(struct config_group *VAR_3)
{
 struct configfs_subsystem *VAR_4 = VAR_3->cg_subsys;
 struct dentry *VAR_5 = VAR_3->cg_item.ci_dentry;
 struct dentry *VAR_6 = VAR_3->cg_item.ci_parent->ci_dentry;
 struct configfs_dirent *VAR_7 = VAR_5->d_fsdata;
 struct configfs_fragment *VAR_8 = VAR_7->s_frag;

 FUNC_5(&VAR_8->frag_sem);
 VAR_8->frag_dead = 1;
 FUNC_15(&VAR_8->frag_sem);

 FUNC_8(FUNC_3(VAR_6), VAR_0);
 FUNC_12(&VAR_2);
 FUNC_1(VAR_5, ((void*)0));
 FUNC_13(&VAR_2);

 FUNC_0(&VAR_3->cg_item);
 FUNC_3(VAR_5)->i_flags |= VAR_1;
 FUNC_4(VAR_5);
 FUNC_7(FUNC_3(VAR_6), VAR_5);
 FUNC_2(VAR_5);
 FUNC_9(FUNC_3(VAR_6));

 FUNC_6(VAR_5);

 FUNC_10(&VAR_4->su_mutex);
 FUNC_14(VAR_3);
 FUNC_11(&VAR_4->su_mutex);
}
