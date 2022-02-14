
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dentry {struct dentry* d_parent; struct configfs_dirent* d_fsdata; TYPE_1__* d_sb; } ;
struct TYPE_9__ {struct dentry* ci_dentry; } ;
struct config_group {TYPE_6__ cg_item; } ;
struct configfs_subsystem {struct config_group su_group; } ;
struct configfs_fragment {int frag_dead; int frag_sem; } ;
struct configfs_dirent {struct configfs_fragment* s_frag; } ;
struct TYPE_8__ {int i_flags; } ;
struct TYPE_7__ {struct dentry* s_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (struct dentry*,int *) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (struct dentry*) ;
 TYPE_2__* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (TYPE_2__*,struct dentry*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct config_group*) ;
 int FUNC_17 (int *) ;

void FUNC_18(struct configfs_subsystem *VAR_5)
{
 struct config_group *VAR_6 = &VAR_5->su_group;
 struct dentry *VAR_7 = VAR_6->cg_item.ci_dentry;
 struct dentry *VAR_8 = VAR_7->d_sb->s_root;
 struct configfs_dirent *VAR_9 = VAR_7->d_fsdata;
 struct configfs_fragment *VAR_10 = VAR_9->s_frag;

 if (VAR_7->d_parent != VAR_8) {
  FUNC_13("Tried to unregister non-subsystem!\n");
  return;
 }

 FUNC_6(&VAR_10->frag_sem);
 VAR_10->frag_dead = 1;
 FUNC_17(&VAR_10->frag_sem);

 FUNC_9(FUNC_4(VAR_8),
     VAR_1);
 FUNC_9(FUNC_4(VAR_7), VAR_0);
 FUNC_11(&VAR_4);
 FUNC_14(&VAR_3);
 if (FUNC_1(VAR_7, ((void*)0))) {
  FUNC_13("Tried to unregister non-empty subsystem!\n");
 }
 FUNC_15(&VAR_3);
 FUNC_12(&VAR_4);
 FUNC_0(&VAR_6->cg_item);
 FUNC_4(VAR_7)->i_flags |= VAR_2;
 FUNC_5(VAR_7);
 FUNC_8(FUNC_4(VAR_8), VAR_7);
 FUNC_10(FUNC_4(VAR_7));

 FUNC_3(VAR_7);

 FUNC_10(FUNC_4(VAR_8));

 FUNC_7(VAR_7);

 FUNC_16(VAR_6);
 FUNC_2();
}
