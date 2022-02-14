
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct fuse_inode {int state; } ;
struct fuse_file {int nodeid; int fh; struct fuse_conn* fc; } ;
struct fuse_fallocate_in {scalar_t__ offset; scalar_t__ length; int mode; int fh; } ;
struct fuse_conn {int no_fallocate; scalar_t__ writeback_cache; } ;
struct file {struct fuse_file* private_data; } ;
typedef scalar_t__ loff_t ;
typedef int inarg ;
struct TYPE_6__ {int in_numargs; TYPE_1__* in_args; int nodeid; int opcode; } ;
struct TYPE_5__ {int size; struct fuse_fallocate_in* value; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_1 (int ,int *) ;
 struct inode* FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct fuse_conn*,TYPE_2__*) ;
 int FUNC_6 (struct inode*,scalar_t__) ;
 int FUNC_7 (struct inode*,scalar_t__,scalar_t__) ;
 struct fuse_inode* FUNC_8 (struct inode*) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,scalar_t__) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (struct inode*,scalar_t__,scalar_t__) ;

__attribute__((used)) static long FUNC_15(struct file *VAR_7, int VAR_8, loff_t VAR_9,
    loff_t VAR_10)
{
 struct fuse_file *VAR_11 = VAR_7->private_data;
 struct inode *VAR_12 = FUNC_2(VAR_7);
 struct fuse_inode *VAR_13 = FUNC_8(VAR_12);
 struct fuse_conn *VAR_14 = VAR_11->fc;
 FUNC_0(VAR_6);
 struct fuse_fallocate_in VAR_15 = {
  .fh = VAR_11->fh,
  .offset = VAR_9,
  .length = VAR_10,
  .mode = VAR_8
 };
 int VAR_16;
 bool VAR_17 = !(VAR_8 & VAR_2) ||
      (VAR_8 & VAR_3);

 if (VAR_8 & ~(VAR_2 | VAR_3))
  return -VAR_1;

 if (VAR_14->no_fallocate)
  return -VAR_1;

 if (VAR_17) {
  FUNC_10(VAR_12);
  if (VAR_8 & VAR_3) {
   loff_t VAR_18 = VAR_9 + VAR_10 - 1;

   VAR_16 = FUNC_7(VAR_12, VAR_9, VAR_18);
   if (VAR_16)
    goto out;
  }
 }

 if (!(VAR_8 & VAR_2) &&
     VAR_9 + VAR_10 > FUNC_9(VAR_12)) {
  VAR_16 = FUNC_11(VAR_12, VAR_9 + VAR_10);
  if (VAR_16)
   goto out;
 }

 if (!(VAR_8 & VAR_2))
  FUNC_13(VAR_5, &VAR_13->state);

 VAR_6.opcode = VAR_4;
 VAR_6.nodeid = VAR_11->nodeid;
 VAR_6.in_numargs = 1;
 VAR_6.in_args[0].size = sizeof(VAR_15);
 VAR_6.in_args[0].value = &VAR_15;
 VAR_16 = FUNC_5(VAR_14, &VAR_6);
 if (VAR_16 == -VAR_0) {
  VAR_14->no_fallocate = 1;
  VAR_16 = -VAR_1;
 }
 if (VAR_16)
  goto out;


 if (!(VAR_8 & VAR_2)) {
  bool VAR_19 = FUNC_6(VAR_12, VAR_9 + VAR_10);

  if (VAR_19 && VAR_14->writeback_cache)
   FUNC_3(VAR_7);
 }

 if (VAR_8 & VAR_3)
  FUNC_14(VAR_12, VAR_9, VAR_9 + VAR_10 - 1);

 FUNC_4(VAR_12);

out:
 if (!(VAR_8 & VAR_2))
  FUNC_1(VAR_5, &VAR_13->state);

 if (VAR_17)
  FUNC_12(VAR_12);

 return VAR_16;
}
