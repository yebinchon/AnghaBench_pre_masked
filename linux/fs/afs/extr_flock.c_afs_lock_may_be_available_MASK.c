
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vnode; int vid; } ;
struct afs_vnode {scalar_t__ lock_state; int lock; TYPE_1__ fid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct afs_vnode*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct afs_vnode*,int *,int ,int ) ;

void FUNC_5(struct afs_vnode *VAR_2)
{
 FUNC_0("{%llx:%llu}", VAR_2->fid.vid, VAR_2->fid.vnode);

 FUNC_2(&VAR_2->lock);
 if (VAR_2->lock_state == VAR_0)
  FUNC_1(VAR_2, 0);
 FUNC_4(VAR_2, ((void*)0), VAR_1, 0);
 FUNC_3(&VAR_2->lock);
}
