
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct fs_context {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int) ;
 struct vfsmount* FUNC_1 (struct fs_context*) ;
 struct vfsmount* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct fs_context*) ;
 int VAR_0 ;
 int FUNC_4 (struct fs_context*,struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 struct vfsmount* FUNC_6 (struct fs_context*) ;
 struct fs_context* FUNC_7 (int *,struct dentry*) ;
 int FUNC_8 (struct fs_context*) ;

__attribute__((used)) static struct vfsmount *FUNC_9(struct dentry *VAR_1)
{
 struct fs_context *VAR_2;
 struct vfsmount *VAR_3;
 int VAR_4;

 FUNC_0(!FUNC_5(VAR_1));

 VAR_2 = FUNC_7(&VAR_0, VAR_1);
 if (FUNC_3(VAR_2))
  return FUNC_1(VAR_2);

 VAR_4 = FUNC_4(VAR_2, VAR_1);
 if (!VAR_4)
  VAR_3 = FUNC_6(VAR_2);
 else
  VAR_3 = FUNC_2(VAR_4);

 FUNC_8(VAR_2);
 return VAR_3;
}
