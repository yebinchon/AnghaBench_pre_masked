
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_vcodec_mem {scalar_t__ va; } ;
struct vdec_h264_inst {int ctx; struct mtk_vcodec_mem pred_buf; TYPE_1__* vsi; } ;
struct TYPE_2__ {scalar_t__ pred_buf_dma; } ;


 int FUNC_0 (struct vdec_h264_inst*) ;
 int FUNC_1 (int ,struct mtk_vcodec_mem*) ;

__attribute__((used)) static void FUNC_2(struct vdec_h264_inst *VAR_0)
{
 struct mtk_vcodec_mem *VAR_1 = ((void*)0);

 FUNC_0(VAR_0);

 VAR_0->vsi->pred_buf_dma = 0;
 VAR_1 = &VAR_0->pred_buf;
 if (VAR_1->va)
  FUNC_1(VAR_0->ctx, VAR_1);
}
