
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_bufhead {int mem_limit; int work; int priority; int mem_used; int free; int sentinel; int * tail; int * head; int lock; } ;
struct tty_port {struct tty_bufhead buf; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(struct tty_port *VAR_2)
{
 struct tty_bufhead *VAR_3 = &VAR_2->buf;

 FUNC_3(&VAR_3->lock);
 FUNC_4(&VAR_3->sentinel, 0);
 VAR_3->head = &VAR_3->sentinel;
 VAR_3->tail = &VAR_3->sentinel;
 FUNC_2(&VAR_3->free);
 FUNC_1(&VAR_3->mem_used, 0);
 FUNC_1(&VAR_3->priority, 0);
 FUNC_0(&VAR_3->work, VAR_1);
 VAR_3->mem_limit = VAR_0;
}
