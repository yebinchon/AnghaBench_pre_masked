
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kstat {int ino; int mode; } ;
struct inode {int dummy; } ;
struct fuse_inode {int orig_ino; int orig_i_mode; int i_time; int inval_mask; } ;
struct file {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,struct kstat*,struct file*) ;
 int FUNC_3 (struct inode*,struct kstat*) ;
 struct fuse_inode* FUNC_4 (struct inode*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_2, struct file *VAR_3,
    struct kstat *VAR_4, u32 VAR_5,
    unsigned int VAR_6)
{
 struct fuse_inode *VAR_7 = FUNC_4(VAR_2);
 int VAR_8 = 0;
 bool VAR_9;

 if (VAR_6 & VAR_1)
  VAR_9 = 1;
 else if (VAR_6 & VAR_0)
  VAR_9 = 0;
 else if (VAR_5 & FUNC_0(VAR_7->inval_mask))
  VAR_9 = 1;
 else
  VAR_9 = FUNC_6(VAR_7->i_time, FUNC_5());

 if (VAR_9) {
  FUNC_1(VAR_2);
  VAR_8 = FUNC_2(VAR_2, VAR_4, VAR_3);
 } else if (VAR_4) {
  FUNC_3(VAR_2, VAR_4);
  VAR_4->mode = VAR_7->orig_i_mode;
  VAR_4->ino = VAR_7->orig_ino;
 }

 return VAR_8;
}
