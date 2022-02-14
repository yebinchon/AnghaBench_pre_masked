
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {struct ovl_fs* s_fs_info; } ;
struct ovl_fs {int numlowerfs; TYPE_2__* lower_fs; TYPE_1__* upper_mnt; } ;
struct TYPE_4__ {struct super_block* sb; } ;
struct TYPE_3__ {struct super_block* mnt_sb; } ;



struct super_block *FUNC_0(struct super_block *VAR_0)
{
 struct ovl_fs *VAR_1 = VAR_0->s_fs_info;

 if (!VAR_1->numlowerfs)
  return VAR_1->upper_mnt->mnt_sb;
 else if (VAR_1->numlowerfs == 1 && !VAR_1->upper_mnt)
  return VAR_1->lower_fs[0].sb;
 else
  return ((void*)0);
}
