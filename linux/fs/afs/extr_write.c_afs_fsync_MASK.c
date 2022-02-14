
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int vnode; int vid; } ;
struct afs_vnode {TYPE_1__ fid; } ;
typedef int loff_t ;


 struct afs_vnode* FUNC_0 (struct inode*) ;
 int FUNC_1 (char*,int ,int ,struct file*,int) ;
 struct inode* FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*,int ,int ) ;

int FUNC_4(struct file *VAR_0, loff_t VAR_1, loff_t VAR_2, int VAR_3)
{
 struct inode *VAR_4 = FUNC_2(VAR_0);
 struct afs_vnode *VAR_5 = FUNC_0(VAR_4);

 FUNC_1("{%llx:%llu},{n=%pD},%d",
        VAR_5->fid.vid, VAR_5->fid.vnode, VAR_0,
        VAR_3);

 return FUNC_3(VAR_0, VAR_1, VAR_2);
}
