
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dma_addr; int size; } ;
struct vdec_h264_inst {TYPE_2__ pred_buf; TYPE_1__* vsi; int ctx; } ;
struct TYPE_3__ {int pred_buf_dma; } ;


 int VAR_0 ;
 int FUNC_0 (struct vdec_h264_inst*,char*) ;
 int FUNC_1 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct vdec_h264_inst *VAR_1)
{
 int VAR_2 = 0;

 VAR_1->pred_buf.size = VAR_0;
 VAR_2 = FUNC_1(VAR_1->ctx, &VAR_1->pred_buf);
 if (VAR_2) {
  FUNC_0(VAR_1, "failed to allocate ppl buf");
  return VAR_2;
 }

 VAR_1->vsi->pred_buf_dma = VAR_1->pred_buf.dma_addr;
 return 0;
}
