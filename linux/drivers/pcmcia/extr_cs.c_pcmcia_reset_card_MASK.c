
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_socket {int state; int skt_mutex; TYPE_1__* callback; int ops_mutex; int dev; } ;
struct TYPE_2__ {int (* resume ) (struct pcmcia_socket*) ;int (* suspend ) (struct pcmcia_socket*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pcmcia_socket*) ;
 int FUNC_4 (struct pcmcia_socket*) ;
 int FUNC_5 (struct pcmcia_socket*) ;

int FUNC_6(struct pcmcia_socket *VAR_6)
{
 int VAR_7;

 FUNC_0(&VAR_6->dev, "resetting socket\n");

 FUNC_1(&VAR_6->skt_mutex);
 do {
  if (!(VAR_6->state & VAR_4)) {
   FUNC_0(&VAR_6->dev, "can't reset, not present\n");
   VAR_7 = -VAR_1;
   break;
  }
  if (VAR_6->state & VAR_5) {
   FUNC_0(&VAR_6->dev, "can't reset, suspended\n");
   VAR_7 = -VAR_0;
   break;
  }
  if (VAR_6->state & VAR_3) {
   FUNC_0(&VAR_6->dev, "can't reset, is cardbus\n");
   VAR_7 = -VAR_2;
   break;
  }

  if (VAR_6->callback)
   VAR_6->callback->suspend(VAR_6);
  FUNC_1(&VAR_6->ops_mutex);
  VAR_7 = FUNC_3(VAR_6);
  FUNC_2(&VAR_6->ops_mutex);
  if ((VAR_7 == 0) && (VAR_6->callback))
   VAR_6->callback->resume(VAR_6);

  VAR_7 = 0;
 } while (0);
 FUNC_2(&VAR_6->skt_mutex);

 return VAR_7;
}
