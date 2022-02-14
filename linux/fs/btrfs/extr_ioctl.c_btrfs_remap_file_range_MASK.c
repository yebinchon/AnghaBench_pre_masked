
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct file*,struct file*,int,int,int) ;
 int FUNC_1 (struct inode*,int,int,struct inode*,int) ;
 int FUNC_2 (struct file*,int,struct file*,int,int*,unsigned int) ;
 struct inode* FUNC_3 (struct file*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,struct inode*) ;
 int FUNC_7 (struct inode*,struct inode*) ;

loff_t FUNC_8(struct file *VAR_3, loff_t VAR_4,
  struct file *VAR_5, loff_t VAR_6, loff_t VAR_7,
  unsigned int VAR_8)
{
 struct inode *VAR_9 = FUNC_3(VAR_3);
 struct inode *VAR_10 = FUNC_3(VAR_5);
 bool VAR_11 = VAR_10 == VAR_9;
 int VAR_12;

 if (VAR_8 & ~(VAR_2 | VAR_1))
  return -VAR_0;

 if (VAR_11)
  FUNC_4(VAR_9);
 else
  FUNC_6(VAR_9, VAR_10);

 VAR_12 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6,
       &VAR_7, VAR_8);
 if (VAR_12 < 0 || VAR_7 == 0)
  goto out_unlock;

 if (VAR_8 & VAR_2)
  VAR_12 = FUNC_1(VAR_9, VAR_4, VAR_7, VAR_10, VAR_6);
 else
  VAR_12 = FUNC_0(VAR_5, VAR_3, VAR_4, VAR_7, VAR_6);

out_unlock:
 if (VAR_11)
  FUNC_5(VAR_9);
 else
  FUNC_7(VAR_9, VAR_10);

 return VAR_12 < 0 ? VAR_12 : VAR_7;
}
