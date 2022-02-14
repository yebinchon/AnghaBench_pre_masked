
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct path {struct dentry* dentry; struct vfsmount* mnt; } ;
struct export_operations {int (* get_name ) (struct dentry*,char*,struct dentry*) ;} ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_2__ {struct export_operations* s_export_op; } ;


 int FUNC_0 (struct path*,char*,struct dentry*) ;
 int FUNC_1 (struct dentry*,char*,struct dentry*) ;

__attribute__((used)) static int FUNC_2(struct vfsmount *VAR_0, struct dentry *VAR_1,
  char *VAR_2, struct dentry *VAR_3)
{
 const struct export_operations *VAR_4 = VAR_1->d_sb->s_export_op;
 struct path VAR_5 = {.mnt = VAR_0, .dentry = VAR_1};

 if (VAR_4->get_name)
  return VAR_4->get_name(VAR_1, VAR_2, VAR_3);
 else
  return FUNC_0(&VAR_5, VAR_2, VAR_3);
}
