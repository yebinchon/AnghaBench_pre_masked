
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {int vb2_queue; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct cedrus_ctx {TYPE_1__ fh; } ;


 struct vb2_v4l2_buffer* FUNC_0 (struct vb2_buffer*) ;
 int FUNC_1 (int ,struct vb2_v4l2_buffer*) ;
 struct cedrus_ctx* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct vb2_buffer *VAR_0)
{
 struct vb2_v4l2_buffer *VAR_1 = FUNC_0(VAR_0);
 struct cedrus_ctx *VAR_2 = FUNC_2(VAR_0->vb2_queue);

 FUNC_1(VAR_2->fh.m2m_ctx, VAR_1);
}
