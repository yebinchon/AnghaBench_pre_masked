
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vsp1_pipeline {int sequence; } ;
struct TYPE_7__ {int timestamp; } ;
struct TYPE_5__ {TYPE_3__ vb2_buf; int sequence; } ;
struct vsp1_histogram_buffer {TYPE_1__ buf; } ;
struct TYPE_6__ {struct vsp1_pipeline* pipe; } ;
struct vsp1_histogram {int readout; int irqlock; int wait_queue; TYPE_2__ entity; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ,size_t) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct vsp1_histogram *VAR_1,
        struct vsp1_histogram_buffer *VAR_2,
        size_t VAR_3)
{
 struct vsp1_pipeline *VAR_4 = VAR_1->entity.pipe;
 unsigned long VAR_5;






 VAR_2->buf.sequence = VAR_4->sequence;
 VAR_2->buf.vb2_buf.timestamp = FUNC_0();
 FUNC_4(&VAR_2->buf.vb2_buf, 0, VAR_3);
 FUNC_3(&VAR_2->buf.vb2_buf, VAR_0);

 FUNC_1(&VAR_1->irqlock, VAR_5);
 VAR_1->readout = 0;
 FUNC_5(&VAR_1->wait_queue);
 FUNC_2(&VAR_1->irqlock, VAR_5);
}
