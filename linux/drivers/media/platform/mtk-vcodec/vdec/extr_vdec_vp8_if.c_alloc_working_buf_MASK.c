
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct mtk_vcodec_mem {scalar_t__ dma_addr; int size; } ;
struct vdec_vp8_inst {TYPE_2__* vsi; int ctx; struct mtk_vcodec_mem working_buf; } ;
struct TYPE_3__ {scalar_t__ working_buf_dma; } ;
struct TYPE_4__ {TYPE_1__ dec; } ;


 int VAR_0 ;
 int FUNC_0 (struct vdec_vp8_inst*,char*) ;
 int FUNC_1 (int ,struct mtk_vcodec_mem*) ;

__attribute__((used)) static int FUNC_2(struct vdec_vp8_inst *VAR_1)
{
 int VAR_2;
 struct mtk_vcodec_mem *VAR_3 = &VAR_1->working_buf;

 VAR_3->size = VAR_0;
 VAR_2 = FUNC_1(VAR_1->ctx, VAR_3);
 if (VAR_2) {
  FUNC_0(VAR_1, "Cannot allocate working buffer");
  return VAR_2;
 }

 VAR_1->vsi->dec.working_buf_dma = (uint64_t)VAR_3->dma_addr;
 return 0;
}
