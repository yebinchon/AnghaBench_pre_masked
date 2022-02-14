
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bytesused; } ;
struct ivtv_stream {scalar_t__ sg_processed; scalar_t__ sg_processing_size; scalar_t__ type; int waitq; int q_free; TYPE_1__ q_dma; int name; } ;
struct ivtv_buffer {int dummy; } ;
struct ivtv {size_t cur_dma_stream; int dma_retries; int dma_waitq; int i_flags; struct ivtv_stream* streams; int dma_timer; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,scalar_t__,scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ivtv_stream*,struct ivtv_buffer*) ;
 struct ivtv_buffer* FUNC_6 (struct ivtv_stream*,TYPE_1__*) ;
 int FUNC_7 (struct ivtv_stream*) ;
 int FUNC_8 (struct ivtv_stream*,struct ivtv_buffer*,int *) ;
 int FUNC_9 (struct ivtv_stream*) ;
 int FUNC_10 (struct ivtv*,int ,int,int ,int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int,int ) ;

__attribute__((used)) static void FUNC_15(struct ivtv *VAR_5)
{
 struct ivtv_stream *VAR_6 = ((void*)0);
 struct ivtv_buffer *VAR_7;
 int VAR_8 = 0;

 FUNC_1("DEC DMA READ\n");

 FUNC_4(&VAR_5->dma_timer);

 if (!FUNC_12(VAR_3, &VAR_5->i_flags) && VAR_5->cur_dma_stream < 0)
  return;

 if (!FUNC_12(VAR_3, &VAR_5->i_flags)) {
  VAR_6 = &VAR_5->streams[VAR_5->cur_dma_stream];
  FUNC_9(VAR_6);

  if (FUNC_11(VAR_4) & 0x14) {
   FUNC_2("DEC DMA ERROR %x (xfer %d of %d, retry %d)\n",
     FUNC_11(VAR_4),
     VAR_6->sg_processed, VAR_6->sg_processing_size, VAR_5->dma_retries);
   FUNC_14(FUNC_11(VAR_4) & 3, VAR_4);
   if (VAR_5->dma_retries == 3) {

    VAR_5->dma_retries = 0;
    VAR_6->sg_processed = VAR_6->sg_processing_size;
   }
   else {


    VAR_6->sg_processed = 0;
    VAR_5->dma_retries++;
   }
  }
  if (VAR_6->sg_processed < VAR_6->sg_processing_size) {

   FUNC_7(VAR_6);
   return;
  }
  if (VAR_6->type == VAR_1)
   VAR_8 = 2;
  FUNC_0("DEC DATA READ %s: %d\n", VAR_6->name, VAR_6->q_dma.bytesused);







  FUNC_10(VAR_5, VAR_0, 3, 0, VAR_6->q_dma.bytesused,
    VAR_8);


  while ((VAR_7 = FUNC_6(VAR_6, &VAR_6->q_dma)) != ((void*)0)) {
   FUNC_5(VAR_6, VAR_7);
   FUNC_8(VAR_6, VAR_7, &VAR_6->q_free);
  }
  FUNC_13(&VAR_6->waitq);
 }
 FUNC_3(VAR_3, &VAR_5->i_flags);
 FUNC_3(VAR_2, &VAR_5->i_flags);
 VAR_5->cur_dma_stream = -1;
 FUNC_13(&VAR_5->dma_waitq);
}
