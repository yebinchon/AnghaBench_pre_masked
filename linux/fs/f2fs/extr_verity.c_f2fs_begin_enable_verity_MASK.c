
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (struct file*) ;
 int FUNC_6 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_3)
{
 struct inode *VAR_4 = FUNC_5(VAR_3);
 int VAR_5;

 if (FUNC_4(VAR_4))
  return -VAR_0;

 if (FUNC_2(VAR_4) || FUNC_3(VAR_4))
  return -VAR_1;






 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_6(VAR_4, VAR_2);
 return 0;
}
