
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_buffer {TYPE_2__* vb2_queue; } ;
struct bdisp_frame {int sizeimage; } ;
struct bdisp_ctx {TYPE_1__* bdisp_dev; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ FUNC_0 (struct bdisp_frame*) ;
 int FUNC_1 (struct bdisp_frame*) ;
 int VAR_0 ;
 struct bdisp_frame* FUNC_2 (struct bdisp_ctx*,int ) ;
 int FUNC_3 (int ,char*,struct bdisp_frame*) ;
 struct bdisp_ctx* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct vb2_buffer*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct vb2_buffer *VAR_1)
{
 struct bdisp_ctx *VAR_2 = FUNC_4(VAR_1->vb2_queue);
 struct bdisp_frame *VAR_3 = FUNC_2(VAR_2, VAR_1->vb2_queue->type);

 if (FUNC_0(VAR_3)) {
  FUNC_3(VAR_2->bdisp_dev->dev, "Invalid frame (%p)\n", VAR_3);
  return FUNC_1(VAR_3);
 }

 if (VAR_1->vb2_queue->type == VAR_0)
  FUNC_5(VAR_1, 0, VAR_3->sizeimage);

 return 0;
}
