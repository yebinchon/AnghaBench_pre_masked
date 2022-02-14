
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ seeks; } ;
struct super_block {int s_iflags; int s_flags; int s_blocksize; int s_blocksize_bits; int s_time_gran; int s_root; TYPE_1__ s_shrink; int s_stack_depth; int * s_op; int s_magic; int s_fs_info; } ;
struct pid_namespace {int dummy; } ;
struct inode {int dummy; } ;
struct fs_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (struct inode*) ;
 struct pid_namespace* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct super_block*,struct fs_context*,struct pid_namespace*,int ) ;
 struct inode* FUNC_6 (struct super_block*,int *) ;
 int VAR_9 ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct super_block*) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_9(struct super_block *VAR_11, struct fs_context *VAR_12)
{
 struct pid_namespace *VAR_13 = FUNC_2(VAR_11->s_fs_info);
 struct inode *VAR_14;
 int VAR_15;

 FUNC_5(VAR_11, VAR_12, VAR_13, FUNC_0());


 VAR_11->s_iflags |= VAR_5 | VAR_4 | VAR_3;
 VAR_11->s_flags |= VAR_6 | VAR_8 | VAR_7;
 VAR_11->s_blocksize = 1024;
 VAR_11->s_blocksize_bits = 10;
 VAR_11->s_magic = VAR_2;
 VAR_11->s_op = &VAR_10;
 VAR_11->s_time_gran = 1;






 VAR_11->s_stack_depth = VAR_1;


 VAR_11->s_shrink.seeks = 0;

 FUNC_3(&VAR_9);
 VAR_14 = FUNC_6(VAR_11, &VAR_9);
 if (!VAR_14) {
  FUNC_4("proc_fill_super: get root inode failed\n");
  return -VAR_0;
 }

 VAR_11->s_root = FUNC_1(VAR_14);
 if (!VAR_11->s_root) {
  FUNC_4("proc_fill_super: allocate dentry failed\n");
  return -VAR_0;
 }

 VAR_15 = FUNC_7(VAR_11);
 if (VAR_15) {
  return VAR_15;
 }
 return FUNC_8(VAR_11);
}
