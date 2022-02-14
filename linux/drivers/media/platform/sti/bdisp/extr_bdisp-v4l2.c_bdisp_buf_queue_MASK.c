
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {int vb2_queue; } ;
struct TYPE_4__ {scalar_t__ m2m_ctx; } ;
struct bdisp_ctx {TYPE_2__ fh; TYPE_1__* bdisp_dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct vb2_v4l2_buffer* FUNC_1 (struct vb2_buffer*) ;
 int FUNC_2 (scalar_t__,struct vb2_v4l2_buffer*) ;
 int FUNC_3 (struct vb2_buffer*,int ) ;
 struct bdisp_ctx* FUNC_4 (int ) ;
 int FUNC_5 (struct vb2_buffer*,int ) ;

__attribute__((used)) static void FUNC_6(struct vb2_buffer *VAR_1)
{
 struct vb2_v4l2_buffer *VAR_2 = FUNC_1(VAR_1);
 struct bdisp_ctx *VAR_3 = FUNC_4(VAR_1->vb2_queue);


 if (!FUNC_5(VAR_1, 0)) {
  FUNC_0(VAR_3->bdisp_dev->dev, "0 data buffer, skip it\n");
  FUNC_3(VAR_1, VAR_0);
  return;
 }

 if (VAR_3->fh.m2m_ctx)
  FUNC_2(VAR_3->fh.m2m_ctx, VAR_2);
}
