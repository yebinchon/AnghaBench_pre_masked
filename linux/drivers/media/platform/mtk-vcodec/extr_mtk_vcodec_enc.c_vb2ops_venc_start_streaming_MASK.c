
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct venc_enc_param {int dummy; } ;
struct vb2_queue {int num_buffers; int type; } ;
struct vb2_buffer {scalar_t__ state; } ;
struct TYPE_12__ {scalar_t__ seq_hdr_mode; } ;
struct mtk_vcodec_ctx {scalar_t__ state; int id; TYPE_6__ enc_params; TYPE_5__* q_data; int param_change; TYPE_3__* m2m_ctx; } ;
struct TYPE_11__ {TYPE_4__* fmt; } ;
struct TYPE_10__ {scalar_t__ fourcc; } ;
struct TYPE_8__ {int q; } ;
struct TYPE_7__ {int q; } ;
struct TYPE_9__ {TYPE_2__ out_q_ctx; TYPE_1__ cap_q_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,char*,int ,int,int ,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct mtk_vcodec_ctx*,struct venc_enc_param*) ;
 int FUNC_4 (struct vb2_buffer*) ;
 int FUNC_5 (int ,int ) ;
 struct vb2_buffer* FUNC_6 (struct vb2_queue*,int) ;
 struct mtk_vcodec_ctx* FUNC_7 (struct vb2_queue*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct mtk_vcodec_ctx*,int ,struct venc_enc_param*) ;

__attribute__((used)) static int FUNC_10(struct vb2_queue *VAR_12, unsigned int VAR_13)
{
 struct mtk_vcodec_ctx *VAR_14 = FUNC_7(VAR_12);
 struct venc_enc_param VAR_15;
 int VAR_16;
 int VAR_17;




 if ((VAR_14->state == VAR_3) || (VAR_14->state == VAR_4)) {
  VAR_16 = -VAR_0;
  goto err_set_param;
 }


 if (FUNC_0(VAR_12->type)) {
  if (!FUNC_8(&VAR_14->m2m_ctx->cap_q_ctx.q))
   return 0;
 } else {
  if (!FUNC_8(&VAR_14->m2m_ctx->out_q_ctx.q))
   return 0;
 }

 FUNC_3(VAR_14, &VAR_15);
 VAR_16 = FUNC_9(VAR_14, VAR_10, &VAR_15);
 if (VAR_16) {
  FUNC_2("venc_if_set_param failed=%d", VAR_16);
  VAR_14->state = VAR_3;
  goto err_set_param;
 }
 VAR_14->param_change = VAR_1;

 if ((VAR_14->q_data[VAR_2].fmt->fourcc == VAR_7) &&
     (VAR_14->enc_params.seq_hdr_mode !=
    VAR_6)) {
  VAR_16 = FUNC_9(VAR_14,
     VAR_11,
     ((void*)0));
  if (VAR_16) {
   FUNC_2("venc_if_set_param failed=%d", VAR_16);
   VAR_14->state = VAR_3;
   goto err_set_param;
  }
  VAR_14->state = VAR_5;
 }

 return 0;

err_set_param:
 for (VAR_17 = 0; VAR_17 < VAR_12->num_buffers; ++VAR_17) {
  struct vb2_buffer *VAR_18 = FUNC_6(VAR_12, VAR_17);





  if (VAR_18->state == VAR_8) {
   FUNC_1(0, "[%d] id=%d, type=%d, %d -> VB2_BUF_STATE_QUEUED",
     VAR_14->id, VAR_17, VAR_12->type,
     (int)VAR_18->state);
   FUNC_5(FUNC_4(VAR_18),
       VAR_9);
  }
 }

 return VAR_16;
}
