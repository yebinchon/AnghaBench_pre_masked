
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {scalar_t__ s_export_op; struct ovl_fs* s_fs_info; } ;
struct ovl_fs {int upper_mnt; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int i_nlink; } ;


 TYPE_1__* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct super_block*) ;

__attribute__((used)) static bool FUNC_3(struct super_block *VAR_0, struct dentry *VAR_1,
        struct dentry *VAR_2, struct dentry *VAR_3)
{
 struct ovl_fs *VAR_4 = VAR_0->s_fs_info;


 if (!VAR_2)
  return 0;


 if (VAR_3)
  return 1;


 if (!VAR_4->upper_mnt)
  return 1;


 if ((VAR_1 || !FUNC_2(VAR_0)) &&
     !FUNC_1(VAR_2) && FUNC_0(VAR_2)->i_nlink > 1)
  return 0;


 if (VAR_0->s_export_op && VAR_1)
  return 0;


 return 1;
}
