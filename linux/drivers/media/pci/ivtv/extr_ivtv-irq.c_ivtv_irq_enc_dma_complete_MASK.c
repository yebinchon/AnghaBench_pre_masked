
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ivtv_stream {scalar_t__ sg_processed; scalar_t__ sg_processing_size; int s_flags; int dma_offset; } ;
struct ivtv {size_t cur_dma_stream; int dma_retries; int dma_waitq; struct ivtv_stream* streams; int i_flags; int dma_timer; int enc_mbox; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,size_t) ;
 int FUNC_1 (char*,int,int ,scalar_t__,scalar_t__,int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ivtv_stream*) ;
 int FUNC_5 (int *,int ,int,int*) ;
 int FUNC_6 (struct ivtv_stream*) ;
 int FUNC_7 (struct ivtv_stream*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,int ) ;

__attribute__((used)) static void FUNC_12(struct ivtv *VAR_6)
{
 u32 VAR_7[VAR_0];
 struct ivtv_stream *VAR_8;

 FUNC_5(&VAR_6->enc_mbox, VAR_4, 2, VAR_7);
 FUNC_0("ENC DMA COMPLETE %x %d (%d)\n", VAR_7[0], VAR_7[1], VAR_6->cur_dma_stream);

 FUNC_3(&VAR_6->dma_timer);

 if (VAR_6->cur_dma_stream < 0)
  return;

 VAR_8 = &VAR_6->streams[VAR_6->cur_dma_stream];
 FUNC_7(VAR_8);

 if (VAR_7[0] & 0x18) {
  FUNC_1("ENC DMA ERROR %x (offset %08x, xfer %d of %d, retry %d)\n", VAR_7[0],
   VAR_8->dma_offset, VAR_8->sg_processed, VAR_8->sg_processing_size, VAR_6->dma_retries);
  FUNC_11(FUNC_8(VAR_5) & 3, VAR_5);
  if (VAR_6->dma_retries == 3) {

   VAR_6->dma_retries = 0;
   VAR_8->sg_processed = VAR_8->sg_processing_size;
  }
  else {


   VAR_8->sg_processed = 0;
   VAR_6->dma_retries++;
  }
 }
 if (VAR_8->sg_processed < VAR_8->sg_processing_size) {

  FUNC_6(VAR_8);
  return;
 }
 FUNC_2(VAR_2, &VAR_6->i_flags);
 VAR_6->cur_dma_stream = -1;
 FUNC_4(VAR_8);
 if (FUNC_9(VAR_3, &VAR_8->s_flags)) {
  VAR_8 = &VAR_6->streams[VAR_1];
  FUNC_4(VAR_8);
 }
 VAR_8->sg_processing_size = 0;
 VAR_8->sg_processed = 0;
 FUNC_10(&VAR_6->dma_waitq);
}
