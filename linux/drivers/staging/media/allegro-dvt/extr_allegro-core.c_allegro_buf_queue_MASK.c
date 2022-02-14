
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {TYPE_2__* vb2_queue; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct allegro_channel {TYPE_1__ fh; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct allegro_channel*,struct vb2_v4l2_buffer*,int ) ;
 scalar_t__ FUNC_1 (struct allegro_channel*) ;
 struct vb2_v4l2_buffer* FUNC_2 (struct vb2_buffer*) ;
 int FUNC_3 (int ,struct vb2_v4l2_buffer*) ;
 struct allegro_channel* FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct vb2_buffer *VAR_3)
{
 struct allegro_channel *VAR_4 = FUNC_4(VAR_3->vb2_queue);
 struct vb2_v4l2_buffer *VAR_5 = FUNC_2(VAR_3);

 if (FUNC_1(VAR_4) == VAR_0 &&
     VAR_3->vb2_queue->type == VAR_1) {
  FUNC_0(VAR_4, VAR_5, VAR_2);
  return;
 }

 FUNC_3(VAR_4->fh.m2m_ctx, VAR_5);
}
