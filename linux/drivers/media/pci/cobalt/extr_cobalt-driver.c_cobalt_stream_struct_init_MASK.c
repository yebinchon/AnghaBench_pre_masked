
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cobalt_stream {int is_audio; int is_output; int is_dummy; int dma_channel; int video_channel; int dma_fifo_mask; int adv_irq_mask; scalar_t__ flags; struct cobalt* cobalt; } ;
struct cobalt {int first_fifo_channel; struct cobalt_stream* streams; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct cobalt *VAR_12)
{
 int VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  struct cobalt_stream *VAR_14 = &VAR_12->streams[VAR_13];

  VAR_14->cobalt = VAR_12;
  VAR_14->flags = 0;
  VAR_14->is_audio = 0;
  VAR_14->is_output = 0;
  VAR_14->is_dummy = 1;





  if (VAR_13 <= VAR_2) {
   VAR_14->dma_channel = VAR_13 + VAR_12->first_fifo_channel;
   VAR_14->video_channel = VAR_13;
   VAR_14->dma_fifo_mask =
    VAR_9 << (4 * VAR_13);
   VAR_14->adv_irq_mask =
    VAR_8 << (4 * VAR_13);
  } else if (VAR_13 >= VAR_0 &&
      VAR_13 <= VAR_0 + 4) {
   unsigned VAR_15 = VAR_13 - VAR_0;

   VAR_14->dma_channel = 6 + VAR_15;
   VAR_14->is_audio = 1;
   VAR_14->video_channel = VAR_15;
   VAR_14->dma_fifo_mask = VAR_6;
  } else if (VAR_13 == VAR_3) {
   VAR_14->dma_channel = 11;
   VAR_14->is_output = 1;
   VAR_14->video_channel = 5;
   VAR_14->dma_fifo_mask = VAR_11;
   VAR_14->adv_irq_mask = VAR_10;
  } else if (VAR_13 == VAR_1) {
   VAR_14->dma_channel = 12;
   VAR_14->is_audio = 1;
   VAR_14->is_output = 1;
   VAR_14->video_channel = 5;
   VAR_14->dma_fifo_mask = VAR_7;
  } else {

   VAR_14->dma_channel = VAR_13 - VAR_4;
  }
  FUNC_0("stream #%d -> dma channel #%d <- video channel %d\n",
       VAR_13, VAR_14->dma_channel, VAR_14->video_channel);
 }
}
