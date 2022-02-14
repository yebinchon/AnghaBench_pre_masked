
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned char Vpp; } ;
struct pcmcia_socket {int state; int ops_mutex; TYPE_3__ socket; TYPE_2__* ops; } ;
struct pcmcia_device {unsigned char vpp; int dev; TYPE_1__* function_config; struct pcmcia_socket* socket; } ;
struct TYPE_5__ {scalar_t__ (* set_socket ) (struct pcmcia_socket*,TYPE_3__*) ;} ;
struct TYPE_4__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct pcmcia_socket*,TYPE_3__*) ;

int FUNC_5(struct pcmcia_device *VAR_4, unsigned char VAR_5)
{
 struct pcmcia_socket *VAR_6 = VAR_4->socket;
 int VAR_7 = 0;

 FUNC_2(&VAR_6->ops_mutex);

 FUNC_0(&VAR_4->dev, "fixup Vpp to %d\n", VAR_5);

 if (!(VAR_6->state & VAR_3) ||
  !(VAR_4->function_config->state & VAR_0)) {
  FUNC_0(&VAR_4->dev, "No card? Config not locked?\n");
  VAR_7 = -VAR_1;
  goto unlock;
 }

 VAR_6->socket.Vpp = VAR_5;
 if (VAR_6->ops->set_socket(VAR_6, &VAR_6->socket)) {
  FUNC_1(&VAR_4->dev, "Unable to set VPP\n");
  VAR_7 = -VAR_2;
  goto unlock;
 }
 VAR_4->vpp = VAR_5;

unlock:
 FUNC_3(&VAR_6->ops_mutex);

 return VAR_7;
}
