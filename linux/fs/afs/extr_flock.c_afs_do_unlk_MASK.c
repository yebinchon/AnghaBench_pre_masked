
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_lock {int fl_type; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int vnode; int vid; } ;
struct afs_vnode {int lock_state; TYPE_1__ fid; } ;


 struct afs_vnode* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (char*,int,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*,struct file_lock*) ;
 int FUNC_5 (struct afs_vnode*,struct file_lock*,int ) ;
 int FUNC_6 (struct file*,int ) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_1, struct file_lock *VAR_2)
{
 struct afs_vnode *VAR_3 = FUNC_0(FUNC_3(VAR_1));
 int VAR_4;

 FUNC_1("{%llx:%llu},%u", VAR_3->fid.vid, VAR_3->fid.vnode, VAR_2->fl_type);

 FUNC_5(VAR_3, VAR_2, VAR_0);


 FUNC_6(VAR_1, 0);

 VAR_4 = FUNC_4(VAR_1, VAR_2);
 FUNC_2(" = %d [%u]", VAR_4, VAR_3->lock_state);
 return VAR_4;
}
