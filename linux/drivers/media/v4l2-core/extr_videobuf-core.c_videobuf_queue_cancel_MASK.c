
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_queue {int stream; TYPE_2__** bufs; TYPE_1__* ops; int irqlock; int wait; scalar_t__ reading; scalar_t__ streaming; } ;
struct TYPE_4__ {scalar_t__ state; int done; int queue; } ;
struct TYPE_3__ {int (* buf_release ) (struct videobuf_queue*,TYPE_2__*) ;} ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (struct videobuf_queue*,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct videobuf_queue *VAR_3)
{
 unsigned long VAR_4 = 0;
 int VAR_5;

 VAR_3->streaming = 0;
 VAR_3->reading = 0;
 FUNC_6(&VAR_3->wait);


 FUNC_2(VAR_3->irqlock, VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (((void*)0) == VAR_3->bufs[VAR_5])
   continue;
  if (VAR_3->bufs[VAR_5]->state == VAR_1) {
   FUNC_1(&VAR_3->bufs[VAR_5]->queue);
   VAR_3->bufs[VAR_5]->state = VAR_0;
   FUNC_5(&VAR_3->bufs[VAR_5]->done);
  }
 }
 FUNC_3(VAR_3->irqlock, VAR_4);


 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (((void*)0) == VAR_3->bufs[VAR_5])
   continue;
  VAR_3->ops->buf_release(VAR_3, VAR_3->bufs[VAR_5]);
 }
 FUNC_0(&VAR_3->stream);
}
