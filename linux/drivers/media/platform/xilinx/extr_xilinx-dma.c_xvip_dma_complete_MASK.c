
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int timestamp; } ;
struct TYPE_6__ {TYPE_3__ vb2_buf; scalar_t__ sequence; int field; } ;
struct xvip_dma_buffer {TYPE_2__ buf; int queue; struct xvip_dma* dma; } ;
struct TYPE_5__ {int sizeimage; } ;
struct xvip_dma {TYPE_1__ format; int sequence; int queued_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_2)
{
 struct xvip_dma_buffer *VAR_3 = VAR_2;
 struct xvip_dma *VAR_4 = VAR_3->dma;

 FUNC_2(&VAR_4->queued_lock);
 FUNC_1(&VAR_3->queue);
 FUNC_3(&VAR_4->queued_lock);

 VAR_3->buf.field = VAR_0;
 VAR_3->buf.sequence = VAR_4->sequence++;
 VAR_3->buf.vb2_buf.timestamp = FUNC_0();
 FUNC_5(&VAR_3->buf.vb2_buf, 0, VAR_4->format.sizeimage);
 FUNC_4(&VAR_3->buf.vb2_buf, VAR_1);
}
