
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int link; } ;
struct TYPE_4__ {TYPE_1__ afs; } ;
struct file_lock {TYPE_2__ fl_u; int fl_file; } ;
struct afs_vnode {int lock; int lock_state; int granted_locks; } ;


 struct afs_vnode* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,struct afs_vnode*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct afs_vnode*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct afs_vnode*,struct file_lock*,int ) ;

__attribute__((used)) static void FUNC_10(struct file_lock *VAR_1)
{
 struct afs_vnode *VAR_2 = FUNC_0(FUNC_6(VAR_1->fl_file));

 FUNC_2("");

 FUNC_7(&VAR_2->lock);

 FUNC_9(VAR_2, VAR_1, VAR_0);
 FUNC_4(&VAR_1->fl_u.afs.link);
 if (FUNC_5(&VAR_2->granted_locks))
  FUNC_3(VAR_2);

 FUNC_1("state %u for %p", VAR_2->lock_state, VAR_2);
 FUNC_8(&VAR_2->lock);
}
