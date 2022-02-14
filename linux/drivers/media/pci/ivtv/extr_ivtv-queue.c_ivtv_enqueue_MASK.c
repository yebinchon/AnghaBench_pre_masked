
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv_queue {int bytesused; int length; int buffers; int list; } ;
struct ivtv_stream {int qlock; scalar_t__ buf_size; struct ivtv_queue q_free; } ;
struct ivtv_buffer {scalar_t__ readpos; scalar_t__ bytesused; int list; scalar_t__ dma_xfer_cnt; scalar_t__ b_flags; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct ivtv_stream *VAR_0, struct ivtv_buffer *VAR_1, struct ivtv_queue *VAR_2)
{
 unsigned long VAR_3;


 if (VAR_2 == &VAR_0->q_free) {
  VAR_1->bytesused = 0;
  VAR_1->readpos = 0;
  VAR_1->b_flags = 0;
  VAR_1->dma_xfer_cnt = 0;
 }
 FUNC_1(&VAR_0->qlock, VAR_3);
 FUNC_0(&VAR_1->list, &VAR_2->list);
 VAR_2->buffers++;
 VAR_2->length += VAR_0->buf_size;
 VAR_2->bytesused += VAR_1->bytesused - VAR_1->readpos;
 FUNC_2(&VAR_0->qlock, VAR_3);
}
