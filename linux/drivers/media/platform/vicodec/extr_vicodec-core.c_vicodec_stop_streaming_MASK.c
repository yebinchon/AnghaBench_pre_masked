
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * luma; int * buf; } ;
struct TYPE_5__ {TYPE_1__ ref_frame; } ;
struct TYPE_6__ {int m2m_ctx; } ;
struct vicodec_ctx {int is_draining; int next_is_last; int has_stopped; int first_source_change_sent; int source_changed; scalar_t__ comp_has_next_frame; scalar_t__ comp_has_frame; scalar_t__ comp_magic_cnt; scalar_t__ header_size; scalar_t__ comp_size; scalar_t__ cur_buf_offset; scalar_t__ is_enc; scalar_t__ comp_max_size; TYPE_2__ state; int is_stateless; int lock; TYPE_3__ fh; int * last_src_buf; } ;
struct vb2_v4l2_buffer {int vb2_buf; int flags; } ;
struct vb2_queue {int type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 struct vb2_v4l2_buffer* FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 struct vicodec_ctx* FUNC_7 (struct vb2_queue*) ;
 int VAR_3 ;
 int FUNC_8 (struct vb2_queue*,int ) ;

__attribute__((used)) static void FUNC_9(struct vb2_queue *VAR_4)
{
 struct vicodec_ctx *VAR_5 = FUNC_7(VAR_4);

 FUNC_8(VAR_4, VAR_2);

 if (FUNC_0(VAR_4->type)) {
  if (VAR_5->is_draining) {
   struct vb2_v4l2_buffer *VAR_6;

   FUNC_2(VAR_5->lock);
   VAR_5->last_src_buf = ((void*)0);
   VAR_6 = FUNC_5(VAR_5->fh.m2m_ctx);
   if (!VAR_6) {
    VAR_5->next_is_last = 1;
   } else {
    VAR_6->flags |= VAR_0;
    FUNC_6(&VAR_6->vb2_buf, VAR_1);
    VAR_5->is_draining = 0;
    VAR_5->has_stopped = 1;
    FUNC_4(&VAR_5->fh, &VAR_3);
   }
   FUNC_3(VAR_5->lock);
  }
 } else {
  VAR_5->is_draining = 0;
  VAR_5->has_stopped = 0;
  VAR_5->next_is_last = 0;
 }
 if (!VAR_5->is_enc && FUNC_0(VAR_4->type))
  VAR_5->first_source_change_sent = 0;

 if ((!FUNC_0(VAR_4->type) && !VAR_5->is_enc) ||
     (FUNC_0(VAR_4->type) && VAR_5->is_enc)) {
  if (!VAR_5->is_stateless)
   FUNC_1(VAR_5->state.ref_frame.buf);
  VAR_5->state.ref_frame.buf = ((void*)0);
  VAR_5->state.ref_frame.luma = ((void*)0);
  VAR_5->comp_max_size = 0;
  VAR_5->source_changed = 0;
 }
 if (FUNC_0(VAR_4->type) && !VAR_5->is_enc) {
  VAR_5->cur_buf_offset = 0;
  VAR_5->comp_size = 0;
  VAR_5->header_size = 0;
  VAR_5->comp_magic_cnt = 0;
  VAR_5->comp_has_frame = 0;
  VAR_5->comp_has_next_frame = 0;
 }
}
