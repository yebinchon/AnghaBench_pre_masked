
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_root; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, struct dentry *VAR_1)
{




 if (!FUNC_0(VAR_1))
  return 1;


 if (FUNC_1(VAR_1))
  return 0;


 return FUNC_2(VAR_1, ((struct vfsmount *)VAR_0)->mnt_root);
}
