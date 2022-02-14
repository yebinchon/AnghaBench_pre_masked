
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_bufhead {int work; TYPE_1__* tail; } ;
struct tty_port {struct tty_bufhead buf; } ;
struct TYPE_2__ {int used; int commit; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;

void FUNC_2(struct tty_port *VAR_1)
{
 struct tty_bufhead *VAR_2 = &VAR_1->buf;




 FUNC_1(&VAR_2->tail->commit, VAR_2->tail->used);
 FUNC_0(VAR_0, &VAR_2->work);
}
