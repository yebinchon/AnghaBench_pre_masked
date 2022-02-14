
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vdec_h264_inst {TYPE_2__* vsi; } ;
struct v4l2_rect {int height; int width; int top; int left; } ;
struct TYPE_3__ {int height; int width; int top; int left; } ;
struct TYPE_4__ {TYPE_1__ crop; } ;


 int FUNC_0 (struct vdec_h264_inst*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct vdec_h264_inst *VAR_0, struct v4l2_rect *VAR_1)
{
 VAR_1->left = VAR_0->vsi->crop.left;
 VAR_1->top = VAR_0->vsi->crop.top;
 VAR_1->width = VAR_0->vsi->crop.width;
 VAR_1->height = VAR_0->vsi->crop.height;

 FUNC_0(VAR_0, "l=%d, t=%d, w=%d, h=%d",
    VAR_1->left, VAR_1->top, VAR_1->width, VAR_1->height);
}
