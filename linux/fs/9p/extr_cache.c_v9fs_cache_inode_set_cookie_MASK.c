
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_inode {int fscache_lock; int fscache; } ;
struct inode {int dummy; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct v9fs_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;

void FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 struct v9fs_inode *VAR_4 = FUNC_0(VAR_2);

 if (!VAR_4->fscache)
  return;

 FUNC_1(&VAR_4->fscache_lock);

 if ((VAR_3->f_flags & VAR_0) != VAR_1)
  FUNC_3(VAR_2);
 else
  FUNC_4(VAR_2);

 FUNC_2(&VAR_4->fscache_lock);
}
