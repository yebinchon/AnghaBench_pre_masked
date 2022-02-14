
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_vnode {int vfs_inode; } ;
struct afs_net {int dummy; } ;


 struct afs_net* FUNC_0 (int *) ;

__attribute__((used)) static inline struct afs_net *FUNC_1(struct afs_vnode *VAR_0)
{
 return FUNC_0(&VAR_0->vfs_inode);
}
