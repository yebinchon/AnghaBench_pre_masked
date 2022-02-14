
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_queue {int type; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct jpu_ctx {TYPE_2__* jpu; TYPE_1__ fh; } ;
struct TYPE_4__ {int lock; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_4 (int ) ;
 struct vb2_v4l2_buffer* FUNC_5 (int ) ;
 struct jpu_ctx* FUNC_6 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_7(struct vb2_queue *VAR_1)
{
 struct jpu_ctx *VAR_2 = FUNC_6(VAR_1);
 struct vb2_v4l2_buffer *VAR_3;
 unsigned long VAR_4;

 for (;;) {
  if (FUNC_0(VAR_1->type))
   VAR_3 = FUNC_5(VAR_2->fh.m2m_ctx);
  else
   VAR_3 = FUNC_4(VAR_2->fh.m2m_ctx);
  if (VAR_3 == ((void*)0))
   return;
  FUNC_1(&VAR_2->jpu->lock, VAR_4);
  FUNC_3(VAR_3, VAR_0);
  FUNC_2(&VAR_2->jpu->lock, VAR_4);
 }
}
