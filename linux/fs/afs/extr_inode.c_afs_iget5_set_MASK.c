
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_generation; int i_ino; } ;
struct TYPE_2__ {int unique; int vnode; } ;
struct afs_vnode {int cb_s_break; int cb_v_break; int volume; TYPE_1__ fid; } ;
struct afs_iget_data {TYPE_1__ fid; int cb_s_break; int cb_v_break; int volume; } ;


 struct afs_vnode* FUNC_0 (struct inode*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, void *VAR_1)
{
 struct afs_iget_data *VAR_2 = VAR_1;
 struct afs_vnode *VAR_3 = FUNC_0(VAR_0);

 VAR_3->fid = VAR_2->fid;
 VAR_3->volume = VAR_2->volume;
 VAR_3->cb_v_break = VAR_2->cb_v_break;
 VAR_3->cb_s_break = VAR_2->cb_s_break;




 VAR_0->i_ino = VAR_2->fid.vnode;
 VAR_0->i_generation = VAR_2->fid.unique;
 return 0;
}
