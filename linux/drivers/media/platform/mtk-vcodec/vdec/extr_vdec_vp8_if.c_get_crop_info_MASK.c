
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vdec_vp8_inst {TYPE_2__* vsi; } ;
struct v4l2_rect {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_3__ {int pic_h; int pic_w; } ;
struct TYPE_4__ {TYPE_1__ pic; } ;


 int FUNC_0 (struct vdec_vp8_inst*,char*,scalar_t__,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct vdec_vp8_inst *VAR_0, struct v4l2_rect *VAR_1)
{
 VAR_1->left = 0;
 VAR_1->top = 0;
 VAR_1->width = VAR_0->vsi->pic.pic_w;
 VAR_1->height = VAR_0->vsi->pic.pic_h;
 FUNC_0(VAR_0, "get crop info l=%d, t=%d, w=%d, h=%d",
    VAR_1->left, VAR_1->top, VAR_1->width, VAR_1->height);
}
