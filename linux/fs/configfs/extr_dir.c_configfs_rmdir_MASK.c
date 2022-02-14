
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct module {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {struct dentry* d_parent; struct configfs_dirent* d_fsdata; } ;
struct TYPE_8__ {TYPE_1__* ci_type; } ;
struct TYPE_9__ {TYPE_2__ cg_item; } ;
struct configfs_subsystem {int su_mutex; TYPE_3__ su_group; } ;
struct configfs_fragment {int frag_dead; int frag_sem; } ;
struct configfs_dirent {int s_type; struct configfs_fragment* s_frag; scalar_t__ s_dependent_count; } ;
struct config_item {TYPE_4__* ci_type; } ;
struct TYPE_11__ {struct configfs_subsystem* cg_subsys; } ;
struct TYPE_10__ {struct module* ct_owner; } ;
struct TYPE_7__ {struct module* ct_owner; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct config_item*,struct config_item*) ;
 int FUNC_2 (struct config_item*,struct config_item*) ;
 int FUNC_3 (struct config_item*) ;
 int FUNC_4 (struct config_item*) ;
 int FUNC_5 (struct config_item*) ;
 int FUNC_6 (struct dentry*,struct dentry**) ;
 int FUNC_7 (struct dentry*) ;
 int VAR_7 ;
 struct config_item* FUNC_8 (struct dentry*) ;
 int VAR_8 ;
 int FUNC_9 (struct dentry*) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (struct dentry*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct module*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 TYPE_5__* FUNC_19 (struct config_item*) ;
 int FUNC_20 (TYPE_5__*) ;
 int FUNC_21 (struct config_item*) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int FUNC_23(struct inode *VAR_9, struct dentry *VAR_10)
{
 struct config_item *VAR_11;
 struct config_item *VAR_12;
 struct configfs_subsystem *VAR_13;
 struct configfs_dirent *VAR_14;
 struct configfs_fragment *VAR_15;
 struct module *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
 int VAR_18;

 VAR_14 = VAR_10->d_fsdata;
 if (VAR_14->s_type & VAR_0)
  return -VAR_6;


 VAR_11 = FUNC_8(VAR_10->d_parent);
 VAR_13 = FUNC_19(VAR_11)->cg_subsys;
 FUNC_0(!VAR_13);

 if (!VAR_11->ci_type) {
  FUNC_3(VAR_11);
  return -VAR_5;
 }


 FUNC_0(!VAR_13->su_group.cg_item.ci_type);
 VAR_16 = VAR_13->su_group.cg_item.ci_type->ct_owner;





 do {
  struct dentry *VAR_19;

  FUNC_15(&VAR_8);
  FUNC_17(&VAR_7);





  VAR_18 = VAR_14->s_dependent_count ? -VAR_3 : 0;
  if (!VAR_18) {
   VAR_18 = FUNC_6(VAR_10, &VAR_19);
   if (VAR_18)
    FUNC_7(VAR_10);
  }
  FUNC_18(&VAR_7);
  FUNC_16(&VAR_8);

  if (VAR_18) {
   if (VAR_18 != -VAR_2) {
    FUNC_3(VAR_11);
    return VAR_18;
   }


   FUNC_12(FUNC_9(VAR_19));
   FUNC_13(FUNC_9(VAR_19));
   FUNC_11(VAR_19);
  }
 } while (VAR_18 == -VAR_2);

 VAR_15 = VAR_14->s_frag;
 if (FUNC_10(&VAR_15->frag_sem)) {
  FUNC_17(&VAR_7);
  FUNC_7(VAR_10);
  FUNC_18(&VAR_7);
  return -VAR_4;
 }
 VAR_15->frag_dead = 1;
 FUNC_22(&VAR_15->frag_sem);


 VAR_12 = FUNC_8(VAR_10);


 FUNC_3(VAR_11);

 if (VAR_12->ci_type)
  VAR_17 = VAR_12->ci_type->ct_owner;

 if (VAR_14->s_type & VAR_1) {
  FUNC_4(VAR_12);

  FUNC_15(&VAR_13->su_mutex);
  FUNC_1(VAR_11, VAR_12);
  FUNC_20(FUNC_19(VAR_12));
 } else {
  FUNC_5(VAR_12);

  FUNC_15(&VAR_13->su_mutex);
  FUNC_1(VAR_11, VAR_12);
  FUNC_21(VAR_12);
 }

 FUNC_2(VAR_11, VAR_12);
 FUNC_16(&VAR_13->su_mutex);


 FUNC_3(VAR_12);

 FUNC_14(VAR_17);
 FUNC_14(VAR_16);

 return 0;
}
