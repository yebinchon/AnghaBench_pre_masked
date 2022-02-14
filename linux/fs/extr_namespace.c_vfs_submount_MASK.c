
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct file_system_type {int dummy; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_2__ {int * s_user_ns; } ;


 int VAR_0 ;
 struct vfsmount* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct vfsmount* FUNC_1 (struct file_system_type*,int ,char const*,void*) ;

struct vfsmount *
FUNC_2(const struct dentry *VAR_3, struct file_system_type *VAR_4,
      const char *VAR_5, void *VAR_6)
{




 if (VAR_3->d_sb->s_user_ns != &VAR_2)
  return FUNC_0(-VAR_0);

 return FUNC_1(VAR_4, VAR_1, VAR_5, VAR_6);
}
