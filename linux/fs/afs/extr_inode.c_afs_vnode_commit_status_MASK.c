
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct afs_vnode {int cb_lock; int vfs_inode; int flags; } ;
struct TYPE_3__ {scalar_t__ abort_code; } ;
struct afs_status_cb {scalar_t__ have_status; scalar_t__ have_cb; TYPE_1__ status; scalar_t__ have_error; } ;
struct TYPE_4__ {scalar_t__ error; } ;
struct afs_fs_cursor {int key; TYPE_2__ ac; } ;
typedef int afs_dataversion_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct afs_vnode*,int ) ;
 int FUNC_1 (struct afs_fs_cursor*,struct afs_vnode*,struct afs_status_cb*,unsigned int) ;
 int FUNC_2 (struct afs_fs_cursor*,struct afs_vnode*,struct afs_status_cb*,int const*) ;
 int FUNC_3 (struct afs_vnode*,int ,unsigned int,struct afs_status_cb*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct afs_fs_cursor *VAR_3,
        struct afs_vnode *VAR_4,
        unsigned int VAR_5,
        const afs_dataversion_t *VAR_6,
        struct afs_status_cb *VAR_7)
{
 if (VAR_3->ac.error != 0)
  return;

 FUNC_6(&VAR_4->cb_lock);

 if (VAR_7->have_error) {
  if (VAR_7->status.abort_code == VAR_1) {
   FUNC_5(VAR_0, &VAR_4->flags);
   FUNC_4(&VAR_4->vfs_inode);
   FUNC_0(VAR_4, VAR_2);
  }
 } else {
  if (VAR_7->have_status)
   FUNC_2(VAR_3, VAR_4, VAR_7, VAR_6);
  if (VAR_7->have_cb)
   FUNC_1(VAR_3, VAR_4, VAR_7, VAR_5);
 }

 FUNC_7(&VAR_4->cb_lock);

 if (VAR_3->ac.error == 0 && VAR_7->have_status)
  FUNC_3(VAR_4, VAR_3->key, VAR_5, VAR_7);
}
