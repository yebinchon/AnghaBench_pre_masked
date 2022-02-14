
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct tty_file_private {struct tty_struct* tty; } ;
struct file {scalar_t__ private_data; } ;



__attribute__((used)) static inline struct tty_struct *FUNC_0(struct file *VAR_0)
{
 return ((struct tty_file_private *)VAR_0->private_data)->tty;
}
