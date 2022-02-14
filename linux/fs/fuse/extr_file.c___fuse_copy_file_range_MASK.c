
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {scalar_t__ i_size; scalar_t__ i_sb; } ;
struct fuse_write_out {int size; } ;
struct fuse_inode {int state; } ;
struct fuse_file {int nodeid; int fh; struct fuse_conn* fc; } ;
struct fuse_copy_file_range_in {scalar_t__ off_in; scalar_t__ off_out; size_t len; unsigned int flags; int fh_out; int nodeid_out; int fh_in; } ;
struct fuse_conn {int no_copy_file_range; scalar_t__ writeback_cache; } ;
struct file {struct fuse_file* private_data; } ;
typedef int ssize_t ;
typedef int outarg ;
typedef scalar_t__ loff_t ;
typedef int inarg ;
struct TYPE_8__ {int in_numargs; int out_numargs; TYPE_2__* out_args; TYPE_1__* in_args; int nodeid; int opcode; } ;
struct TYPE_7__ {int size; struct fuse_write_out* value; } ;
struct TYPE_6__ {int size; struct fuse_copy_file_range_in* value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct file*) ;
 struct inode* FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct fuse_conn*,TYPE_3__*) ;
 int FUNC_8 (struct inode*,scalar_t__) ;
 int FUNC_9 (struct inode*,scalar_t__,scalar_t__) ;
 struct fuse_inode* FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static ssize_t FUNC_14(struct file *VAR_6, loff_t VAR_7,
          struct file *VAR_8, loff_t VAR_9,
          size_t VAR_10, unsigned int VAR_11)
{
 struct fuse_file *VAR_12 = VAR_6->private_data;
 struct fuse_file *VAR_13 = VAR_8->private_data;
 struct inode *VAR_14 = FUNC_3(VAR_6);
 struct inode *VAR_15 = FUNC_3(VAR_8);
 struct fuse_inode *VAR_16 = FUNC_10(VAR_15);
 struct fuse_conn *VAR_17 = VAR_12->fc;
 FUNC_0(VAR_5);
 struct fuse_copy_file_range_in VAR_18 = {
  .fh_in = VAR_12->fh,
  .off_in = VAR_7,
  .nodeid_out = VAR_13->nodeid,
  .fh_out = VAR_13->fh,
  .off_out = VAR_9,
  .len = VAR_10,
  .flags = VAR_11
 };
 struct fuse_write_out VAR_19;
 ssize_t VAR_20;


 bool VAR_21 = (!VAR_17->writeback_cache) &&
      ((VAR_9 + VAR_10) > VAR_15->i_size);

 if (VAR_17->no_copy_file_range)
  return -VAR_1;

 if (FUNC_3(VAR_6)->i_sb != FUNC_3(VAR_8)->i_sb)
  return -VAR_2;

 if (VAR_17->writeback_cache) {
  FUNC_11(VAR_14);
  VAR_20 = FUNC_9(VAR_14, VAR_7, VAR_7 + VAR_10);
  FUNC_12(VAR_14);
  if (VAR_20)
   return VAR_20;
 }

 FUNC_11(VAR_15);

 VAR_20 = FUNC_4(VAR_8);
 if (VAR_20)
  goto out;

 if (VAR_17->writeback_cache) {
  VAR_20 = FUNC_9(VAR_15, VAR_9, VAR_9 + VAR_10);
  if (VAR_20)
   goto out;
 }

 if (VAR_21)
  FUNC_13(VAR_4, &VAR_16->state);

 VAR_5.opcode = VAR_3;
 VAR_5.nodeid = VAR_12->nodeid;
 VAR_5.in_numargs = 1;
 VAR_5.in_args[0].size = sizeof(VAR_18);
 VAR_5.in_args[0].value = &VAR_18;
 VAR_5.out_numargs = 1;
 VAR_5.out_args[0].size = sizeof(VAR_19);
 VAR_5.out_args[0].value = &VAR_19;
 VAR_20 = FUNC_7(VAR_17, &VAR_5);
 if (VAR_20 == -VAR_0) {
  VAR_17->no_copy_file_range = 1;
  VAR_20 = -VAR_1;
 }
 if (VAR_20)
  goto out;

 if (VAR_17->writeback_cache) {
  FUNC_8(VAR_15, VAR_9 + VAR_19.size);
  FUNC_5(VAR_8);
 }

 FUNC_6(VAR_15);

 VAR_20 = VAR_19.size;
out:
 if (VAR_21)
  FUNC_1(VAR_4, &VAR_16->state);

 FUNC_12(VAR_15);
 FUNC_2(VAR_6);

 return VAR_20;
}
