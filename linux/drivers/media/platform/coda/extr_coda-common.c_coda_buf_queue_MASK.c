
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vb2_v4l2_buffer {scalar_t__ sequence; } ;
struct vb2_queue {scalar_t__ type; } ;
struct vb2_buffer {struct vb2_queue* vb2_queue; } ;
struct coda_q_data {scalar_t__ fourcc; } ;
struct TYPE_10__ {int m2m_ctx; } ;
struct TYPE_7__ {int h264_level_idc; int h264_profile_idc; } ;
struct TYPE_6__ {scalar_t__ size; } ;
struct coda_ctx {scalar_t__ inst_type; TYPE_5__ fh; int qsequence; scalar_t__ initialized; int seq_init_work; TYPE_4__* dev; TYPE_3__* ops; int bitstream_mutex; TYPE_2__ params; TYPE_1__ bitstream; } ;
struct TYPE_9__ {int workqueue; } ;
struct TYPE_8__ {scalar_t__ seq_init_work; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct coda_ctx*) ;
 int FUNC_1 (struct coda_ctx*,int *) ;
 int FUNC_2 (struct coda_ctx*) ;
 int FUNC_3 (struct coda_ctx*,struct vb2_buffer*) ;
 int FUNC_4 (struct coda_ctx*,int ,int ) ;
 int FUNC_5 (int *) ;
 struct coda_q_data* FUNC_6 (struct coda_ctx*,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 struct vb2_v4l2_buffer* FUNC_10 (struct vb2_buffer*) ;
 int FUNC_11 (int ,struct vb2_v4l2_buffer*) ;
 struct coda_ctx* FUNC_12 (struct vb2_queue*) ;
 scalar_t__ FUNC_13 (struct vb2_buffer*,int ) ;
 scalar_t__ FUNC_14 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_15(struct vb2_buffer *VAR_3)
{
 struct vb2_v4l2_buffer *VAR_4 = FUNC_10(VAR_3);
 struct coda_ctx *VAR_5 = FUNC_12(VAR_3->vb2_queue);
 struct vb2_queue *VAR_6 = VAR_3->vb2_queue;
 struct coda_q_data *VAR_7;

 VAR_7 = FUNC_6(VAR_5, VAR_3->vb2_queue->type);





 if (VAR_5->bitstream.size && VAR_6->type == VAR_1) {




  if (FUNC_13(VAR_3, 0) == 0)
   FUNC_0(VAR_5);

  if (VAR_7->fourcc == VAR_2) {






   if (!VAR_5->params.h264_profile_idc) {
    FUNC_3(VAR_5, VAR_3);
    FUNC_4(VAR_5,
      VAR_5->params.h264_profile_idc,
      VAR_5->params.h264_level_idc);
   }
  }

  FUNC_7(&VAR_5->bitstream_mutex);
  FUNC_11(VAR_5->fh.m2m_ctx, VAR_4);
  if (FUNC_14(VAR_3->vb2_queue))

   FUNC_1(VAR_5, ((void*)0));
  FUNC_8(&VAR_5->bitstream_mutex);

  if (!VAR_5->initialized) {




   if (FUNC_14(VAR_3->vb2_queue) &&
       VAR_5->ops->seq_init_work) {
    FUNC_9(VAR_5->dev->workqueue,
        &VAR_5->seq_init_work);
    FUNC_5(&VAR_5->seq_init_work);
   }

   if (VAR_5->initialized)
    FUNC_2(VAR_5);
  }
 } else {
  if (VAR_5->inst_type == VAR_0 &&
      VAR_6->type == VAR_1)
   VAR_4->sequence = VAR_5->qsequence++;
  FUNC_11(VAR_5->fh.m2m_ctx, VAR_4);
 }
}
