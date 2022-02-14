
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct afs_vnode {int flags; int cb_interest; TYPE_1__ cb_lock; int cb_expires_at; } ;
struct afs_callback {int expires_at; } ;
struct afs_status_cb {struct afs_callback callback; } ;
struct afs_fs_cursor {struct afs_cb_interest* cbi; } ;
struct afs_cb_interest {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,struct afs_vnode*,struct afs_cb_interest*) ;
 int FUNC_1 (struct afs_cb_interest*) ;
 int FUNC_2 (int ,struct afs_cb_interest*) ;
 int FUNC_3 (struct afs_vnode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 struct afs_cb_interest* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct afs_fs_cursor *VAR_1,
          struct afs_vnode *VAR_2,
          struct afs_status_cb *VAR_3,
          unsigned int VAR_4)
{
 struct afs_cb_interest *VAR_5;
 struct afs_callback *VAR_6 = &VAR_3->callback;

 if (!FUNC_0(VAR_4, VAR_2, VAR_1->cbi)) {
  VAR_2->cb_expires_at = VAR_6->expires_at;
  VAR_5 = FUNC_6(VAR_2->cb_interest,
      FUNC_4(&VAR_2->cb_lock.lock));
  if (VAR_5 != VAR_1->cbi) {
   FUNC_5(VAR_2->cb_interest, FUNC_1(VAR_1->cbi));
   FUNC_2(FUNC_3(VAR_2), VAR_5);
  }
  FUNC_7(VAR_0, &VAR_2->flags);
 }
}
