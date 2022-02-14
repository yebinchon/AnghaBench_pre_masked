
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_bufhead {int work; int lock; int priority; TYPE_1__* head; } ;
struct tty_port {struct tty_bufhead buf; } ;
struct TYPE_2__ {scalar_t__ commit; scalar_t__ read; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;

void FUNC_3(struct tty_port *VAR_1)
{
 struct tty_bufhead *VAR_2 = &VAR_1->buf;
 int VAR_3;

 VAR_3 = VAR_2->head->commit != VAR_2->head->read;

 FUNC_0(&VAR_2->priority);
 FUNC_1(&VAR_2->lock);
 if (VAR_3)
  FUNC_2(VAR_0, &VAR_2->work);
}
