
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_socket {int socket_released; int ops_mutex; TYPE_1__* resource_ops; int socket_list; scalar_t__ thread; int ops; int dev; } ;
struct TYPE_2__ {int (* exit ) (struct pcmcia_socket*) ;} ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (struct pcmcia_socket*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct pcmcia_socket *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_0(&VAR_1->dev, "pcmcia_unregister_socket(0x%p)\n", VAR_1->ops);

 if (VAR_1->thread)
  FUNC_2(VAR_1->thread);


 FUNC_1(&VAR_0);
 FUNC_3(&VAR_1->socket_list);
 FUNC_7(&VAR_0);


 if (VAR_1->resource_ops->exit) {
  FUNC_4(&VAR_1->ops_mutex);
  VAR_1->resource_ops->exit(VAR_1);
  FUNC_5(&VAR_1->ops_mutex);
 }
 FUNC_8(&VAR_1->socket_released);
}
