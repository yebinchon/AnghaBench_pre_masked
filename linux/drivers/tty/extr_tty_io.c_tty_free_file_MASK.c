
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_file_private {int dummy; } ;
struct file {struct tty_file_private* private_data; } ;


 int FUNC_0 (struct tty_file_private*) ;

void FUNC_1(struct file *VAR_0)
{
 struct tty_file_private *VAR_1 = VAR_0->private_data;

 VAR_0->private_data = ((void*)0);
 FUNC_0(VAR_1);
}
