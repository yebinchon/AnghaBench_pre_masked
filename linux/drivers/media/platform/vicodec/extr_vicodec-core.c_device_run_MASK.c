
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


typedef int u32 ;
struct vicodec_q_data {int sequence; } ;
struct TYPE_10__ {int m2m_dev; } ;
struct TYPE_9__ {int m2m_dev; } ;
struct TYPE_8__ {int m2m_dev; } ;
struct vicodec_dev {TYPE_4__ stateful_dec; TYPE_3__ stateless_dec; TYPE_2__ stateful_enc; } ;
struct TYPE_12__ {int m2m_ctx; } ;
struct vicodec_ctx {int comp_has_next_frame; int is_draining; int has_stopped; scalar_t__ cur_buf_offset; int comp_has_frame; TYPE_6__ fh; scalar_t__ is_stateless; scalar_t__ is_enc; int hdl; int lock; scalar_t__ comp_magic_cnt; scalar_t__ header_size; scalar_t__ comp_size; struct vb2_v4l2_buffer* last_src_buf; struct vicodec_dev* dev; } ;
struct TYPE_7__ {struct media_request* req; } ;
struct TYPE_11__ {TYPE_1__ req_obj; } ;
struct vb2_v4l2_buffer {scalar_t__ sequence; TYPE_5__ vb2_buf; int flags; } ;
struct media_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct vicodec_ctx*,struct vb2_v4l2_buffer*,struct vb2_v4l2_buffer*) ;
 struct vicodec_q_data* FUNC_1 (struct vicodec_ctx*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct media_request*,int *) ;
 int FUNC_5 (TYPE_6__*,int *) ;
 int FUNC_6 (struct vb2_v4l2_buffer*,struct vb2_v4l2_buffer*,int) ;
 int FUNC_7 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 struct vb2_v4l2_buffer* FUNC_10 (int ) ;
 struct vb2_v4l2_buffer* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (TYPE_5__*,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_13(void *VAR_6)
{
 struct vicodec_ctx *VAR_7 = VAR_6;
 struct vicodec_dev *VAR_8 = VAR_7->dev;
 struct vb2_v4l2_buffer *VAR_9, *VAR_10;
 struct vicodec_q_data *VAR_11, *VAR_12;
 u32 VAR_13;
 struct media_request *VAR_14;

 VAR_9 = FUNC_10(VAR_7->fh.m2m_ctx);
 VAR_10 = FUNC_8(VAR_7->fh.m2m_ctx);
 VAR_14 = VAR_9->vb2_buf.req_obj.req;

 VAR_11 = FUNC_1(VAR_7, VAR_2);
 VAR_12 = FUNC_1(VAR_7, VAR_1);

 VAR_13 = VAR_3;
 if (FUNC_0(VAR_7, VAR_9, VAR_10))
  VAR_13 = VAR_4;
 else
  VAR_10->sequence = VAR_12->sequence++;
 VAR_10->flags &= ~VAR_0;
 FUNC_6(VAR_9, VAR_10, 0);

 FUNC_2(VAR_7->lock);
 if (!VAR_7->comp_has_next_frame && VAR_9 == VAR_7->last_src_buf) {
  VAR_10->flags |= VAR_0;
  FUNC_5(&VAR_7->fh, &VAR_5);
  VAR_7->is_draining = 0;
  VAR_7->has_stopped = 1;
 }
 if (VAR_7->is_enc || VAR_7->is_stateless) {
  VAR_9->sequence = VAR_11->sequence++;
  VAR_9 = FUNC_11(VAR_7->fh.m2m_ctx);
  FUNC_7(VAR_9, VAR_13);
 } else if (FUNC_12(&VAR_9->vb2_buf, 0) == VAR_7->cur_buf_offset) {
  VAR_9->sequence = VAR_11->sequence++;
  VAR_9 = FUNC_11(VAR_7->fh.m2m_ctx);
  FUNC_7(VAR_9, VAR_13);
  VAR_7->cur_buf_offset = 0;
  VAR_7->comp_has_next_frame = 0;
 }
 FUNC_7(VAR_10, VAR_13);

 VAR_7->comp_size = 0;
 VAR_7->header_size = 0;
 VAR_7->comp_magic_cnt = 0;
 VAR_7->comp_has_frame = 0;
 FUNC_3(VAR_7->lock);
 if (VAR_7->is_stateless && VAR_14)
  FUNC_4(VAR_14, &VAR_7->hdl);

 if (VAR_7->is_enc)
  FUNC_9(VAR_8->stateful_enc.m2m_dev, VAR_7->fh.m2m_ctx);
 else if (VAR_7->is_stateless)
  FUNC_9(VAR_8->stateless_dec.m2m_dev,
        VAR_7->fh.m2m_ctx);
 else
  FUNC_9(VAR_8->stateful_dec.m2m_dev, VAR_7->fh.m2m_ctx);
}
