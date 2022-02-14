
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_v4l2_buffer {int vb2_buf; } ;
struct TYPE_6__ {scalar_t__ sos; } ;
struct TYPE_4__ {int m2m_ctx; } ;
struct s5p_jpeg_ctx {scalar_t__ mode; TYPE_3__ out_q; TYPE_1__ fh; struct s5p_jpeg* jpeg; } ;
struct s5p_jpeg {int regs; TYPE_2__* variant; } ;
struct TYPE_5__ {scalar_t__ version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,unsigned int) ;
 struct vb2_v4l2_buffer* FUNC_1 (int ) ;
 struct vb2_v4l2_buffer* FUNC_2 (int ) ;
 unsigned int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct s5p_jpeg_ctx *VAR_3)
{
 struct s5p_jpeg *VAR_4 = VAR_3->jpeg;
 struct vb2_v4l2_buffer *VAR_5;
 unsigned int VAR_6 = 0;

 if (VAR_3->mode == VAR_1)
  VAR_5 = FUNC_1(VAR_3->fh.m2m_ctx);
 else
  VAR_5 = FUNC_2(VAR_3->fh.m2m_ctx);

 VAR_6 = FUNC_3(&VAR_5->vb2_buf, 0);
 if (VAR_4->variant->version == VAR_2 &&
     VAR_3->mode == VAR_0)
  VAR_6 += VAR_3->out_q.sos;
 FUNC_0(VAR_4->regs, VAR_6);
}
