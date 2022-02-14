
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int link; int debug_id; } ;
struct TYPE_4__ {TYPE_1__ afs; } ;
struct file_lock {TYPE_2__ fl_u; int fl_file; } ;
struct afs_vnode {int lock; } ;


 struct afs_vnode* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct afs_vnode*,struct file_lock*,int ) ;

__attribute__((used)) static void FUNC_8(struct file_lock *VAR_2, struct file_lock *VAR_3)
{
 struct afs_vnode *VAR_4 = FUNC_0(FUNC_4(VAR_3->fl_file));

 FUNC_1("");

 VAR_2->fl_u.afs.debug_id = FUNC_2(&VAR_0);

 FUNC_5(&VAR_4->lock);
 FUNC_7(VAR_4, VAR_2, VAR_1);
 FUNC_3(&VAR_2->fl_u.afs.link, &VAR_3->fl_u.afs.link);
 FUNC_6(&VAR_4->lock);
}
