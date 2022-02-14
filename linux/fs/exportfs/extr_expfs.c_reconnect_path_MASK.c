
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {TYPE_1__* mnt_sb; } ;
struct dentry {int d_flags; } ;
struct TYPE_2__ {struct dentry* s_root; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (struct dentry*) ;
 struct dentry* FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct dentry*) ;
 struct dentry* FUNC_8 (struct vfsmount*,struct dentry*,char*) ;

__attribute__((used)) static int
FUNC_9(struct vfsmount *VAR_1, struct dentry *VAR_2, char *VAR_3)
{
 struct dentry *VAR_4, *VAR_5;

 VAR_4 = FUNC_5(VAR_2);

 while (VAR_4->d_flags & VAR_0) {
  FUNC_0(VAR_4 == VAR_1->mnt_sb->s_root);

  if (FUNC_2(VAR_4))
   VAR_5 = FUNC_8(VAR_1, VAR_4, VAR_3);
  else
   VAR_5 = FUNC_6(VAR_4);

  if (!VAR_5)
   break;
  FUNC_7(VAR_4);
  if (FUNC_1(VAR_5))
   return FUNC_3(VAR_5);
  VAR_4 = VAR_5;
 }
 FUNC_7(VAR_4);
 FUNC_4(VAR_2);
 return 0;
}
