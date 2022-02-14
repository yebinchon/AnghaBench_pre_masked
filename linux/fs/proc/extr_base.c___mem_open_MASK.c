
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct mm_struct* private_data; } ;


 scalar_t__ FUNC_0 (struct mm_struct*) ;
 int FUNC_1 (struct mm_struct*) ;
 struct mm_struct* FUNC_2 (struct inode*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1, unsigned int VAR_2)
{
 struct mm_struct *VAR_3 = FUNC_2(VAR_0, VAR_2);

 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_1->private_data = VAR_3;
 return 0;
}
