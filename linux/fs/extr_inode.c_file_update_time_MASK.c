
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int dummy; } ;
struct inode {int i_ctime; int i_mtime; } ;
struct file {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct file*) ;
 scalar_t__ FUNC_3 (struct file*) ;
 struct timespec64 FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (struct file*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int FUNC_7 (int *,struct timespec64*) ;
 int FUNC_8 (struct inode*,struct timespec64*,int) ;

int FUNC_9(struct file *VAR_3)
{
 struct inode *VAR_4 = FUNC_5(VAR_3);
 struct timespec64 VAR_5;
 int VAR_6 = 0;
 int VAR_7;


 if (FUNC_1(VAR_4))
  return 0;

 VAR_5 = FUNC_4(VAR_4);
 if (!FUNC_7(&VAR_4->i_mtime, &VAR_5))
  VAR_6 = VAR_1;

 if (!FUNC_7(&VAR_4->i_ctime, &VAR_5))
  VAR_6 |= VAR_0;

 if (FUNC_0(VAR_4) && FUNC_6(VAR_4))
  VAR_6 |= VAR_2;

 if (!VAR_6)
  return 0;


 if (FUNC_3(VAR_3))
  return 0;

 VAR_7 = FUNC_8(VAR_4, &VAR_5, VAR_6);
 FUNC_2(VAR_3);

 return VAR_7;
}
