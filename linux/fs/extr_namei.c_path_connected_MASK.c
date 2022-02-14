
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {scalar_t__ mnt_root; struct super_block* mnt_sb; } ;
struct super_block {int s_iflags; scalar_t__ s_root; } ;
struct path {int dentry; struct vfsmount* mnt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(const struct path *VAR_1)
{
 struct vfsmount *VAR_2 = VAR_1->mnt;
 struct super_block *VAR_3 = VAR_2->mnt_sb;


 if (!(VAR_3->s_iflags & VAR_0) && (VAR_2->mnt_root == VAR_3->s_root))
  return 1;

 return FUNC_0(VAR_1->dentry, VAR_2->mnt_root);
}
