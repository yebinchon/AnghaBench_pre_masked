
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vdec_pic_info {int buf_h; int buf_w; } ;
struct vdec_h264_inst {TYPE_1__* vsi; int ctx; struct mtk_vcodec_mem* mv_buf; } ;
struct mtk_vcodec_mem {unsigned int size; int dma_addr; scalar_t__ va; } ;
struct TYPE_2__ {int * mv_buf_dma; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct vdec_h264_inst*,char*) ;
 int FUNC_2 (int ,struct mtk_vcodec_mem*) ;
 int FUNC_3 (int ,struct mtk_vcodec_mem*) ;

__attribute__((used)) static int FUNC_4(struct vdec_h264_inst *VAR_1, struct vdec_pic_info *VAR_2)
{
 int VAR_3;
 int VAR_4;
 struct mtk_vcodec_mem *VAR_5 = ((void*)0);
 unsigned int VAR_6 = FUNC_0(VAR_2->buf_w, VAR_2->buf_h);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_5 = &VAR_1->mv_buf[VAR_3];
  if (VAR_5->va)
   FUNC_3(VAR_1->ctx, VAR_5);
  VAR_5->size = VAR_6;
  VAR_4 = FUNC_2(VAR_1->ctx, VAR_5);
  if (VAR_4) {
   FUNC_1(VAR_1, "failed to allocate mv buf");
   return VAR_4;
  }
  VAR_1->vsi->mv_buf_dma[VAR_3] = VAR_5->dma_addr;
 }

 return 0;
}
