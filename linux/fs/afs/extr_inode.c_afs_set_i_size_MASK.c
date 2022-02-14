
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int i_blocks; } ;
struct afs_vnode {TYPE_1__ vfs_inode; } ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1(struct afs_vnode *VAR_0, u64 VAR_1)
{
 FUNC_0(&VAR_0->vfs_inode, VAR_1);
 VAR_0->vfs_inode.i_blocks = ((VAR_1 + 1023) >> 10) << 1;
}
