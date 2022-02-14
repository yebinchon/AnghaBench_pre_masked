
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_file_private {int dummy; } ;
struct file {struct tty_file_private* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tty_file_private* FUNC_0 (int,int ) ;

int FUNC_1(struct file *VAR_2)
{
 struct tty_file_private *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_2->private_data = VAR_3;

 return 0;
}
