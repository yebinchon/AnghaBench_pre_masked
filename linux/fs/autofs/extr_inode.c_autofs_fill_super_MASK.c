
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; int s_blocksize_bits; int s_time_gran; struct autofs_sb_info* s_fs_info; struct dentry* s_root; int * s_d_op; int * s_op; int s_magic; } ;
struct inode {int * i_op; int * i_fop; } ;
struct file {int dummy; } ;
struct dentry {struct autofs_info* d_fsdata; } ;
struct autofs_sb_info {int pipefd; scalar_t__ version; scalar_t__ min_proto; scalar_t__ max_proto; int * oz_pgrp; int flags; struct file* pipe; int type; scalar_t__ sub_version; int expiring_list; int active_list; int lookup_lock; int * queues; int fs_lock; int pipe_mutex; int wq_mutex; struct super_block* sb; scalar_t__ exp_timeout; int magic; } ;
struct autofs_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct dentry*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct autofs_info*) ;
 struct inode* FUNC_3 (struct super_block*,int) ;
 struct autofs_info* FUNC_4 (struct autofs_sb_info*) ;
 int FUNC_5 (struct file*) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_15 ;
 struct dentry* FUNC_7 (struct inode*) ;
 int FUNC_8 (struct dentry*) ;
 struct file* FUNC_9 (int) ;
 int * FUNC_10 (int) ;
 int FUNC_11 (struct file*) ;
 int * FUNC_12 (int ,int ) ;
 int FUNC_13 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_14 (int,int ) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (void*,struct inode*,int*,int*,struct autofs_sb_info*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (char*,...) ;
 int FUNC_19 (char*,...) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

int FUNC_23(struct super_block *VAR_16, void *VAR_17, int VAR_18)
{
 struct inode *VAR_19;
 struct dentry *VAR_20;
 struct file *VAR_21;
 struct autofs_sb_info *VAR_22;
 struct autofs_info *VAR_23;
 int VAR_24 = 0;
 bool VAR_25 = 0;
 int VAR_26 = -VAR_6;

 VAR_22 = FUNC_14(sizeof(*VAR_22), VAR_8);
 if (!VAR_22)
  return -VAR_7;
 FUNC_18("starting up, sbi = %p\n", VAR_22);

 VAR_16->s_fs_info = VAR_22;
 VAR_22->magic = VAR_4;
 VAR_22->pipefd = -1;
 VAR_22->pipe = ((void*)0);
 VAR_22->exp_timeout = 0;
 VAR_22->oz_pgrp = ((void*)0);
 VAR_22->sb = VAR_16;
 VAR_22->version = 0;
 VAR_22->sub_version = 0;
 VAR_22->flags = VAR_3;
 FUNC_21(&VAR_22->type);
 VAR_22->min_proto = 0;
 VAR_22->max_proto = 0;
 FUNC_15(&VAR_22->wq_mutex);
 FUNC_15(&VAR_22->pipe_mutex);
 FUNC_22(&VAR_22->fs_lock);
 VAR_22->queues = ((void*)0);
 FUNC_22(&VAR_22->lookup_lock);
 FUNC_0(&VAR_22->active_list);
 FUNC_0(&VAR_22->expiring_list);
 VAR_16->s_blocksize = 1024;
 VAR_16->s_blocksize_bits = 10;
 VAR_16->s_magic = VAR_5;
 VAR_16->s_op = &VAR_14;
 VAR_16->s_d_op = &VAR_11;
 VAR_16->s_time_gran = 1;




 VAR_23 = FUNC_4(VAR_22);
 if (!VAR_23) {
  VAR_26 = -VAR_7;
  goto fail_free;
 }
 VAR_19 = FUNC_3(VAR_16, VAR_10 | 0755);
 VAR_20 = FUNC_7(VAR_19);
 if (!VAR_20) {
  VAR_26 = -VAR_7;
  goto fail_ino;
 }
 VAR_21 = ((void*)0);

 VAR_20->d_fsdata = VAR_23;


 if (FUNC_16(VAR_17, VAR_19, &VAR_24, &VAR_25, VAR_22)) {
  FUNC_19("called with bogus options\n");
  goto fail_dput;
 }


 if (VAR_22->max_proto < VAR_1 ||
     VAR_22->min_proto > VAR_0) {
  FUNC_19("kernel does not match daemon version "
         "daemon (%d, %d) kernel (%d, %d)\n",
         VAR_22->min_proto, VAR_22->max_proto,
         VAR_1, VAR_0);
  goto fail_dput;
 }


 if (VAR_22->max_proto > VAR_0)
  VAR_22->version = VAR_0;
 else
  VAR_22->version = VAR_22->max_proto;
 VAR_22->sub_version = VAR_2;

 if (VAR_25) {
  VAR_22->oz_pgrp = FUNC_10(VAR_24);
  if (!VAR_22->oz_pgrp) {
   FUNC_19("could not find process group %d\n",
    VAR_24);
   goto fail_dput;
  }
 } else {
  VAR_22->oz_pgrp = FUNC_12(VAR_15, VAR_9);
 }

 if (FUNC_6(VAR_22->type))
  FUNC_1(VAR_20);

 VAR_19->i_fop = &VAR_13;
 VAR_19->i_op = &VAR_12;

 FUNC_18("pipe fd = %d, pgrp = %u\n",
   VAR_22->pipefd, FUNC_17(VAR_22->oz_pgrp));
 VAR_21 = FUNC_9(VAR_22->pipefd);

 if (!VAR_21) {
  FUNC_19("could not open pipe file descriptor\n");
  goto fail_put_pid;
 }
 VAR_26 = FUNC_5(VAR_21);
 if (VAR_26 < 0)
  goto fail_fput;
 VAR_22->pipe = VAR_21;
 VAR_22->flags &= ~VAR_3;




 VAR_16->s_root = VAR_20;
 return 0;




fail_fput:
 FUNC_19("pipe file descriptor does not contain proper ops\n");
 FUNC_11(VAR_21);
fail_put_pid:
 FUNC_20(VAR_22->oz_pgrp);
fail_dput:
 FUNC_8(VAR_20);
 goto fail_free;
fail_ino:
 FUNC_2(VAR_23);
fail_free:
 FUNC_13(VAR_22);
 VAR_16->s_fs_info = ((void*)0);
 return VAR_26;
}
