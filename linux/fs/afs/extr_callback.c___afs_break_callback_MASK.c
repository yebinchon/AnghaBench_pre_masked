
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_vnode {scalar_t__ lock_state; int cb_break; int fid; int flags; } ;
typedef enum afs_cb_break_reason { ____Placeholder_afs_cb_break_reason } afs_cb_break_reason ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct afs_vnode*) ;
 int FUNC_2 (struct afs_vnode*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int ,int,int) ;

void FUNC_6(struct afs_vnode *VAR_3, enum afs_cb_break_reason VAR_4)
{
 FUNC_0("");

 FUNC_3(VAR_2, &VAR_3->flags);
 if (FUNC_4(VAR_0, &VAR_3->flags)) {
  VAR_3->cb_break++;
  FUNC_1(VAR_3);

  if (VAR_3->lock_state == VAR_1)
   FUNC_2(VAR_3);

  FUNC_5(&VAR_3->fid, VAR_3->cb_break, VAR_4, 1);
 } else {
  FUNC_5(&VAR_3->fid, VAR_3->cb_break, VAR_4, 0);
 }
}
