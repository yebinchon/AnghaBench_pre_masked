
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_v4l2_buffer {int vb2_buf; } ;
struct TYPE_4__ {scalar_t__ sof; int sof_len; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct s5p_jpeg_ctx {TYPE_2__ out_q; TYPE_1__ fh; struct s5p_jpeg* jpeg; } ;
struct s5p_jpeg_buffer {scalar_t__ curr; scalar_t__ data; int size; } ;
struct s5p_jpeg {int regs; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct s5p_jpeg_buffer*) ;
 int FUNC_3 (struct s5p_jpeg_buffer*,int) ;
 struct vb2_v4l2_buffer* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct s5p_jpeg_ctx *VAR_0)
{
 struct s5p_jpeg *VAR_1 = VAR_0->jpeg;
 struct vb2_v4l2_buffer *VAR_2 = FUNC_4(VAR_0->fh.m2m_ctx);
 struct s5p_jpeg_buffer VAR_3;
 int VAR_4, VAR_5, VAR_6;

 VAR_3.size = VAR_0->out_q.sof_len;
 VAR_3.data =
  (unsigned long)FUNC_5(&VAR_2->vb2_buf, 0) + VAR_0->out_q.sof;
 VAR_3.curr = 0;

 FUNC_3(&VAR_3, 5);
 VAR_6 = FUNC_2(&VAR_3);
 if (VAR_6 == -1)
  return;

 FUNC_1(VAR_1->regs, VAR_6);

 while (VAR_6--) {
  VAR_4 = FUNC_2(&VAR_3);
  if (VAR_4 == -1)
   return;
  FUNC_3(&VAR_3, 1);
  VAR_5 = FUNC_2(&VAR_3);
  if (VAR_5 == -1)
   return;
  FUNC_0(VAR_1->regs, VAR_4, VAR_5);
 }
}
