
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int last_buffer_dequeued; int done_wq; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct coda_ctx {TYPE_1__ fh; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct coda_ctx*,char*) ;
 struct vb2_queue* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct coda_ctx *VAR_1)
{
 struct vb2_queue *VAR_2;

 FUNC_0(1, VAR_1, "waking up capture queue\n");

 VAR_2 = FUNC_1(VAR_1->fh.m2m_ctx, VAR_0);
 VAR_2->last_buffer_dequeued = 1;
 FUNC_2(&VAR_2->done_wq);
}
