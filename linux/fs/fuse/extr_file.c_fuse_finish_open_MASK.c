
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mapping; } ;
struct fuse_inode {int lock; int attr_version; } ;
struct fuse_file {int open_flags; } ;
struct fuse_conn {scalar_t__ writeback_cache; int attr_version; scalar_t__ atomic_o_trunc; } ;
struct file {int f_flags; int f_mode; struct fuse_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct file*) ;
 struct fuse_conn* FUNC_4 (struct inode*) ;
 struct fuse_inode* FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct inode*,struct file*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct inode*,struct file*) ;

void FUNC_12(struct inode *VAR_5, struct file *VAR_6)
{
 struct fuse_file *VAR_7 = VAR_6->private_data;
 struct fuse_conn *VAR_8 = FUNC_4(VAR_5);

 if (!(VAR_7->open_flags & VAR_1))
  FUNC_7(VAR_5->i_mapping);
 if (VAR_7->open_flags & VAR_3)
  FUNC_11(VAR_5, VAR_6);
 else if (VAR_7->open_flags & VAR_2)
  FUNC_8(VAR_5, VAR_6);
 if (VAR_8->atomic_o_trunc && (VAR_6->f_flags & VAR_4)) {
  struct fuse_inode *VAR_9 = FUNC_5(VAR_5);

  FUNC_9(&VAR_9->lock);
  VAR_9->attr_version = FUNC_0(&VAR_8->attr_version);
  FUNC_6(VAR_5, 0);
  FUNC_10(&VAR_9->lock);
  FUNC_2(VAR_5);
  if (VAR_8->writeback_cache)
   FUNC_1(VAR_6);
 }
 if ((VAR_6->f_mode & VAR_0) && VAR_8->writeback_cache)
  FUNC_3(VAR_6);
}
