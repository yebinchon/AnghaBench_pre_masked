
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int count; struct tty3270* driver_data; } ;
struct tty3270 {int port; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct tty_struct *VAR_0, struct file * VAR_1)
{
 struct tty3270 *VAR_2 = VAR_0->driver_data;

 if (VAR_0->count > 1)
  return;
 if (VAR_2)
  FUNC_0(&VAR_2->port, ((void*)0));
}
