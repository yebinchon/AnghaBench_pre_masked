
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inbuf_t {int dummy; } ;
struct gigaset_driver {int dummy; } ;
struct TYPE_5__ {scalar_t__ expires; } ;
struct cardstate {int channels; int onechannel; int ignoreframes; int running; int gotfwver; int cidmode; TYPE_2__ timer; int lock; scalar_t__ bcs; scalar_t__ cs_init; TYPE_1__* ops; scalar_t__ cmdbytes; scalar_t__ curlen; int cmdlock; int * lastcmdbuf; int cmdbuf; scalar_t__ isdn_up; scalar_t__ connected; int inbuf; scalar_t__ cbytes; scalar_t__ dle; int at_state; int mstate; int mode; scalar_t__ waiting; int waitqueue; int tabcid; int tabnocid; int * tty_dev; int * dev; scalar_t__ cur_at_seq; scalar_t__ commands_pending; int port; int event_tasklet; scalar_t__ ev_head; scalar_t__ ev_tail; int ev_lock; int temp_at_states; } ;
struct bc_state {int dummy; } ;
struct TYPE_4__ {scalar_t__ (* initcshw ) (struct cardstate*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 struct cardstate* FUNC_2 (struct gigaset_driver*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *,int *,struct cardstate*,int ) ;
 int FUNC_5 (struct cardstate*) ;
 int VAR_6 ;
 int FUNC_6 (struct cardstate*) ;
 int FUNC_7 (int ,struct cardstate*) ;
 int FUNC_8 (struct cardstate*) ;
 scalar_t__ FUNC_9 (scalar_t__,struct cardstate*,int) ;
 scalar_t__ FUNC_10 (struct cardstate*,char const*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_12 (int,int ) ;
 scalar_t__ FUNC_13 (int,int,int ) ;
 int FUNC_14 (struct cardstate*,int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,unsigned long) ;
 scalar_t__ FUNC_20 (struct cardstate*) ;
 int FUNC_21 (int *,int ,unsigned long) ;
 int FUNC_22 (TYPE_2__*,int ,int ) ;
 int VAR_10 ;
 int FUNC_23 (int *) ;

struct cardstate *FUNC_24(struct gigaset_driver *VAR_11, int VAR_12,
     int VAR_13, int VAR_14,
     int VAR_15, const char *VAR_16)
{
 struct cardstate *VAR_17;
 unsigned long VAR_18;
 int VAR_19;

 FUNC_3(VAR_0, "allocating cs");
 VAR_17 = FUNC_2(VAR_11);
 if (!VAR_17) {
  FUNC_16("maximum number of devices exceeded\n");
  return ((void*)0);
 }

 VAR_17->cs_init = 0;
 VAR_17->channels = VAR_12;
 VAR_17->onechannel = VAR_13;
 VAR_17->ignoreframes = VAR_14;
 FUNC_0(&VAR_17->temp_at_states);
 VAR_17->running = 0;
 FUNC_22(&VAR_17->timer, VAR_10, 0);
 FUNC_17(&VAR_17->ev_lock);
 VAR_17->ev_tail = 0;
 VAR_17->ev_head = 0;

 FUNC_21(&VAR_17->event_tasklet, VAR_6,
       (unsigned long) VAR_17);
 FUNC_23(&VAR_17->port);
 VAR_17->commands_pending = 0;
 VAR_17->cur_at_seq = 0;
 VAR_17->gotfwver = -1;
 VAR_17->dev = ((void*)0);
 VAR_17->tty_dev = ((void*)0);
 VAR_17->cidmode = VAR_15 != 0;
 VAR_17->tabnocid = VAR_8;
 VAR_17->tabcid = VAR_7;

 FUNC_11(&VAR_17->waitqueue);
 VAR_17->waiting = 0;

 VAR_17->mode = VAR_4;
 VAR_17->mstate = VAR_3;

 VAR_17->bcs = FUNC_13(VAR_12, sizeof(struct bc_state), VAR_1);
 VAR_17->inbuf = FUNC_12(sizeof(struct inbuf_t), VAR_1);
 if (!VAR_17->bcs || !VAR_17->inbuf) {
  FUNC_16("out of memory\n");
  goto error;
 }
 ++VAR_17->cs_init;

 FUNC_3(VAR_0, "setting up at_state");
 FUNC_17(&VAR_17->lock);
 FUNC_4(&VAR_17->at_state, ((void*)0), VAR_17, 0);
 VAR_17->dle = 0;
 VAR_17->cbytes = 0;

 FUNC_3(VAR_0, "setting up inbuf");
 FUNC_7(VAR_17->inbuf, VAR_17);

 VAR_17->connected = 0;
 VAR_17->isdn_up = 0;

 FUNC_3(VAR_0, "setting up cmdbuf");
 VAR_17->cmdbuf = *(VAR_17->lastcmdbuf = ((void*)0));
 FUNC_17(&VAR_17->cmdlock);
 VAR_17->curlen = 0;
 VAR_17->cmdbytes = 0;

 FUNC_3(VAR_0, "setting up iif");
 if (FUNC_10(VAR_17, VAR_16) < 0) {
  FUNC_16("error registering ISDN device\n");
  goto error;
 }

 FUNC_14(VAR_17, VAR_5);
 ++VAR_17->cs_init;
 FUNC_3(VAR_0, "setting up hw");
 if (VAR_17->ops->initcshw(VAR_17) < 0)
  goto error;

 ++VAR_17->cs_init;


 FUNC_6(VAR_17);


 FUNC_8(VAR_17);


 for (VAR_19 = 0; VAR_19 < VAR_12; ++VAR_19) {
  FUNC_3(VAR_0, "setting up bcs[%d]", VAR_19);
  if (FUNC_9(VAR_17->bcs + VAR_19, VAR_17, VAR_19) < 0) {
   FUNC_16("could not allocate channel %d data\n", VAR_19);
   goto error;
  }
 }

 FUNC_18(&VAR_17->lock, VAR_18);
 VAR_17->running = 1;
 FUNC_19(&VAR_17->lock, VAR_18);
 VAR_17->timer.expires = VAR_9 + FUNC_15(VAR_2);
 FUNC_1(&VAR_17->timer);

 FUNC_3(VAR_0, "cs initialized");
 return VAR_17;

error:
 FUNC_3(VAR_0, "failed");
 FUNC_5(VAR_17);
 return ((void*)0);
}
