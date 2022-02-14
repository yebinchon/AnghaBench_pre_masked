
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {int vb2_buf; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct s5p_jpeg_ctx {scalar_t__ mode; TYPE_1__ fh; struct s5p_jpeg* jpeg; } ;
struct s5p_jpeg {int regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 struct vb2_v4l2_buffer* FUNC_1 (int ) ;
 struct vb2_v4l2_buffer* FUNC_2 (int ) ;
 unsigned int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct s5p_jpeg_ctx *VAR_1)
{
 struct s5p_jpeg *VAR_2 = VAR_1->jpeg;
 struct vb2_v4l2_buffer *VAR_3;
 unsigned int VAR_4 = 0;

 if (VAR_1->mode == VAR_0)
  VAR_3 = FUNC_1(VAR_1->fh.m2m_ctx);
 else
  VAR_3 = FUNC_2(VAR_1->fh.m2m_ctx);

 VAR_4 = FUNC_3(&VAR_3->vb2_buf, 0);
 FUNC_0(VAR_2->regs, VAR_4);
}
