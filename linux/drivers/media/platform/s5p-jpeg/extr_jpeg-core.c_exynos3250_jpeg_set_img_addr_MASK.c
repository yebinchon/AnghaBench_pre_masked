
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vb2_v4l2_buffer {int vb2_buf; } ;
struct s5p_jpeg_fmt {int colplanes; scalar_t__ fourcc; } ;
struct TYPE_6__ {int w; int h; struct s5p_jpeg_fmt* fmt; } ;
struct TYPE_5__ {int m2m_ctx; } ;
struct TYPE_4__ {struct s5p_jpeg_fmt* fmt; } ;
struct s5p_jpeg_ctx {scalar_t__ mode; TYPE_3__ cap_q; TYPE_2__ fh; TYPE_1__ out_q; struct s5p_jpeg* jpeg; } ;
struct s5p_jpeg_addr {scalar_t__ cb; scalar_t__ cr; scalar_t__ y; } ;
struct s5p_jpeg {int regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct s5p_jpeg_addr*) ;
 struct vb2_v4l2_buffer* FUNC_1 (int ) ;
 struct vb2_v4l2_buffer* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct s5p_jpeg_ctx *VAR_2)
{
 struct s5p_jpeg *VAR_3 = VAR_2->jpeg;
 struct s5p_jpeg_fmt *VAR_4;
 struct vb2_v4l2_buffer *VAR_5;
 struct s5p_jpeg_addr VAR_6 = {};
 u32 VAR_7;

 VAR_7 = VAR_2->cap_q.w * VAR_2->cap_q.h;

 if (VAR_2->mode == VAR_0) {
  VAR_5 = FUNC_2(VAR_2->fh.m2m_ctx);
  VAR_4 = VAR_2->out_q.fmt;
 } else {
  VAR_5 = FUNC_1(VAR_2->fh.m2m_ctx);
  VAR_4 = VAR_2->cap_q.fmt;
 }

 VAR_6.y = FUNC_3(&VAR_5->vb2_buf, 0);

 if (VAR_4->colplanes == 2) {
  VAR_6.cb = VAR_6.y + VAR_7;
 } else if (VAR_4->colplanes == 3) {
  VAR_6.cb = VAR_6.y + VAR_7;
  if (VAR_4->fourcc == VAR_1)
   VAR_6.cr = VAR_6.cb + VAR_7 / 4;
  else
   VAR_6.cr = VAR_6.cb + VAR_7 / 2;
 }

 FUNC_0(VAR_3->regs, &VAR_6);
}
