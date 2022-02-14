
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct key {int dummy; } ;
struct inode {int dummy; } ;
struct file {int f_mode; int f_flags; struct afs_file* private_data; } ;
struct TYPE_3__ {int vnode; int vid; } ;
struct afs_vnode {int flags; TYPE_2__* volume; TYPE_1__ fid; } ;
struct afs_file {struct key* key; } ;
struct TYPE_4__ {int cell; } ;


 struct afs_vnode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct key*) ;
 int VAR_4 ;
 int FUNC_2 (struct key*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct afs_vnode*,struct afs_file*) ;
 struct key* FUNC_6 (int ) ;
 int FUNC_7 (struct afs_vnode*,struct key*) ;
 int FUNC_8 (struct key*) ;
 int FUNC_9 (struct afs_file*) ;
 struct afs_file* FUNC_10 (int,int ) ;
 int FUNC_11 (int ,int *) ;

int FUNC_12(struct inode *VAR_5, struct file *VAR_6)
{
 struct afs_vnode *VAR_7 = FUNC_0(VAR_5);
 struct afs_file *VAR_8;
 struct key *VAR_9;
 int VAR_10;

 FUNC_3("{%llx:%llu},", VAR_7->fid.vid, VAR_7->fid.vnode);

 VAR_9 = FUNC_6(VAR_7->volume->cell);
 if (FUNC_1(VAR_9)) {
  VAR_10 = FUNC_2(VAR_9);
  goto error;
 }

 VAR_8 = FUNC_10(sizeof(*VAR_8), VAR_3);
 if (!VAR_8) {
  VAR_10 = -VAR_1;
  goto error_key;
 }
 VAR_8->key = VAR_9;

 VAR_10 = FUNC_7(VAR_7, VAR_9);
 if (VAR_10 < 0)
  goto error_af;

 if (VAR_6->f_mode & VAR_2) {
  VAR_10 = FUNC_5(VAR_7, VAR_8);
  if (VAR_10 < 0)
   goto error_af;
 }

 if (VAR_6->f_flags & VAR_4)
  FUNC_11(VAR_0, &VAR_7->flags);

 VAR_6->private_data = VAR_8;
 FUNC_4(" = 0");
 return 0;

error_af:
 FUNC_9(VAR_8);
error_key:
 FUNC_8(VAR_9);
error:
 FUNC_4(" = %d", VAR_10);
 return VAR_10;
}
