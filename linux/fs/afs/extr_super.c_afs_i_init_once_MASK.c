
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_vnode {int cb_lock; int lock_work; int granted_locks; int pending_locks; int wb_keys; int lock; int wb_lock; int validate_lock; int io_lock; int vfs_inode; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct afs_vnode*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(void *VAR_1)
{
 struct afs_vnode *VAR_2 = VAR_1;

 FUNC_4(VAR_2, 0, sizeof(*VAR_2));
 FUNC_3(&VAR_2->vfs_inode);
 FUNC_5(&VAR_2->io_lock);
 FUNC_2(&VAR_2->validate_lock);
 FUNC_7(&VAR_2->wb_lock);
 FUNC_7(&VAR_2->lock);
 FUNC_1(&VAR_2->wb_keys);
 FUNC_1(&VAR_2->pending_locks);
 FUNC_1(&VAR_2->granted_locks);
 FUNC_0(&VAR_2->lock_work, VAR_0);
 FUNC_6(&VAR_2->cb_lock);
}
