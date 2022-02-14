
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int Vcc; int Vpp; scalar_t__ flags; } ;
struct pcmcia_socket {int features; int (* power_hook ) (struct pcmcia_socket*,int ) ;int dev; TYPE_1__* ops; TYPE_2__ socket; int state; } ;
struct TYPE_3__ {int (* get_status ) (struct pcmcia_socket*,int*) ;int (* set_socket ) (struct pcmcia_socket*,TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct pcmcia_socket*) ;
 int FUNC_4 (struct pcmcia_socket*,int*) ;
 int FUNC_5 (struct pcmcia_socket*,int*) ;
 int FUNC_6 (struct pcmcia_socket*,int ) ;
 int FUNC_7 (struct pcmcia_socket*,TYPE_2__*) ;
 int FUNC_8 (struct pcmcia_socket*,int*) ;
 int FUNC_9 (struct pcmcia_socket*,int ) ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_10(struct pcmcia_socket *VAR_15, int VAR_16)
{
 int VAR_17, VAR_18;

 FUNC_0(&VAR_15->dev, "setup\n");

 VAR_15->ops->get_status(VAR_15, &VAR_17);
 if (!(VAR_17 & VAR_10))
  return -VAR_2;

 FUNC_2(VAR_16 * 10);

 for (VAR_18 = 0; VAR_18 < 100; VAR_18++) {
  VAR_15->ops->get_status(VAR_15, &VAR_17);
  if (!(VAR_17 & VAR_10))
   return -VAR_2;

  if (!(VAR_17 & VAR_11))
   break;

  FUNC_2(100);
 }

 if (VAR_17 & VAR_11) {
  FUNC_1(&VAR_15->dev, "voltage interrogation timed out\n");
  return -VAR_3;
 }

 if (VAR_17 & VAR_9) {
  if (!(VAR_15->features & VAR_8)) {
   FUNC_1(&VAR_15->dev, "cardbus cards are not supported\n");
   return -VAR_0;
  }
  VAR_15->state |= VAR_6;
 } else
  VAR_15->state &= ~VAR_6;




 if (VAR_17 & VAR_7)
  VAR_15->socket.Vcc = VAR_15->socket.Vpp = 33;
 else if (!(VAR_17 & VAR_13))
  VAR_15->socket.Vcc = VAR_15->socket.Vpp = 50;
 else {
  FUNC_1(&VAR_15->dev, "unsupported voltage key\n");
  return -VAR_1;
 }

 if (VAR_15->power_hook)
  VAR_15->power_hook(VAR_15, VAR_5);

 VAR_15->socket.flags = 0;
 VAR_15->ops->set_socket(VAR_15, &VAR_15->socket);




 FUNC_2(VAR_14 * 10);

 VAR_15->ops->get_status(VAR_15, &VAR_17);
 if (!(VAR_17 & VAR_12)) {
  FUNC_1(&VAR_15->dev, "unable to apply power\n");
  return -VAR_1;
 }

 VAR_17 = FUNC_3(VAR_15);

 if (VAR_15->power_hook)
  VAR_15->power_hook(VAR_15, VAR_4);

 return VAR_17;
}
