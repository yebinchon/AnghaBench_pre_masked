
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct afs_vnode {struct inode vfs_inode; } ;



__attribute__((used)) static inline struct inode *FUNC_0(struct afs_vnode *VAR_0)
{
 return &VAR_0->vfs_inode;
}
