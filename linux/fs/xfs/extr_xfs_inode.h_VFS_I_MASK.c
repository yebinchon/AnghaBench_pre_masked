
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct xfs_inode {struct inode i_vnode; } ;



__attribute__((used)) static inline struct inode *FUNC_0(struct xfs_inode *VAR_0)
{
 return &VAR_0->i_vnode;
}
