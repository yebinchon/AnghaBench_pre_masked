
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_socket {unsigned int thread_events; unsigned int sysfs_events; int state; int dev; int skt_mutex; TYPE_2__* callback; int thread_lock; int thread_done; int * thread; int socket; TYPE_1__* ops; } ;
struct TYPE_4__ {int (* suspend ) (struct pcmcia_socket*) ;int (* requery ) (struct pcmcia_socket*) ;int (* resume ) (struct pcmcia_socket*) ;} ;
struct TYPE_3__ {int (* set_socket ) (struct pcmcia_socket*,int *) ;int (* init ) (struct pcmcia_socket*) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (struct pcmcia_socket*) ;
 int FUNC_15 (struct pcmcia_socket*) ;
 int FUNC_16 (struct pcmcia_socket*) ;
 int FUNC_17 (struct pcmcia_socket*) ;
 int FUNC_18 (struct pcmcia_socket*) ;
 int FUNC_19 (int *,unsigned long) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (struct pcmcia_socket*) ;
 int FUNC_22 (struct pcmcia_socket*,int *) ;
 int FUNC_23 (struct pcmcia_socket*) ;
 int FUNC_24 (struct pcmcia_socket*) ;
 int FUNC_25 (struct pcmcia_socket*) ;
 int FUNC_26 () ;

__attribute__((used)) static int FUNC_27(void *VAR_12)
{
 struct pcmcia_socket *VAR_13 = VAR_12;
 int VAR_14;

 VAR_13->thread = VAR_10;
 VAR_13->socket = VAR_11;
 VAR_13->ops->init(VAR_13);
 VAR_13->ops->set_socket(VAR_13, &VAR_13->socket);


 VAR_14 = FUNC_3(&VAR_13->dev);
 if (VAR_14) {
  FUNC_2(&VAR_13->dev, "PCMCIA: unable to register socket\n");
  VAR_13->thread = ((void*)0);
  FUNC_1(&VAR_13->thread_done);
  return 0;
 }
 VAR_14 = FUNC_9(&VAR_13->dev);
 if (VAR_14)
  FUNC_2(&VAR_13->dev, "err %d adding socket attributes\n", VAR_14);

 FUNC_1(&VAR_13->thread_done);


 FUNC_6(250);

 FUNC_13();
 for (;;) {
  unsigned long VAR_15;
  unsigned int VAR_16;
  unsigned int VAR_17;

  FUNC_19(&VAR_13->thread_lock, VAR_15);
  VAR_16 = VAR_13->thread_events;
  VAR_13->thread_events = 0;
  VAR_17 = VAR_13->sysfs_events;
  VAR_13->sysfs_events = 0;
  FUNC_20(&VAR_13->thread_lock, VAR_15);

  FUNC_7(&VAR_13->skt_mutex);
  if (VAR_16 & VAR_7)
   FUNC_14(VAR_13);

  if (VAR_17) {
   if (VAR_17 & VAR_0)
    FUNC_16(VAR_13);
   if (VAR_17 & VAR_1)
    FUNC_15(VAR_13);
   if ((VAR_17 & VAR_4) &&
    !(VAR_13->state & VAR_5)) {
    if (VAR_13->callback)
     VAR_14 = VAR_13->callback->suspend(VAR_13);
    else
     VAR_14 = 0;
    if (!VAR_14) {
     FUNC_18(VAR_13);
     FUNC_6(100);
    }
   }
   if ((VAR_17 & VAR_3) &&
    !(VAR_13->state & VAR_5)) {
    VAR_14 = FUNC_17(VAR_13);
    if (!VAR_14 && VAR_13->callback)
     VAR_13->callback->resume(VAR_13);
   }
   if ((VAR_17 & VAR_2) &&
    !(VAR_13->state & VAR_5)) {
    if (!VAR_14 && VAR_13->callback)
     VAR_13->callback->requery(VAR_13);
   }
  }
  FUNC_8(&VAR_13->skt_mutex);

  if (VAR_16 || VAR_17)
   continue;

  if (FUNC_5())
   break;

  FUNC_12(VAR_8);

  FUNC_11();


  FUNC_0(VAR_9);

  FUNC_26();
 }


 if (VAR_13->state & VAR_6) {
  FUNC_7(&VAR_13->skt_mutex);
  FUNC_16(VAR_13);
  FUNC_8(&VAR_13->skt_mutex);
 }


 FUNC_10(&VAR_13->dev);
 FUNC_4(&VAR_13->dev);

 return 0;
}
