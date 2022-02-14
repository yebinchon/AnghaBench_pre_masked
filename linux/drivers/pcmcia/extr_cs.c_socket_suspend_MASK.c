
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_socket {int state; int suspended_state; int ops_mutex; TYPE_1__* ops; int socket; } ;
struct TYPE_2__ {int (* suspend ) (struct pcmcia_socket*) ;int (* set_socket ) (struct pcmcia_socket*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pcmcia_socket*,int *) ;
 int FUNC_3 (struct pcmcia_socket*) ;

__attribute__((used)) static int FUNC_4(struct pcmcia_socket *VAR_4)
{
 if ((VAR_4->state & VAR_2) && !(VAR_4->state & VAR_1))
  return -VAR_0;

 FUNC_0(&VAR_4->ops_mutex);

 if (!(VAR_4->state & VAR_1))
  VAR_4->suspended_state = VAR_4->state;

 VAR_4->socket = VAR_3;
 VAR_4->ops->set_socket(VAR_4, &VAR_4->socket);
 if (VAR_4->ops->suspend)
  VAR_4->ops->suspend(VAR_4);
 VAR_4->state |= VAR_2;
 VAR_4->state &= ~VAR_1;
 FUNC_1(&VAR_4->ops_mutex);
 return 0;
}
