
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int i_mapping; int i_mode; } ;
struct TYPE_3__ {int vnode; int vid; } ;
struct afs_vnode {TYPE_2__ vfs_inode; int cache; TYPE_1__ fid; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(struct afs_vnode *VAR_0)
{
 FUNC_1("{%llx:%llu}", VAR_0->fid.vid, VAR_0->fid.vnode);
 if (FUNC_0(VAR_0->vfs_inode.i_mode))
  FUNC_4(&VAR_0->vfs_inode);
 else
  FUNC_3(VAR_0->vfs_inode.i_mapping);
}
