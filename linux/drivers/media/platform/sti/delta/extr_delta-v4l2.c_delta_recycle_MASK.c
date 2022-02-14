
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct delta_frame {scalar_t__ dts; scalar_t__ flags; int state; struct vb2_v4l2_buffer vbuf; } ;
struct delta_dec {int dummy; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct delta_ctx {TYPE_1__ fh; struct delta_dec* dec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct delta_dec const*,int ,struct delta_ctx*,struct delta_frame*) ;
 int VAR_3 ;
 int FUNC_1 (int ,struct vb2_v4l2_buffer*) ;

__attribute__((used)) static int FUNC_2(struct delta_ctx *VAR_4, struct delta_frame *VAR_5)
{
 const struct delta_dec *VAR_6 = VAR_4->dec;


 FUNC_0(VAR_6, VAR_3, VAR_4, VAR_5);


 VAR_5->state &= ~VAR_2;


 if (VAR_5->state == VAR_0) {
  struct vb2_v4l2_buffer *VAR_7 = &VAR_5->vbuf;

  FUNC_1(VAR_4->fh.m2m_ctx, VAR_7);
  VAR_5->state = VAR_1;
 }


 VAR_5->flags = 0;
 VAR_5->dts = 0;

 return 0;
}
