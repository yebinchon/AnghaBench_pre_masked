
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_socket {int state; int ops_mutex; int resume_status; int socket; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_socket ) (struct pcmcia_socket*,int *) ;int (* init ) (struct pcmcia_socket*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (struct pcmcia_socket*,int ) ;
 int FUNC_3 (struct pcmcia_socket*) ;
 int FUNC_4 (struct pcmcia_socket*,int *) ;

__attribute__((used)) static int FUNC_5(struct pcmcia_socket *VAR_4)
{
 FUNC_0(&VAR_4->ops_mutex);
 VAR_4->socket = VAR_2;
 VAR_4->ops->init(VAR_4);
 VAR_4->ops->set_socket(VAR_4, &VAR_4->socket);
 if (VAR_4->state & VAR_1)
  VAR_4->resume_status = FUNC_2(VAR_4, VAR_3);
 VAR_4->state |= VAR_0;
 FUNC_1(&VAR_4->ops_mutex);
 return 0;
}
