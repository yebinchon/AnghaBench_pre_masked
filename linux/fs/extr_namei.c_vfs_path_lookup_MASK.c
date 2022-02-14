
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct path {struct dentry* dentry; struct vfsmount* mnt; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int,struct path*,struct path*) ;
 int FUNC_1 (char const*) ;

int FUNC_2(struct dentry *VAR_1, struct vfsmount *VAR_2,
      const char *VAR_3, unsigned int VAR_4,
      struct path *VAR_5)
{
 struct path VAR_6 = {.mnt = VAR_2, .dentry = VAR_1};

 return FUNC_0(VAR_0, FUNC_1(VAR_3),
          VAR_4 , VAR_5, &VAR_6);
}
