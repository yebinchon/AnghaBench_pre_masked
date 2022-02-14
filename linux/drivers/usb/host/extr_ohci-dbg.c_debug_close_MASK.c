
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct debug_buffer* private_data; } ;
struct debug_buffer {scalar_t__ page; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct debug_buffer*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct debug_buffer *VAR_2 = VAR_1->private_data;

 if (VAR_2) {
  if (VAR_2->page)
   FUNC_0((unsigned long)VAR_2->page);
  FUNC_1(VAR_2);
 }

 return 0;
}
