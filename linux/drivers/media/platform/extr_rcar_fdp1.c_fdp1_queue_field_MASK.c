
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fdp1_field_buffer {int list; } ;
struct fdp1_ctx {int buffers_queued; TYPE_1__* fdp1; int fields_queue; } ;
struct TYPE_2__ {int irqlock; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct fdp1_ctx *VAR_0,
        struct fdp1_field_buffer *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->fdp1->irqlock, VAR_2);
 FUNC_0(&VAR_1->list, &VAR_0->fields_queue);
 FUNC_2(&VAR_0->fdp1->irqlock, VAR_2);

 VAR_0->buffers_queued++;
}
