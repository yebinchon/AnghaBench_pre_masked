
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct pcmcia_socket {int dev; TYPE_1__* ops; TYPE_2__ socket; } ;
struct TYPE_4__ {int (* get_status ) (struct pcmcia_socket*,int*) ;int (* set_socket ) (struct pcmcia_socket*,TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct pcmcia_socket*,TYPE_2__*) ;
 int FUNC_4 (struct pcmcia_socket*,TYPE_2__*) ;
 int FUNC_5 (struct pcmcia_socket*,int*) ;
 int FUNC_6 (long) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_7(struct pcmcia_socket *VAR_10)
{
 int VAR_11, VAR_12;

 FUNC_0(&VAR_10->dev, "reset\n");

 VAR_10->socket.flags |= VAR_3 | VAR_5;
 VAR_10->ops->set_socket(VAR_10, &VAR_10->socket);
 FUNC_6((long)VAR_6);

 VAR_10->socket.flags &= ~VAR_5;
 VAR_10->ops->set_socket(VAR_10, &VAR_10->socket);

 FUNC_2(VAR_8 * 10);
 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  VAR_10->ops->get_status(VAR_10, &VAR_11);

  if (!(VAR_11 & VAR_2))
   return -VAR_0;

  if (VAR_11 & VAR_4)
   return 0;

  FUNC_2(VAR_7 * 10);
 }

 FUNC_1(&VAR_10->dev, "time out after reset\n");
 return -VAR_1;
}
