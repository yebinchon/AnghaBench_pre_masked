
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ovl_fs {struct dentry* workdir; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_2__ {struct ovl_fs* s_fs_info; } ;



struct dentry *FUNC_0(struct dentry *VAR_0)
{
 struct ovl_fs *VAR_1 = VAR_0->d_sb->s_fs_info;
 return VAR_1->workdir;
}
