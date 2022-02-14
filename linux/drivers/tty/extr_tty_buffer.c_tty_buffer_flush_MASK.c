
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct tty_port* port; } ;
struct tty_bufhead {int lock; int priority; struct tty_buffer* head; } ;
struct tty_port {struct tty_bufhead buf; } ;
struct tty_ldisc {TYPE_1__* ops; } ;
struct tty_buffer {int commit; int read; int next; } ;
struct TYPE_2__ {int (* flush_buffer ) (struct tty_struct*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct tty_buffer* FUNC_4 (int *) ;
 int FUNC_5 (struct tty_struct*) ;
 int FUNC_6 (struct tty_port*,struct tty_buffer*) ;

void FUNC_7(struct tty_struct *VAR_0, struct tty_ldisc *VAR_1)
{
 struct tty_port *VAR_2 = VAR_0->port;
 struct tty_bufhead *VAR_3 = &VAR_2->buf;
 struct tty_buffer *VAR_4;

 FUNC_1(&VAR_3->priority);

 FUNC_2(&VAR_3->lock);



 while ((VAR_4 = FUNC_4(&VAR_3->head->next)) != ((void*)0)) {
  FUNC_6(VAR_2, VAR_3->head);
  VAR_3->head = VAR_4;
 }
 VAR_3->head->read = VAR_3->head->commit;

 if (VAR_1 && VAR_1->ops->flush_buffer)
  VAR_1->ops->flush_buffer(VAR_0);

 FUNC_0(&VAR_3->priority);
 FUNC_3(&VAR_3->lock);
}
