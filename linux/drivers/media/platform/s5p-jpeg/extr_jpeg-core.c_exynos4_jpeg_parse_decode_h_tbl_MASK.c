
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_v4l2_buffer {int vb2_buf; } ;
struct TYPE_4__ {scalar_t__ sos; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct s5p_jpeg_ctx {TYPE_2__ out_q; TYPE_1__ fh; struct s5p_jpeg* jpeg; } ;
struct s5p_jpeg_buffer {int size; scalar_t__ curr; scalar_t__ data; } ;
struct s5p_jpeg {int regs; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct s5p_jpeg_buffer*) ;
 scalar_t__ FUNC_2 (struct s5p_jpeg_buffer*,unsigned int*) ;
 struct vb2_v4l2_buffer* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct s5p_jpeg_ctx *VAR_0)
{
 struct s5p_jpeg *VAR_1 = VAR_0->jpeg;
 struct vb2_v4l2_buffer *VAR_2 = FUNC_3(VAR_0->fh.m2m_ctx);
 struct s5p_jpeg_buffer VAR_3;
 unsigned int VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_3.size = 2;
 VAR_3.data =
  (unsigned long)FUNC_4(&VAR_2->vb2_buf, 0) + VAR_0->out_q.sos + 2;
 VAR_3.curr = 0;

 VAR_4 = 0;

 if (FUNC_2(&VAR_3, &VAR_4))
  return;
 VAR_3.size = (long)VAR_4 - 2;
 VAR_3.data += 2;
 VAR_3.curr = 0;

 VAR_7 = FUNC_1(&VAR_3);
 if (VAR_7 == -1)
  return;
 while (VAR_7--) {
  VAR_5 = FUNC_1(&VAR_3);
  if (VAR_5 == -1)
   return;
  VAR_6 = FUNC_1(&VAR_3);
  if (VAR_6 == -1)
   return;
  FUNC_0(VAR_1->regs, VAR_5,
     (((VAR_6 >> 4) & 0x1) << 1) | (VAR_6 & 0x1));
 }

}
