
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_v4l2_buffer {int vb2_buf; } ;
struct TYPE_5__ {int n; int* len; scalar_t__* marker; } ;
struct TYPE_6__ {TYPE_2__ dqt; } ;
struct TYPE_4__ {int m2m_ctx; } ;
struct s5p_jpeg_ctx {TYPE_3__ out_q; TYPE_1__ fh; struct s5p_jpeg* jpeg; } ;
struct s5p_jpeg_buffer {int size; int curr; scalar_t__ data; } ;
struct s5p_jpeg {scalar_t__ regs; } ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (struct s5p_jpeg_buffer*) ;
 struct vb2_v4l2_buffer* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct s5p_jpeg_ctx *VAR_0)
{
 struct s5p_jpeg *VAR_1 = VAR_0->jpeg;
 struct vb2_v4l2_buffer *VAR_2 = FUNC_2(VAR_0->fh.m2m_ctx);
 struct s5p_jpeg_buffer VAR_3;
 unsigned int VAR_4;
 int VAR_5, VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0->out_q.dqt.n; ++VAR_7) {
  VAR_3.size = VAR_0->out_q.dqt.len[VAR_7];
  VAR_3.data = (unsigned long)FUNC_3(&VAR_2->vb2_buf, 0) +
       VAR_0->out_q.dqt.marker[VAR_7];
  VAR_3.curr = 0;

  VAR_4 = 0;
  while (VAR_3.size - VAR_3.curr >= 65) {
   char VAR_8;

   VAR_5 = FUNC_1(&VAR_3);
   if (VAR_5 == -1)
    return;
   VAR_8 = VAR_5 & 0xf;

   if ((VAR_5 >> 4) & 0xf)
    return;
   for (VAR_6 = 0; VAR_6 < 64; ++VAR_6) {
    VAR_5 = FUNC_1(&VAR_3);
    if (VAR_5 == -1)
     return;
    VAR_4 |= VAR_5 << ((VAR_6 % 4) * 8);
    if ((VAR_6 + 1) % 4 == 0) {
     FUNC_4(VAR_4, VAR_1->regs +
     FUNC_0(VAR_8) + (VAR_6 / 4) * 4);
     VAR_4 = 0;
    }
   }
   VAR_4 = 0;
  }
 }
}
