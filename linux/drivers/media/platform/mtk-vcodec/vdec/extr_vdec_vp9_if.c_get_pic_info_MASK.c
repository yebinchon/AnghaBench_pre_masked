
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vdec_vp9_inst {TYPE_1__* vsi; } ;
struct vdec_pic_info {scalar_t__* fb_sz; int buf_h; int buf_w; int pic_h; int pic_w; } ;
struct TYPE_2__ {int buf_h; int buf_w; int pic_h; int pic_w; scalar_t__ buf_len_sz_c; scalar_t__ buf_sz_c_bs; scalar_t__ buf_len_sz_y; scalar_t__ buf_sz_y_bs; } ;


 int FUNC_0 (struct vdec_vp9_inst*,char*,scalar_t__,scalar_t__,...) ;

__attribute__((used)) static void FUNC_1(struct vdec_vp9_inst *VAR_0, struct vdec_pic_info *VAR_1)
{
 VAR_1->fb_sz[0] = VAR_0->vsi->buf_sz_y_bs + VAR_0->vsi->buf_len_sz_y;
 VAR_1->fb_sz[1] = VAR_0->vsi->buf_sz_c_bs + VAR_0->vsi->buf_len_sz_c;

 VAR_1->pic_w = VAR_0->vsi->pic_w;
 VAR_1->pic_h = VAR_0->vsi->pic_h;
 VAR_1->buf_w = VAR_0->vsi->buf_w;
 VAR_1->buf_h = VAR_0->vsi->buf_h;

 FUNC_0(VAR_0, "pic(%d, %d), buf(%d, %d)",
   VAR_1->pic_w, VAR_1->pic_h, VAR_1->buf_w, VAR_1->buf_h);
 FUNC_0(VAR_0, "fb size: Y(%d), C(%d)",
  VAR_1->fb_sz[0],
  VAR_1->fb_sz[1]);
}
