
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscache_cookie {int dummy; } ;
struct ceph_inode_info {int i_vino; int vfs_inode; struct fscache_cookie* fscache; } ;


 int FUNC_0 (struct fscache_cookie*,int *,int) ;
 int FUNC_1 (struct fscache_cookie*,int *) ;

void FUNC_2(struct ceph_inode_info* VAR_0)
{
 struct fscache_cookie* VAR_1;

 if ((VAR_1 = VAR_0->fscache) == ((void*)0))
  return;

 VAR_0->fscache = ((void*)0);

 FUNC_1(VAR_1, &VAR_0->vfs_inode);
 FUNC_0(VAR_1, &VAR_0->i_vino, 0);
}
