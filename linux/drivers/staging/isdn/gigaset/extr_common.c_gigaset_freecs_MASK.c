
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cardstate {int cs_init; int channels; int mutex; int bcs; int inbuf; int port; int at_state; TYPE_1__* ops; int timer; int event_tasklet; int lock; scalar_t__ running; } ;
struct TYPE_2__ {int (* freecshw ) (struct cardstate*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct cardstate*) ;
 int FUNC_2 (struct cardstate*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cardstate*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct cardstate*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct cardstate*) ;
 int FUNC_9 (struct cardstate*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct cardstate*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (struct cardstate*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

void FUNC_19(struct cardstate *VAR_2)
{
 int VAR_3;
 unsigned long VAR_4;

 if (!VAR_2)
  return;

 FUNC_12(&VAR_2->mutex);

 FUNC_14(&VAR_2->lock, VAR_4);
 VAR_2->running = 0;
 FUNC_15(&VAR_2->lock, VAR_4);


 FUNC_17(&VAR_2->event_tasklet);
 FUNC_3(&VAR_2->timer);

 switch (VAR_2->cs_init) {
 default:

  for (VAR_3 = 0; VAR_3 < VAR_2->channels; ++VAR_3) {
   FUNC_5(VAR_0, "clearing bcs[%d]", VAR_3);
   FUNC_7(VAR_2->bcs + VAR_3);
  }


  FUNC_6(VAR_2);

  FUNC_8(VAR_2);

  FUNC_5(VAR_0, "clearing hw");
  VAR_2->ops->freecshw(VAR_2);


 case 2:

  FUNC_11(VAR_2, VAR_1);
  FUNC_9(VAR_2);


 case 1:
  FUNC_5(VAR_0, "clearing at_state");
  FUNC_0(&VAR_2->at_state);
  FUNC_2(VAR_2);
  FUNC_1(VAR_2);
  FUNC_18(&VAR_2->port);


 case 0:
  FUNC_5(VAR_0, "freeing inbuf");
  FUNC_10(VAR_2->inbuf);
  FUNC_10(VAR_2->bcs);
 }

 FUNC_13(&VAR_2->mutex);
 FUNC_4(VAR_2);
}
