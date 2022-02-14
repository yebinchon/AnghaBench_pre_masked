
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_readcount; int i_writecount; } ;
struct file {int f_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long const VAR_4 ;
 long const VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct file*) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_6, const long VAR_7, int VAR_8)
{
 struct inode *VAR_9 = FUNC_2(VAR_6);
 int VAR_10 = 0, VAR_11 = 0;

 if (VAR_8 & VAR_1)
  return 0;

 if (VAR_7 == VAR_4)
  return FUNC_1(VAR_9) ? -VAR_0 : 0;
 else if (VAR_7 != VAR_5)
  return 0;







 if (VAR_6->f_mode & VAR_3)
  VAR_10 = 1;
 else if (VAR_6->f_mode & VAR_2)
  VAR_11 = 1;

 if (FUNC_0(&VAR_9->i_writecount) != VAR_10 ||
     FUNC_0(&VAR_9->i_readcount) != VAR_11)
  return -VAR_0;

 return 0;
}
