
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fuse_conn {scalar_t__ writeback_cache; scalar_t__ atomic_o_trunc; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct fuse_conn*,int ,struct file*,int) ;
 int FUNC_1 (struct inode*,struct file*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,struct file*) ;
 struct fuse_conn* FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;

int FUNC_9(struct inode *VAR_1, struct file *VAR_2, bool VAR_3)
{
 struct fuse_conn *VAR_4 = FUNC_5(VAR_1);
 int VAR_5;
 bool VAR_6 = (VAR_2->f_flags & VAR_0) &&
     VAR_4->atomic_o_trunc &&
     VAR_4->writeback_cache;

 VAR_5 = FUNC_4(VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 if (VAR_6) {
  FUNC_7(VAR_1);
  FUNC_3(VAR_1);
 }

 VAR_5 = FUNC_0(VAR_4, FUNC_6(VAR_1), VAR_2, VAR_3);

 if (!VAR_5)
  FUNC_1(VAR_1, VAR_2);

 if (VAR_6) {
  FUNC_2(VAR_1);
  FUNC_8(VAR_1);
 }

 return VAR_5;
}
