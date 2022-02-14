
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {struct configfs_dirent* d_fsdata; } ;
struct TYPE_2__ {scalar_t__ ci_name; scalar_t__ ci_namebuf; } ;
struct config_group {TYPE_1__ cg_item; } ;
struct configfs_subsystem {struct config_group su_group; } ;
struct configfs_fragment {int dummy; } ;
struct configfs_dirent {int s_element; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int VAR_1 ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ,TYPE_1__*,struct dentry*,struct configfs_fragment*) ;
 int FUNC_4 (struct configfs_dirent*) ;
 int VAR_2 ;
 struct dentry* FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct dentry*,int *) ;
 struct dentry* FUNC_8 (struct dentry*,scalar_t__) ;
 int FUNC_9 (struct dentry*) ;
 int FUNC_10 (struct dentry*) ;
 int FUNC_11 (struct dentry*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,struct config_group*) ;
 struct configfs_fragment* FUNC_15 () ;
 int FUNC_16 (struct configfs_fragment*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct config_group*) ;

int FUNC_21(struct configfs_subsystem *VAR_3)
{
 int VAR_4;
 struct config_group *VAR_5 = &VAR_3->su_group;
 struct dentry *VAR_6;
 struct dentry *VAR_7;
 struct configfs_dirent *VAR_8;
 struct configfs_fragment *VAR_9;

 VAR_9 = FUNC_15();
 if (!VAR_9)
  return -VAR_0;

 VAR_7 = FUNC_5();
 if (FUNC_1(VAR_7)) {
  FUNC_16(VAR_9);
  return FUNC_2(VAR_7);
 }

 if (!VAR_5->cg_item.ci_name)
  VAR_5->cg_item.ci_name = VAR_5->cg_item.ci_namebuf;

 VAR_8 = VAR_7->d_fsdata;
 FUNC_14(FUNC_19(VAR_8->s_element), VAR_5);

 FUNC_12(FUNC_10(VAR_7), VAR_1);

 VAR_4 = -VAR_0;
 VAR_6 = FUNC_8(VAR_7, VAR_5->cg_item.ci_name);
 if (VAR_6) {
  FUNC_7(VAR_6, ((void*)0));

  VAR_4 = FUNC_3(VAR_8->s_element, &VAR_5->cg_item,
         VAR_6, VAR_9);
  if (VAR_4) {
   FUNC_0(FUNC_10(VAR_6));
   FUNC_9(VAR_6);
   FUNC_11(VAR_6);
  } else {
   FUNC_17(&VAR_2);
   FUNC_4(VAR_6->d_fsdata);
   FUNC_18(&VAR_2);
  }
 }

 FUNC_13(FUNC_10(VAR_7));

 if (VAR_4) {
  FUNC_20(VAR_5);
  FUNC_6();
 }
 FUNC_16(VAR_9);

 return VAR_4;
}
