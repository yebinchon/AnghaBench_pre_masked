
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ io_irq; scalar_t__ Vpp; int flags; } ;
struct pcmcia_socket {scalar_t__ lock_count; int ops_mutex; TYPE_2__* ops; TYPE_1__* io; TYPE_6__ socket; } ;
struct pcmcia_device {scalar_t__ _locked; TYPE_4__* function_config; struct pcmcia_socket* socket; } ;
struct TYPE_9__ {int member_4; int map; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_3__ pccard_io_map ;
struct TYPE_10__ {int state; } ;
typedef TYPE_4__ config_t ;
struct TYPE_8__ {int (* set_io_map ) (struct pcmcia_socket*,TYPE_3__*) ;int (* set_socket ) (struct pcmcia_socket*,TYPE_6__*) ;} ;
struct TYPE_7__ {scalar_t__ Config; int res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pcmcia_socket*,TYPE_6__*) ;
 int FUNC_3 (struct pcmcia_socket*,TYPE_3__*) ;

int FUNC_4(struct pcmcia_device *VAR_4)
{
 pccard_io_map VAR_5 = { 0, 0, 0, 0, 1 };
 struct pcmcia_socket *VAR_6 = VAR_4->socket;
 config_t *VAR_7;
 int VAR_8;

 FUNC_0(&VAR_6->ops_mutex);
 VAR_7 = VAR_4->function_config;
 if (VAR_4->_locked) {
  VAR_4->_locked = 0;
  if (--(VAR_6->lock_count) == 0) {
   VAR_6->socket.flags = VAR_3;
   VAR_6->socket.Vpp = 0;
   VAR_6->socket.io_irq = 0;
   VAR_6->ops->set_socket(VAR_6, &VAR_6->socket);
  }
 }
 if (VAR_7->state & VAR_1) {
  VAR_7->state &= ~VAR_1;
  if (VAR_7->state & VAR_0)
   for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
    if (!VAR_6->io[VAR_8].res)
     continue;
    VAR_6->io[VAR_8].Config--;
    if (VAR_6->io[VAR_8].Config != 0)
     continue;
    VAR_5.map = VAR_8;
    VAR_6->ops->set_io_map(VAR_6, &VAR_5);
   }
 }
 FUNC_1(&VAR_6->ops_mutex);

 return 0;
}
