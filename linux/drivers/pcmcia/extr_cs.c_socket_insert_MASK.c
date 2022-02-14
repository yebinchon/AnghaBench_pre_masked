
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_socket {int state; int ops_mutex; TYPE_1__* callback; int dev; int sock; } ;
struct TYPE_2__ {int (* add ) (struct pcmcia_socket*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pcmcia_socket*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int FUNC_5 (struct pcmcia_socket*,int ) ;
 int FUNC_6 (struct pcmcia_socket*) ;
 int FUNC_7 (struct pcmcia_socket*) ;

__attribute__((used)) static int FUNC_8(struct pcmcia_socket *VAR_6)
{
 int VAR_7;

 FUNC_1(&VAR_6->dev, "insert\n");

 FUNC_3(&VAR_6->ops_mutex);
 if (VAR_6->state & VAR_3) {
  FUNC_4(&VAR_6->ops_mutex);
  return -VAR_0;
 }
 VAR_6->state |= VAR_3;

 VAR_7 = FUNC_5(VAR_6, VAR_5);
 if (VAR_7 == 0) {
  VAR_6->state |= VAR_4;

  FUNC_2(&VAR_6->dev, "pccard: %s card inserted into slot %d\n",
      (VAR_6->state & VAR_1) ? "CardBus" : "PCMCIA",
      VAR_6->sock);







  FUNC_1(&VAR_6->dev, "insert done\n");
  FUNC_4(&VAR_6->ops_mutex);

  if (!(VAR_6->state & VAR_1) && (VAR_6->callback))
   VAR_6->callback->add(VAR_6);
 } else {
  FUNC_4(&VAR_6->ops_mutex);
  FUNC_6(VAR_6);
 }

 return VAR_7;
}
