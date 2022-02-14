
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s5p_jpeg_q_data {int w; int h; int size; TYPE_2__* fmt; } ;
struct TYPE_3__ {int w; int h; } ;
struct s5p_jpeg_ctx {TYPE_1__ out_q; struct s5p_jpeg_q_data cap_q; } ;
struct TYPE_4__ {int depth; int v_align; int h_align; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct s5p_jpeg_ctx*,int*,int ,int ,int ,int*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct s5p_jpeg_ctx *VAR_4)
{
 struct s5p_jpeg_q_data *VAR_5 = &VAR_4->cap_q;

 VAR_5->w = VAR_4->out_q.w;
 VAR_5->h = VAR_4->out_q.h;
 FUNC_0(VAR_4, &VAR_5->w, VAR_3,
          VAR_1, VAR_5->fmt->h_align,
          &VAR_5->h, VAR_2,
          VAR_0, VAR_5->fmt->v_align);

 VAR_5->size = VAR_5->w * VAR_5->h * VAR_5->fmt->depth >> 3;
}
