
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int index; struct tty_struct* link; TYPE_2__* port; int driver; TYPE_1__* ops; } ;
struct TYPE_4__ {int * itty; } ;
struct TYPE_3__ {int (* shutdown ) (struct tty_struct*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,struct tty_struct*) ;
 int FUNC_5 (struct tty_struct*) ;
 int VAR_0 ;
 int FUNC_6 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_7(struct tty_struct *VAR_1, int VAR_2)
{

 FUNC_0(VAR_1->index != VAR_2);
 FUNC_0(!FUNC_1(&VAR_0));
 if (VAR_1->ops->shutdown)
  VAR_1->ops->shutdown(VAR_1);
 FUNC_6(VAR_1);
 FUNC_4(VAR_1->driver, VAR_1);
 VAR_1->port->itty = ((void*)0);
 if (VAR_1->link)
  VAR_1->link->port->itty = ((void*)0);
 FUNC_3(VAR_1->port);
 if (VAR_1->link)
  FUNC_3(VAR_1->link->port);

 FUNC_5(VAR_1->link);
 FUNC_5(VAR_1);
}
