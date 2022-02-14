
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vdec_vp8_inst {TYPE_1__* vsi; } ;
struct vdec_pic_info {int * fb_sz; int buf_h; int buf_w; int pic_h; int pic_w; } ;
struct TYPE_2__ {struct vdec_pic_info pic; } ;


 int FUNC_0 (struct vdec_vp8_inst*,char*,int ,int ,...) ;

__attribute__((used)) static void FUNC_1(struct vdec_vp8_inst *VAR_0, struct vdec_pic_info *VAR_1)
{
 *VAR_1 = VAR_0->vsi->pic;

 FUNC_0(VAR_0, "pic(%d, %d), buf(%d, %d)",
    VAR_1->pic_w, VAR_1->pic_h, VAR_1->buf_w, VAR_1->buf_h);
 FUNC_0(VAR_0, "fb size: Y(%d), C(%d)",
    VAR_1->fb_sz[0], VAR_1->fb_sz[1]);
}
