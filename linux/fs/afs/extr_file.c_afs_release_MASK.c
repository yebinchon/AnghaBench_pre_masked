
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_mode; struct afs_file* private_data; } ;
struct TYPE_2__ {int vnode; int vid; } ;
struct afs_vnode {TYPE_1__ fid; } ;
struct afs_file {int key; scalar_t__ wb; } ;


 struct afs_vnode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct afs_vnode*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct afs_file*) ;
 int FUNC_7 (struct file*,int ) ;

int FUNC_8(struct inode *VAR_1, struct file *VAR_2)
{
 struct afs_vnode *VAR_3 = FUNC_0(VAR_1);
 struct afs_file *VAR_4 = VAR_2->private_data;
 int VAR_5 = 0;

 FUNC_1("{%llx:%llu},", VAR_3->fid.vid, VAR_3->fid.vnode);

 if ((VAR_2->f_mode & VAR_0))
  VAR_5 = FUNC_7(VAR_2, 0);

 VAR_2->private_data = ((void*)0);
 if (VAR_4->wb)
  FUNC_4(VAR_4->wb);
 FUNC_5(VAR_4->key);
 FUNC_6(VAR_4);
 FUNC_3(VAR_3);
 FUNC_2(" = %d", VAR_5);
 return VAR_5;
}
