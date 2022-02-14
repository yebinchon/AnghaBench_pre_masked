
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_4__ {scalar_t__ mode; } ;
struct ramfs_fs_info {TYPE_2__ mount_opts; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_3__ {struct ramfs_fs_info* s_fs_info; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, struct dentry *VAR_2)
{
 struct ramfs_fs_info *VAR_3 = VAR_2->d_sb->s_fs_info;

 if (VAR_3->mount_opts.mode != VAR_0)
  FUNC_0(VAR_1, ",mode=%o", VAR_3->mount_opts.mode);
 return 0;
}
