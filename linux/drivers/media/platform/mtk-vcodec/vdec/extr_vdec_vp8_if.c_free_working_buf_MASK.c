
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_vcodec_mem {scalar_t__ va; } ;
struct vdec_vp8_inst {TYPE_2__* vsi; int ctx; struct mtk_vcodec_mem working_buf; } ;
struct TYPE_3__ {scalar_t__ working_buf_dma; } ;
struct TYPE_4__ {TYPE_1__ dec; } ;


 int FUNC_0 (int ,struct mtk_vcodec_mem*) ;

__attribute__((used)) static void FUNC_1(struct vdec_vp8_inst *VAR_0)
{
 struct mtk_vcodec_mem *VAR_1 = &VAR_0->working_buf;

 if (VAR_1->va)
  FUNC_0(VAR_0->ctx, VAR_1);

 VAR_0->vsi->dec.working_buf_dma = 0;
}
