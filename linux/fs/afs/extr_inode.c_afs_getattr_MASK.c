
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct path {int dentry; } ;
struct kstat {int dummy; } ;
struct inode {int i_generation; int i_ino; } ;
struct afs_vnode {int cb_lock; } ;


 struct afs_vnode* FUNC_0 (struct inode*) ;
 int FUNC_1 (char*,int ,int ) ;
 struct inode* FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct inode*,struct kstat*) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int*) ;

int FUNC_7(const struct path *VAR_0, struct kstat *VAR_1,
  u32 VAR_2, unsigned int VAR_3)
{
 struct inode *VAR_4 = FUNC_2(VAR_0->dentry);
 struct afs_vnode *VAR_5 = FUNC_0(VAR_4);
 int VAR_6 = 0;

 FUNC_1("{ ino=%lu v=%u }", VAR_4->i_ino, VAR_4->i_generation);

 do {
  FUNC_6(&VAR_5->cb_lock, &VAR_6);
  FUNC_4(VAR_4, VAR_1);
 } while (FUNC_5(&VAR_5->cb_lock, VAR_6));

 FUNC_3(&VAR_5->cb_lock, VAR_6);
 return 0;
}
