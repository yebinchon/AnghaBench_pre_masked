
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int dummy; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct seq_file {int dummy; } ;
struct nilfs_root {scalar_t__ cno; } ;
struct dentry {struct super_block* d_sb; } ;
struct TYPE_2__ {struct nilfs_root* i_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (struct the_nilfs*,int ) ;
 int FUNC_3 (struct seq_file*,char*,unsigned long long) ;
 int FUNC_4 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_7, struct dentry *VAR_8)
{
 struct super_block *VAR_9 = VAR_8->d_sb;
 struct the_nilfs *VAR_10 = VAR_9->s_fs_info;
 struct nilfs_root *VAR_11 = FUNC_0(FUNC_1(VAR_8))->i_root;

 if (!FUNC_2(VAR_10, VAR_0))
  FUNC_4(VAR_7, ",nobarrier");
 if (VAR_11->cno != VAR_4)
  FUNC_3(VAR_7, ",cp=%llu", (unsigned long long)VAR_11->cno);
 if (FUNC_2(VAR_10, VAR_3))
  FUNC_4(VAR_7, ",errors=panic");
 if (FUNC_2(VAR_10, VAR_2))
  FUNC_4(VAR_7, ",errors=continue");
 if (FUNC_2(VAR_10, VAR_6))
  FUNC_4(VAR_7, ",order=strict");
 if (FUNC_2(VAR_10, VAR_5))
  FUNC_4(VAR_7, ",norecovery");
 if (FUNC_2(VAR_10, VAR_1))
  FUNC_4(VAR_7, ",discard");

 return 0;
}
