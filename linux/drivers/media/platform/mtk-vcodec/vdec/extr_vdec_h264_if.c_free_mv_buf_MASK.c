
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vdec_h264_inst {int ctx; struct mtk_vcodec_mem* mv_buf; TYPE_1__* vsi; } ;
struct mtk_vcodec_mem {scalar_t__ va; } ;
struct TYPE_2__ {scalar_t__* mv_buf_dma; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mtk_vcodec_mem*) ;

__attribute__((used)) static void FUNC_1(struct vdec_h264_inst *VAR_1)
{
 int VAR_2;
 struct mtk_vcodec_mem *VAR_3 = ((void*)0);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_1->vsi->mv_buf_dma[VAR_2] = 0;
  VAR_3 = &VAR_1->mv_buf[VAR_2];
  if (VAR_3->va)
   FUNC_0(VAR_1->ctx, VAR_3);
 }
}
