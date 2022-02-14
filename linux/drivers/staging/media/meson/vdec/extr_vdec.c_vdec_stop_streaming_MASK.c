
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_queue {scalar_t__ type; } ;
struct amvdec_session {scalar_t__ status; scalar_t__ streamon_cap; int m2m_ctx; scalar_t__ streamon_out; int * priv; int vififo_paddr; int vififo_vaddr; int vififo_size; struct amvdec_core* core; int recycle_thread; } ;
struct amvdec_core {int * cur_sess; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_4 (int ) ;
 struct vb2_v4l2_buffer* FUNC_5 (int ) ;
 struct amvdec_session* FUNC_6 (struct vb2_queue*) ;
 scalar_t__ FUNC_7 (struct amvdec_session*) ;
 int FUNC_8 (struct amvdec_session*) ;
 int FUNC_9 (struct amvdec_session*) ;
 int FUNC_10 (struct amvdec_session*) ;
 int FUNC_11 (struct amvdec_session*) ;

__attribute__((used)) static void FUNC_12(struct vb2_queue *VAR_5)
{
 struct amvdec_session *VAR_6 = FUNC_6(VAR_5);
 struct amvdec_core *VAR_7 = VAR_6->core;
 struct vb2_v4l2_buffer *VAR_8;

 if (VAR_6->status == VAR_1 ||
     (VAR_6->status == VAR_0 &&
      (!VAR_6->streamon_out || !VAR_6->streamon_cap))) {
  if (FUNC_7(VAR_6))
   FUNC_2(VAR_6->recycle_thread);

  FUNC_9(VAR_6);
  FUNC_8(VAR_6);
  FUNC_0(VAR_6->core->dev, VAR_6->vififo_size,
      VAR_6->vififo_vaddr, VAR_6->vififo_paddr);
  FUNC_11(VAR_6);
  FUNC_10(VAR_6);
  FUNC_1(VAR_6->priv);
  VAR_6->priv = ((void*)0);
  VAR_7->cur_sess = ((void*)0);
  VAR_6->status = VAR_2;
 }

 if (VAR_5->type == VAR_3) {
  while ((VAR_8 = FUNC_5(VAR_6->m2m_ctx)))
   FUNC_3(VAR_8, VAR_4);

  VAR_6->streamon_out = 0;
 } else {
  while ((VAR_8 = FUNC_4(VAR_6->m2m_ctx)))
   FUNC_3(VAR_8, VAR_4);

  VAR_6->streamon_cap = 0;
 }
}
