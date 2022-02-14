
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ivtv_stream {scalar_t__ type; scalar_t__ sg_processed; } ;
struct TYPE_3__ {scalar_t__ expires; } ;
struct ivtv {size_t cur_dma_stream; int dma_retries; int dma_waitq; int i_flags; TYPE_1__ dma_timer; struct ivtv_stream* streams; int enc_mbox; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int,size_t) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ,int,int*) ;
 int FUNC_5 (struct ivtv_stream*) ;
 int FUNC_6 (struct ivtv_stream*) ;
 int FUNC_7 (struct ivtv*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int,int ) ;

__attribute__((used)) static void FUNC_13(struct ivtv *VAR_8)
{
 u32 VAR_9[VAR_0];
 u32 VAR_10;

 FUNC_3(&VAR_8->dma_timer);

 FUNC_4(&VAR_8->enc_mbox, VAR_5, 2, VAR_9);
 VAR_10 = FUNC_9(VAR_6);
 FUNC_0("DMA ERROR %08x %08x %08x %d\n", VAR_9[0], VAR_9[1],
    VAR_10, VAR_8->cur_dma_stream);
 VAR_10 &= 0x3;
 if (VAR_10 == 0x3)
  FUNC_12(VAR_10, VAR_6);

 if (!FUNC_10(VAR_3, &VAR_8->i_flags) &&
     VAR_8->cur_dma_stream >= 0 && VAR_8->cur_dma_stream < VAR_4) {
  struct ivtv_stream *VAR_11 = &VAR_8->streams[VAR_8->cur_dma_stream];

  if (VAR_11->type >= VAR_1) {





   FUNC_5(VAR_11);
   return;
  } else {
   if ((VAR_10 & 0x2) == 0) {




    VAR_8->dma_timer.expires =
      VAR_7 + FUNC_8(600);
    FUNC_1(&VAR_8->dma_timer);
    return;
   }

   if (VAR_8->dma_retries < 3) {






    VAR_11->sg_processed = 0;
    VAR_8->dma_retries++;
    FUNC_6(VAR_11);
    return;
   }

  }

 }
 if (FUNC_10(VAR_3, &VAR_8->i_flags)) {
  FUNC_7(VAR_8);
  return;
 }
 FUNC_2(VAR_3, &VAR_8->i_flags);
 FUNC_2(VAR_2, &VAR_8->i_flags);
 VAR_8->cur_dma_stream = -1;
 FUNC_11(&VAR_8->dma_waitq);
}
