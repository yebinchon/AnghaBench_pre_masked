
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct vb2_v4l2_buffer {scalar_t__ sequence; } ;
struct vb2_buffer {scalar_t__ state; TYPE_3__* vb2_queue; } ;
struct TYPE_5__ {int width; int height; } ;
struct jpu_q_data {TYPE_2__* fmtinfo; TYPE_1__ format; } ;
struct jpu_ctx {int encoder; struct jpu_q_data out_q; } ;
struct jpu_buffer {size_t compr_quality; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
typedef int __be16 ;
struct TYPE_8__ {int sequence; } ;
struct TYPE_7__ {int type; } ;
struct TYPE_6__ {int subsampling; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int * VAR_5 ;
 TYPE_4__* FUNC_2 (struct jpu_ctx*,int) ;
 int FUNC_3 (int *,int ,int ) ;
 struct vb2_v4l2_buffer* FUNC_4 (struct vb2_buffer*) ;
 struct jpu_ctx* FUNC_5 (TYPE_3__*) ;
 int * FUNC_6 (struct vb2_buffer*,int ) ;
 struct jpu_buffer* FUNC_7 (struct vb2_v4l2_buffer*) ;

__attribute__((used)) static void FUNC_8(struct vb2_buffer *VAR_6)
{
 struct vb2_v4l2_buffer *VAR_7 = FUNC_4(VAR_6);
 struct jpu_buffer *VAR_8 = FUNC_7(VAR_7);
 struct jpu_ctx *VAR_9 = FUNC_5(VAR_6->vb2_queue);
 struct jpu_q_data *VAR_10 = &VAR_9->out_q;
 enum v4l2_buf_type VAR_11 = VAR_6->vb2_queue->type;
 u8 *VAR_12;

 if (VAR_6->state == VAR_4)
  VAR_7->sequence = FUNC_2(VAR_9, VAR_11)->sequence++;

 if (!VAR_9->encoder || VAR_6->state != VAR_4 ||
     FUNC_0(VAR_11))
  return;

 VAR_12 = FUNC_6(VAR_6, 0);

 FUNC_3(VAR_12, VAR_5[VAR_8->compr_quality], VAR_0);
 *(__be16 *)(VAR_12 + VAR_1) =
     FUNC_1(VAR_10->format.height);
 *(__be16 *)(VAR_12 + VAR_3) =
     FUNC_1(VAR_10->format.width);
 *(VAR_12 + VAR_2) = VAR_10->fmtinfo->subsampling;
}
