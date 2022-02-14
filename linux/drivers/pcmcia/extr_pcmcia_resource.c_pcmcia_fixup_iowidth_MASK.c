
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct pcmcia_socket {int state; int ops_mutex; TYPE_4__* ops; TYPE_3__* io; } ;
struct pcmcia_device {int dev; TYPE_1__* function_config; struct pcmcia_socket* socket; } ;
struct TYPE_12__ {int member_4; int map; int flags; int stop; int start; int speed; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_5__ pccard_io_map ;
struct TYPE_11__ {int (* set_io_map ) (struct pcmcia_socket*,TYPE_5__*) ;} ;
struct TYPE_10__ {TYPE_2__* res; } ;
struct TYPE_9__ {int end; int start; } ;
struct TYPE_8__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pcmcia_socket*,TYPE_5__*) ;
 int FUNC_5 (struct pcmcia_socket*,TYPE_5__*) ;

int FUNC_6(struct pcmcia_device *VAR_7)
{
 struct pcmcia_socket *VAR_8 = VAR_7->socket;
 pccard_io_map VAR_9 = { 0, 0, 0, 0, 1 };
 pccard_io_map VAR_10;
 int VAR_11, VAR_12 = 0;

 FUNC_2(&VAR_8->ops_mutex);

 FUNC_0(&VAR_7->dev, "fixup iowidth to 8bit\n");

 if (!(VAR_8->state & VAR_5) ||
  !(VAR_7->function_config->state & VAR_0)) {
  FUNC_0(&VAR_7->dev, "No card? Config not locked?\n");
  VAR_12 = -VAR_1;
  goto unlock;
 }

 VAR_10.speed = VAR_6;
 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  if (!VAR_8->io[VAR_11].res)
   continue;
  VAR_9.map = VAR_11;
  VAR_10.map = VAR_11;

  VAR_10.flags = VAR_3 | VAR_2;
  VAR_10.start = VAR_8->io[VAR_11].res->start;
  VAR_10.stop = VAR_8->io[VAR_11].res->end;

  VAR_8->ops->set_io_map(VAR_8, &VAR_9);
  FUNC_1(40);
  VAR_8->ops->set_io_map(VAR_8, &VAR_10);
 }
unlock:
 FUNC_3(&VAR_8->ops_mutex);

 return VAR_12;
}
