
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int vnode; int vid; } ;
struct afs_vnode {int flags; TYPE_1__ fid; } ;


 struct afs_vnode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (char*,struct dentry*,struct dentry*,int ,int ) ;
 int FUNC_5 (char*,...) ;
 struct inode* FUNC_6 (int ,int) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (int ,int *) ;

struct inode *FUNC_9(struct dentry *VAR_2, struct inode *VAR_3)
{
 struct afs_vnode *VAR_4 = FUNC_0(VAR_3);
 struct inode *VAR_5;
 int VAR_6 = -VAR_1;

 FUNC_4("%p{%pd}, {%llx:%llu}",
        VAR_2, VAR_2, VAR_4->fid.vid, VAR_4->fid.vnode);

 if (!FUNC_8(VAR_0, &VAR_4->flags))
  goto out;

 VAR_6 = FUNC_7(VAR_2);
 if (VAR_6 < 0)
  goto out;

 VAR_5 = FUNC_6(VAR_3->i_sb, 0);
 if (FUNC_2(VAR_5)) {
  VAR_6 = FUNC_3(VAR_5);
  goto out;
 }

 FUNC_5("= %p", VAR_5);
 return VAR_5;

out:
 FUNC_5("= %d", VAR_6);
 return VAR_6 == -VAR_1 ? ((void*)0) : FUNC_1(VAR_6);
}
