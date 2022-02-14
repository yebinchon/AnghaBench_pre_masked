
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int dentry; int mnt; } ;
struct ovl_fs {int upper_mnt; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_2__ {struct ovl_fs* s_fs_info; } ;


 int FUNC_0 (struct dentry*) ;

void FUNC_1(struct dentry *VAR_0, struct path *VAR_1)
{
 struct ovl_fs *VAR_2 = VAR_0->d_sb->s_fs_info;

 VAR_1->mnt = VAR_2->upper_mnt;
 VAR_1->dentry = FUNC_0(VAR_0);
}
