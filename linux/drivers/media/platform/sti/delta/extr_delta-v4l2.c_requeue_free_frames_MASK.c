
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct delta_frame {scalar_t__ state; struct vb2_v4l2_buffer vbuf; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct delta_ctx {unsigned int nb_of_frames; TYPE_1__ fh; struct delta_frame** frames; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct vb2_v4l2_buffer*) ;

__attribute__((used)) static void FUNC_1(struct delta_ctx *VAR_2)
{
 struct vb2_v4l2_buffer *VAR_3;
 struct delta_frame *VAR_4;
 unsigned int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_2->nb_of_frames; VAR_5++) {
  VAR_4 = VAR_2->frames[VAR_5];
  if (VAR_4->state == VAR_0) {
   VAR_3 = &VAR_4->vbuf;
   FUNC_0(VAR_2->fh.m2m_ctx, VAR_3);
   VAR_4->state = VAR_1;
  }
 }
}
