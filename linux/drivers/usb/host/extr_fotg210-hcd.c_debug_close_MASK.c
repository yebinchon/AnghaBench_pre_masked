
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct debug_buffer* private_data; } ;
struct debug_buffer {int output_buf; } ;


 int FUNC_0 (struct debug_buffer*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct debug_buffer *VAR_2 = VAR_1->private_data;

 if (VAR_2) {
  FUNC_1(VAR_2->output_buf);
  FUNC_0(VAR_2);
 }

 return 0;
}
