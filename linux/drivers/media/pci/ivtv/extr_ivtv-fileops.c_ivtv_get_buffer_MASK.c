
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int buffers; } ;
struct ivtv_stream {scalar_t__ type; int name; int waitq; TYPE_2__ q_full; int s_flags; int dma_pts; TYPE_2__ q_io; int q_free; struct ivtv* itv; } ;
struct ivtv_buffer {scalar_t__ readpos; scalar_t__ bytesused; int b_flags; } ;
struct TYPE_3__ {struct ivtv_buffer sliced_mpeg_buf; } ;
struct ivtv {int serialize_lock; TYPE_1__ vbi; scalar_t__ dualwatch_jiffies; struct ivtv_stream* streams; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct ivtv_buffer*) ;
 struct ivtv_buffer* FUNC_4 (struct ivtv_stream*,TYPE_2__*) ;
 int FUNC_5 (struct ivtv*) ;
 int FUNC_6 (struct ivtv_stream*,struct ivtv_buffer*,int *) ;
 int FUNC_7 (struct ivtv*,struct ivtv_buffer*,int ,scalar_t__) ;
 int FUNC_8 (struct ivtv*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,int ) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 int VAR_12 ;

__attribute__((used)) static struct ivtv_buffer *FUNC_17(struct ivtv_stream *VAR_13, int VAR_14, int *VAR_15)
{
 struct ivtv *VAR_16 = VAR_13->itv;
 struct ivtv_stream *VAR_17 = &VAR_16->streams[VAR_4];
 struct ivtv_buffer *VAR_18;
 FUNC_0(VAR_12);

 *VAR_15 = 0;
 while (1) {
  if (VAR_13->type == VAR_3) {

   FUNC_8(VAR_16);

   if (FUNC_16(VAR_11,
           VAR_16->dualwatch_jiffies +
           FUNC_9(1000))) {
    VAR_16->dualwatch_jiffies = VAR_11;
    FUNC_5(VAR_16);
   }

   if (FUNC_15(VAR_7, &VAR_17->s_flags) &&
       !FUNC_15(VAR_6, &VAR_17->s_flags)) {
    while ((VAR_18 = FUNC_4(VAR_17, &VAR_17->q_full))) {

     FUNC_7(VAR_16, VAR_18, VAR_17->dma_pts, VAR_17->type);
     FUNC_6(VAR_17, VAR_18, &VAR_17->q_free);
    }
   }
   VAR_18 = &VAR_16->vbi.sliced_mpeg_buf;
   if (VAR_18->readpos != VAR_18->bytesused) {
    return VAR_18;
   }
  }


  VAR_18 = FUNC_4(VAR_13, &VAR_13->q_io);
  if (VAR_18)
   return VAR_18;


  VAR_18 = FUNC_4(VAR_13, &VAR_13->q_full);
  if (VAR_18) {
   if ((VAR_18->b_flags & VAR_5) == 0)
    return VAR_18;
   VAR_18->b_flags &= ~VAR_5;
   if (VAR_13->type == VAR_3)

    FUNC_3(VAR_18);
   else if (VAR_13->type != VAR_2) {

    FUNC_7(VAR_16, VAR_18, VAR_13->dma_pts, VAR_13->type);
   }
   return VAR_18;
  }


  if (VAR_13->type != VAR_2 && !FUNC_15(VAR_8, &VAR_13->s_flags)) {
   FUNC_1("EOS %s\n", VAR_13->name);
   return ((void*)0);
  }


  if (VAR_14) {
   *VAR_15 = -VAR_0;
   return ((void*)0);
  }


  FUNC_11(&VAR_16->serialize_lock);
  FUNC_12(&VAR_13->waitq, &VAR_12, VAR_9);

  if (!VAR_13->q_full.buffers)
   FUNC_13();
  FUNC_2(&VAR_13->waitq, &VAR_12);
  FUNC_10(&VAR_16->serialize_lock);
  if (FUNC_14(VAR_10)) {

   FUNC_1("User stopped %s\n", VAR_13->name);
   *VAR_15 = -VAR_1;
   return ((void*)0);
  }
 }
}
