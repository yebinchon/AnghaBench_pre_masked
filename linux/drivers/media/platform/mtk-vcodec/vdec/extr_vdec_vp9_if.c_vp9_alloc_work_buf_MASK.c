
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {unsigned long va; unsigned long pa; unsigned int sz; } ;
struct TYPE_7__ {unsigned long va; unsigned long pa; unsigned int sz; } ;
struct vdec_vp9_vsi {unsigned int pic_w; unsigned int pic_h; int buf_w; int buf_h; int sf_next_ref_fb_idx; TYPE_3__ seg_id_buf; TYPE_2__ mv_buf; int resolution_changed; } ;
struct mtk_vcodec_mem {int size; scalar_t__ dma_addr; scalar_t__ va; } ;
struct vdec_vp9_inst {TYPE_4__* ctx; struct mtk_vcodec_mem seg_id_buf; struct mtk_vcodec_mem mv_buf; struct vdec_vp9_vsi* vsi; } ;
struct TYPE_9__ {TYPE_1__* dev; } ;
struct TYPE_6__ {int dec_capability; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vdec_vp9_inst*,char*,int ,unsigned int,unsigned int,int,int) ;
 int FUNC_1 (struct vdec_vp9_inst*,char*,...) ;
 int FUNC_2 (TYPE_4__*,struct mtk_vcodec_mem*) ;
 int FUNC_3 (TYPE_4__*,struct mtk_vcodec_mem*) ;
 int FUNC_4 (struct vdec_vp9_inst*) ;
 int FUNC_5 (struct vdec_vp9_inst*) ;

__attribute__((used)) static bool FUNC_6(struct vdec_vp9_inst *VAR_6)
{
 struct vdec_vp9_vsi *VAR_7 = VAR_6->vsi;
 int VAR_8;
 struct mtk_vcodec_mem *VAR_9;

 unsigned int VAR_10;
 unsigned int VAR_11;


 if (!(VAR_6->ctx->dev->dec_capability &
  VAR_2)) {
  VAR_10 = VAR_4;
  VAR_11 = VAR_3;
 } else {
  VAR_10 = VAR_1;
  VAR_11 = VAR_0;
 }

 if ((VAR_7->pic_w > VAR_10) ||
  (VAR_7->pic_h > VAR_11)) {
  FUNC_1(VAR_6, "Invalid w/h %d/%d",
    VAR_7->pic_w, VAR_7->pic_h);
  return 0;
 }

 FUNC_0(VAR_6, "BUF CHG(%d): w/h/sb_w/sb_h=%d/%d/%d/%d",
   VAR_7->resolution_changed,
   VAR_7->pic_w,
   VAR_7->pic_h,
   VAR_7->buf_w,
   VAR_7->buf_h);

 VAR_9 = &VAR_6->mv_buf;
 if (VAR_9->va)
  FUNC_3(VAR_6->ctx, VAR_9);

 VAR_9->size = ((VAR_7->buf_w / 64) *
      (VAR_7->buf_h / 64) + 2) * 36 * 16;
 VAR_8 = FUNC_2(VAR_6->ctx, VAR_9);
 if (VAR_8) {
  VAR_9->size = 0;
  FUNC_1(VAR_6, "Cannot allocate mv_buf");
  return 0;
 }

 VAR_7->mv_buf.va = (unsigned long)VAR_9->va;
 VAR_7->mv_buf.pa = (unsigned long)VAR_9->dma_addr;
 VAR_7->mv_buf.sz = (unsigned int)VAR_9->size;


 VAR_9 = &VAR_6->seg_id_buf;
 if (VAR_9->va)
  FUNC_3(VAR_6->ctx, VAR_9);

 VAR_9->size = VAR_5;
 VAR_8 = FUNC_2(VAR_6->ctx, VAR_9);
 if (VAR_8) {
  VAR_9->size = 0;
  FUNC_1(VAR_6, "Cannot allocate seg_id_buf");
  return 0;
 }

 VAR_7->seg_id_buf.va = (unsigned long)VAR_9->va;
 VAR_7->seg_id_buf.pa = (unsigned long)VAR_9->dma_addr;
 VAR_7->seg_id_buf.sz = (unsigned int)VAR_9->size;


 FUNC_4(VAR_6);
 VAR_7->sf_next_ref_fb_idx = FUNC_5(VAR_6);

 return 1;
}
