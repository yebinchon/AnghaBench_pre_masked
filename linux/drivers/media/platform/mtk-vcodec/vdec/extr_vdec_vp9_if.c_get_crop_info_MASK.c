
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vdec_vp9_inst {TYPE_1__* vsi; } ;
struct v4l2_rect {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_2__ {int pic_h; int pic_w; } ;


 int FUNC_0 (struct vdec_vp9_inst*,char*,scalar_t__,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct vdec_vp9_inst *VAR_0, struct v4l2_rect *VAR_1)
{
 VAR_1->left = 0;
 VAR_1->top = 0;
 VAR_1->width = VAR_0->vsi->pic_w;
 VAR_1->height = VAR_0->vsi->pic_h;
 FUNC_0(VAR_0, "get crop info l=%d, t=%d, w=%d, h=%d\n",
    VAR_1->left, VAR_1->top, VAR_1->width, VAR_1->height);
}
