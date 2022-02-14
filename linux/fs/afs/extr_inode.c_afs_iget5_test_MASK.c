
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct afs_vnode {int fid; } ;
struct afs_iget_data {int fid; } ;


 struct afs_vnode* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;

int FUNC_2(struct inode *VAR_0, void *VAR_1)
{
 struct afs_iget_data *VAR_2 = VAR_1;
 struct afs_vnode *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(&VAR_3->fid, &VAR_2->fid, sizeof(VAR_2->fid)) == 0;
}
