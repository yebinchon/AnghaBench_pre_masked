
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct mm_struct* private_data; } ;


 int FUNC_0 (struct mm_struct*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct mm_struct *VAR_2 = VAR_1->private_data;
 if (VAR_2)
  FUNC_0(VAR_2);
 return 0;
}
