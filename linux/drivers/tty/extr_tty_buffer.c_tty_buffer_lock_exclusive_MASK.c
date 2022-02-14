
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_bufhead {int lock; int priority; } ;
struct tty_port {struct tty_bufhead buf; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct tty_port *VAR_0)
{
 struct tty_bufhead *VAR_1 = &VAR_0->buf;

 FUNC_0(&VAR_1->priority);
 FUNC_1(&VAR_1->lock);
}
