
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_vnode {int lock; int locked_at; } ;
struct afs_call {scalar_t__ error; int reply_time; struct afs_vnode* lvnode; } ;


 int VAR_0 ;
 int FUNC_0 (struct afs_vnode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct afs_vnode*,int *,int ,int ) ;

void FUNC_4(struct afs_call *VAR_1)
{
 struct afs_vnode *VAR_2 = VAR_1->lvnode;

 if (VAR_1->error == 0) {
  FUNC_1(&VAR_2->lock);
  FUNC_3(VAR_2, ((void*)0), VAR_0, 0);
  VAR_2->locked_at = VAR_1->reply_time;
  FUNC_0(VAR_2);
  FUNC_2(&VAR_2->lock);
 }
}
