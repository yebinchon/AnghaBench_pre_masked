
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; scalar_t__ s_bdev; } ;
struct seq_file {int dummy; } ;
struct fuse_conn {int max_read; scalar_t__ allow_other; scalar_t__ default_permissions; int group_id; int user_ns; int user_id; scalar_t__ no_mount_options; } ;
struct dentry {struct super_block* d_sb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 struct fuse_conn* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct seq_file*,char*,int ) ;
 int FUNC_4 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_1, struct dentry *VAR_2)
{
 struct super_block *VAR_3 = VAR_2->d_sb;
 struct fuse_conn *VAR_4 = FUNC_2(VAR_3);

 if (VAR_4->no_mount_options)
  return 0;

 FUNC_3(VAR_1, ",user_id=%u", FUNC_1(VAR_4->user_ns, VAR_4->user_id));
 FUNC_3(VAR_1, ",group_id=%u", FUNC_0(VAR_4->user_ns, VAR_4->group_id));
 if (VAR_4->default_permissions)
  FUNC_4(VAR_1, ",default_permissions");
 if (VAR_4->allow_other)
  FUNC_4(VAR_1, ",allow_other");
 if (VAR_4->max_read != ~0)
  FUNC_3(VAR_1, ",max_read=%u", VAR_4->max_read);
 if (VAR_3->s_bdev && VAR_3->s_blocksize != VAR_0)
  FUNC_3(VAR_1, ",blksize=%lu", VAR_3->s_blocksize);
 return 0;
}
