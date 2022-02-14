
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx18_stream {int mdl_base_idx; int buffers; scalar_t__ type; int id; int waitq; int q_full; int q_free; int name; } ;
struct cx18_mdl_ack {int id; int data_used; } ;
struct cx18_mdl {int bytesused; } ;
struct cx18_mailbox {int* args; int request; } ;
struct cx18_in_work_order {int flags; struct cx18_mdl_ack* mdl_ack; struct cx18_mailbox mb; } ;
struct cx18 {int dma_waitq; int * pcm_announce_callback; } ;


 int FUNC_0 (char*,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (struct cx18_stream*,struct cx18_mdl*,int *) ;
 struct cx18_stream* FUNC_3 (struct cx18*,int) ;
 int FUNC_4 (struct cx18*,struct cx18_stream*,struct cx18_mdl*) ;
 int FUNC_5 (struct cx18_stream*,struct cx18_mdl*) ;
 int FUNC_6 (struct cx18_stream*,struct cx18_mdl*) ;
 struct cx18_mdl* FUNC_7 (struct cx18_stream*,int,int ) ;
 int FUNC_8 (struct cx18_stream*) ;
 int FUNC_9 (struct cx18*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct cx18 *VAR_5, struct cx18_in_work_order *VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9;
 struct cx18_mailbox *VAR_10;
 struct cx18_mdl_ack *VAR_11;
 struct cx18_stream *VAR_12;
 struct cx18_mdl *VAR_13;
 int VAR_14;

 VAR_10 = &VAR_6->mb;
 VAR_7 = VAR_10->args[0];
 VAR_12 = FUNC_3(VAR_5, VAR_7);

 if (VAR_12 == ((void*)0)) {
  FUNC_1("Got DMA done notification for unknown/inactive handle %d, %s mailbox seq no %d\n",
     VAR_7,
     (VAR_6->flags & VAR_4) ?
     "stale" : "good", VAR_10->request);
  return;
 }

 VAR_8 = VAR_10->args[2];
 VAR_11 = VAR_6->mdl_ack;
 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++, VAR_11++) {
  VAR_9 = VAR_11->id;
  if ((VAR_6->flags & VAR_4) &&
      !(VAR_9 >= VAR_12->mdl_base_idx &&
        VAR_9 < (VAR_12->mdl_base_idx + VAR_12->buffers))) {
   FUNC_1("Fell behind! Ignoring stale mailbox with  inconsistent data. Lost MDL for mailbox seq no %d\n",
      VAR_10->request);
   break;
  }
  VAR_13 = FUNC_7(VAR_12, VAR_9, VAR_11->data_used);

  FUNC_0("DMA DONE for %s (MDL %d)\n", VAR_12->name, VAR_9);
  if (VAR_13 == ((void*)0)) {
   FUNC_1("Could not find MDL %d for stream %s\n",
      VAR_9, VAR_12->name);
   continue;
  }

  FUNC_0("%s recv bytesused = %d\n",
      VAR_12->name, VAR_13->bytesused);

  if (VAR_12->type == VAR_2) {
   FUNC_5(VAR_12, VAR_13);
   FUNC_2(VAR_12, VAR_13, &VAR_12->q_free);
  } else if (VAR_12->type == VAR_1) {

   if (VAR_5->pcm_announce_callback != ((void*)0)) {
    FUNC_4(VAR_5, VAR_12, VAR_13);
    FUNC_2(VAR_12, VAR_13, &VAR_12->q_free);
   } else {
    FUNC_2(VAR_12, VAR_13, &VAR_12->q_full);
   }
  } else if (VAR_12->type == VAR_3) {
   FUNC_6(VAR_12, VAR_13);
   FUNC_2(VAR_12, VAR_13, &VAR_12->q_free);
  } else {
   FUNC_2(VAR_12, VAR_13, &VAR_12->q_full);
   if (VAR_12->type == VAR_0)
    FUNC_9(VAR_5);
  }
 }

 FUNC_8(VAR_12);

 FUNC_10(&VAR_5->dma_waitq);
 if (VAR_12->id != -1)
  FUNC_10(&VAR_12->waitq);
}
