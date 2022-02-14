
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_queue {scalar_t__ type; struct bdisp_ctx* drv_priv; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct bdisp_ctx {TYPE_1__ fh; TYPE_2__* bdisp_dev; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_3 (int ) ;
 struct vb2_v4l2_buffer* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct vb2_queue *VAR_2, unsigned int VAR_3)
{
 struct bdisp_ctx *VAR_4 = VAR_2->drv_priv;
 struct vb2_v4l2_buffer *VAR_5;
 int VAR_6 = FUNC_1(VAR_4->bdisp_dev->dev);

 if (VAR_6 < 0) {
  FUNC_0(VAR_4->bdisp_dev->dev, "failed to set runtime PM\n");

  if (VAR_2->type == VAR_0) {
   while ((VAR_5 = FUNC_4(VAR_4->fh.m2m_ctx)))
    FUNC_2(VAR_5, VAR_1);
  } else {
   while ((VAR_5 = FUNC_3(VAR_4->fh.m2m_ctx)))
    FUNC_2(VAR_5, VAR_1);
  }

  return VAR_6;
 }

 return 0;
}
