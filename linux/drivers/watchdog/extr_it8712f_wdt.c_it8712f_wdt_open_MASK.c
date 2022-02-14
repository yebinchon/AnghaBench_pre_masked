
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct inode*,struct file*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 int VAR_4;

 if (FUNC_2(0, &VAR_1))
  return -VAR_0;

 VAR_4 = FUNC_0();
 if (VAR_4)
  return VAR_4;
 return FUNC_1(VAR_2, VAR_3);
}
