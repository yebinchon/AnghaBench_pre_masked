
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dentry {struct configfs_dirent* d_fsdata; } ;
struct configfs_fragment {int dummy; } ;
struct configfs_dirent {int s_type; } ;
struct TYPE_3__ {int ci_name; int ci_namebuf; struct dentry* ci_dentry; } ;
struct config_group {TYPE_1__ cg_item; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,struct dentry*,struct configfs_fragment*) ;
 int FUNC_2 (struct dentry*,int *) ;
 struct dentry* FUNC_3 (struct dentry*,int ) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;

__attribute__((used)) static int FUNC_7(struct config_group *VAR_2,
    struct config_group *VAR_3,
    struct configfs_fragment *VAR_4)
{
 int VAR_5;
 struct configfs_dirent *VAR_6;

 struct dentry *VAR_7, *VAR_8 = VAR_2->cg_item.ci_dentry;

 if (!VAR_3->cg_item.ci_name)
  VAR_3->cg_item.ci_name = VAR_3->cg_item.ci_namebuf;

 VAR_5 = -VAR_1;
 VAR_7 = FUNC_3(VAR_8, VAR_3->cg_item.ci_name);
 if (VAR_7) {
  FUNC_2(VAR_7, ((void*)0));

  VAR_5 = FUNC_1(&VAR_2->cg_item,
         &VAR_3->cg_item, VAR_7, VAR_4);
  if (!VAR_5) {
   VAR_6 = VAR_7->d_fsdata;
   VAR_6->s_type |= VAR_0;
  } else {
   FUNC_0(FUNC_5(VAR_7));
   FUNC_4(VAR_7);
   FUNC_6(VAR_7);
  }
 }

 return VAR_5;
}
