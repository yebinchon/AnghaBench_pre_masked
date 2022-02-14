
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct seq_file {int dummy; } ;
struct qnx6_sb_info {int s_mount_opt; } ;
struct dentry {struct super_block* d_sb; } ;


 int VAR_0 ;
 struct qnx6_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, struct dentry *VAR_2)
{
 struct super_block *VAR_3 = VAR_2->d_sb;
 struct qnx6_sb_info *VAR_4 = FUNC_0(VAR_3);

 if (VAR_4->s_mount_opt & VAR_0)
  FUNC_1(VAR_1, ",mmi_fs");
 return 0;
}
