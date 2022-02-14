
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_socket {int state; int dev; TYPE_2__* ops; int ops_mutex; scalar_t__ functions; int * fake_cis; scalar_t__ lock_count; int socket; TYPE_1__* callback; } ;
struct TYPE_4__ {int (* get_status ) (struct pcmcia_socket*,int*) ;int (* set_socket ) (struct pcmcia_socket*,int *) ;int (* init ) (struct pcmcia_socket*) ;} ;
struct TYPE_3__ {int (* remove ) (struct pcmcia_socket*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcmcia_socket*) ;
 int VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int FUNC_7 (struct pcmcia_socket*) ;
 int FUNC_8 (struct pcmcia_socket*) ;
 int FUNC_9 (struct pcmcia_socket*,int *) ;
 int FUNC_10 (struct pcmcia_socket*,int*) ;

__attribute__((used)) static void FUNC_11(struct pcmcia_socket *VAR_5)
{
 int VAR_6;

 FUNC_1(&VAR_5->dev, "shutdown\n");

 if (VAR_5->callback)
  VAR_5->callback->remove(VAR_5);

 FUNC_5(&VAR_5->ops_mutex);
 VAR_5->state &= VAR_0 | VAR_1;
 FUNC_4(VAR_4 * 10);
 VAR_5->state &= VAR_0;


 VAR_5->socket = VAR_3;
 VAR_5->ops->init(VAR_5);
 VAR_5->ops->set_socket(VAR_5, &VAR_5->socket);
 VAR_5->lock_count = 0;
 FUNC_3(VAR_5->fake_cis);
 VAR_5->fake_cis = ((void*)0);
 VAR_5->functions = 0;







 FUNC_6(&VAR_5->ops_mutex);






 FUNC_4(100);

 VAR_5->ops->get_status(VAR_5, &VAR_6);
 if (VAR_6 & VAR_2) {
  FUNC_2(&VAR_5->dev,
   "*** DANGER *** unable to remove socket power\n");
 }

 VAR_5->state &= ~VAR_0;
}
