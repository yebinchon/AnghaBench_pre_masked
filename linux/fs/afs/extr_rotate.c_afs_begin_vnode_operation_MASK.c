
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key {int dummy; } ;
struct afs_vnode {scalar_t__ lock_state; int io_lock; } ;
struct TYPE_2__ {int error; } ;
struct afs_fs_cursor {int flags; int error; TYPE_1__ ac; struct key* key; struct afs_vnode* vnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct afs_fs_cursor*,int ,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

bool FUNC_3(struct afs_fs_cursor *VAR_7, struct afs_vnode *VAR_8,
          struct key *VAR_9, bool VAR_10)
{
 FUNC_0(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->vnode = VAR_8;
 VAR_7->key = VAR_9;
 VAR_7->ac.error = VAR_6;
 VAR_7->error = -VAR_4;

 if (VAR_10) {
  VAR_7->flags |= VAR_1;
  if (FUNC_2(&VAR_8->io_lock) < 0) {
   VAR_7->error = -VAR_5;
   VAR_7->flags |= VAR_2;
   return 0;
  }
 } else {
  FUNC_1(&VAR_8->io_lock);
 }

 if (VAR_8->lock_state != VAR_3)
  VAR_7->flags |= VAR_0;
 return 1;
}
