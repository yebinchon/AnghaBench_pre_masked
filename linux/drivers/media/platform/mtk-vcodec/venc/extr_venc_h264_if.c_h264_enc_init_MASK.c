
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct venc_h264_vsi {int dummy; } ;
struct TYPE_4__ {scalar_t__ vsi; int id; int dev; struct mtk_vcodec_ctx* ctx; } ;
struct venc_h264_inst {TYPE_2__ vpu_inst; struct venc_h264_vsi* vsi; struct mtk_vcodec_ctx* ctx; int hw_base; } ;
struct mtk_vcodec_ctx {struct venc_h264_inst* drv_handle; TYPE_1__* dev; } ;
struct TYPE_3__ {int vpu_plat_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct venc_h264_inst*) ;
 struct venc_h264_inst* FUNC_1 (int,int ) ;
 int FUNC_2 (struct venc_h264_inst*) ;
 int FUNC_3 (struct venc_h264_inst*) ;
 int FUNC_4 (struct mtk_vcodec_ctx*,int ) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(struct mtk_vcodec_ctx *VAR_4)
{
 int VAR_5 = 0;
 struct venc_h264_inst *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->ctx = VAR_4;
 VAR_6->vpu_inst.ctx = VAR_4;
 VAR_6->vpu_inst.dev = VAR_4->dev->vpu_plat_dev;
 VAR_6->vpu_inst.id = VAR_2;
 VAR_6->hw_base = FUNC_4(VAR_6->ctx, VAR_3);

 FUNC_2(VAR_6);

 VAR_5 = FUNC_5(&VAR_6->vpu_inst);

 VAR_6->vsi = (struct venc_h264_vsi *)VAR_6->vpu_inst.vsi;

 FUNC_3(VAR_6);

 if (VAR_5)
  FUNC_0(VAR_6);
 else
  VAR_4->drv_handle = VAR_6;

 return VAR_5;
}
