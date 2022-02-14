
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_queue {int type; } ;
struct fdp1_job {TYPE_2__* dst; struct fdp1_field_buffer* active; struct fdp1_field_buffer* previous; } ;
struct fdp1_field_buffer {int dummy; } ;
struct TYPE_4__ {int m2m_ctx; } ;
struct fdp1_ctx {TYPE_3__* fdp1; struct fdp1_field_buffer* previous; int deint_mode; int fields_queue; int * smsk_cpu; scalar_t__* smsk_addr; int smsk_size; TYPE_1__ fh; } ;
struct TYPE_6__ {int hw_job_list; int queued_job_list; int dev; int irqlock; } ;
struct TYPE_5__ {struct vb2_v4l2_buffer* vb; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,int ,int *,scalar_t__) ;
 struct fdp1_field_buffer* FUNC_4 (struct fdp1_ctx*) ;
 int FUNC_5 (struct fdp1_ctx*,struct fdp1_field_buffer*) ;
 struct fdp1_job* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_11 (int ) ;
 struct vb2_v4l2_buffer* FUNC_12 (int ) ;
 struct fdp1_ctx* FUNC_13 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_14(struct vb2_queue *VAR_1)
{
 struct fdp1_ctx *VAR_2 = FUNC_13(VAR_1);
 struct vb2_v4l2_buffer *VAR_3;
 unsigned long VAR_4;

 while (1) {
  if (FUNC_1(VAR_1->type))
   VAR_3 = FUNC_12(VAR_2->fh.m2m_ctx);
  else
   VAR_3 = FUNC_11(VAR_2->fh.m2m_ctx);
  if (VAR_3 == ((void*)0))
   break;
  FUNC_8(&VAR_2->fdp1->irqlock, VAR_4);
  FUNC_10(VAR_3, VAR_0);
  FUNC_9(&VAR_2->fdp1->irqlock, VAR_4);
 }


 if (FUNC_1(VAR_1->type)) {

  struct fdp1_field_buffer *VAR_5;


  VAR_5 = FUNC_4(VAR_2);
  while (VAR_5 != ((void*)0)) {
   FUNC_5(VAR_2, VAR_5);
   VAR_5 = FUNC_4(VAR_2);
  }


  if (VAR_2->smsk_cpu) {
   FUNC_3(VAR_2->fdp1->dev, VAR_2->smsk_size,
       VAR_2->smsk_cpu, VAR_2->smsk_addr[0]);
   VAR_2->smsk_addr[0] = VAR_2->smsk_addr[1] = 0;
   VAR_2->smsk_cpu = ((void*)0);
  }

  FUNC_2(!FUNC_7(&VAR_2->fields_queue),
       "Buffer queue not empty");
 } else {

  struct fdp1_job *VAR_6;

  VAR_6 = FUNC_6(VAR_2->fdp1);
  while (VAR_6) {
   if (FUNC_0(VAR_2->deint_mode))
    FUNC_5(VAR_2, VAR_6->previous);
   else
    FUNC_5(VAR_2, VAR_6->active);

   FUNC_10(VAR_6->dst->vb, VAR_0);
   VAR_6->dst = ((void*)0);

   VAR_6 = FUNC_6(VAR_2->fdp1);
  }


  FUNC_5(VAR_2, VAR_2->previous);

  FUNC_2(!FUNC_7(&VAR_2->fdp1->queued_job_list),
       "Queued Job List not empty");

  FUNC_2(!FUNC_7(&VAR_2->fdp1->hw_job_list),
       "HW Job list not empty");
 }
}
