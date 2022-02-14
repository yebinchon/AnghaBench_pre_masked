
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmdbuf_t {struct cmdbuf_t* next; } ;
struct cardstate {int gotfwver; int channels; int waitqueue; scalar_t__ waiting; int cmd_result; scalar_t__ bcs; int lock; scalar_t__ cbytes; scalar_t__ commands_pending; scalar_t__ cur_at_seq; scalar_t__ dle; scalar_t__ cmdbytes; scalar_t__ curlen; int * lastcmdbuf; struct cmdbuf_t* cmdbuf; TYPE_1__* inbuf; int at_state; int mstate; int mode; } ;
struct TYPE_2__ {scalar_t__ tail; scalar_t__ head; int inputstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct cardstate*) ;
 int FUNC_2 (int *,int *,struct cardstate*,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,struct cardstate*,int) ;
 int FUNC_5 (struct cmdbuf_t*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct cardstate *VAR_4)
{
 struct cmdbuf_t *VAR_5, *VAR_6;
 int VAR_7;
 unsigned long VAR_8;

 FUNC_7(&VAR_4->lock, VAR_8);

 VAR_4->mode = VAR_3;
 VAR_4->mstate = VAR_2;

 FUNC_0(&VAR_4->at_state);
 FUNC_1(VAR_4);
 FUNC_2(&VAR_4->at_state, ((void*)0), VAR_4, 0);

 VAR_4->inbuf->inputstate = VAR_1;
 VAR_4->inbuf->head = 0;
 VAR_4->inbuf->tail = 0;

 VAR_5 = VAR_4->cmdbuf;
 while (VAR_5) {
  VAR_6 = VAR_5;
  VAR_5 = VAR_5->next;
  FUNC_5(VAR_6);
 }
 VAR_4->cmdbuf = VAR_4->lastcmdbuf = ((void*)0);
 VAR_4->curlen = 0;
 VAR_4->cmdbytes = 0;
 VAR_4->gotfwver = -1;
 VAR_4->dle = 0;
 VAR_4->cur_at_seq = 0;
 VAR_4->commands_pending = 0;
 VAR_4->cbytes = 0;

 FUNC_8(&VAR_4->lock, VAR_8);

 for (VAR_7 = 0; VAR_7 < VAR_4->channels; ++VAR_7) {
  FUNC_3(VAR_4->bcs + VAR_7);
  if (FUNC_4(VAR_4->bcs + VAR_7, VAR_4, VAR_7) < 0)
   FUNC_6("could not allocate channel %d data\n", VAR_7);
 }

 if (VAR_4->waiting) {
  VAR_4->cmd_result = -VAR_0;
  VAR_4->waiting = 0;
  FUNC_9(&VAR_4->waitqueue);
 }
}
