
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vdec_h264_vsi {int dummy; } ;
struct TYPE_5__ {scalar_t__ vsi; int handler; struct mtk_vcodec_ctx* ctx; int dev; int id; } ;
struct vdec_h264_inst {TYPE_2__ vpu; struct vdec_h264_vsi* vsi; struct mtk_vcodec_ctx* ctx; } ;
struct mtk_vcodec_ctx {struct vdec_h264_inst* drv_handle; TYPE_1__* dev; } ;
struct TYPE_4__ {int vpu_plat_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vdec_h264_inst*) ;
 int FUNC_1 (struct vdec_h264_inst*) ;
 struct vdec_h264_inst* FUNC_2 (int,int ) ;
 int FUNC_3 (struct vdec_h264_inst*,char*,struct vdec_h264_inst*) ;
 int FUNC_4 (struct vdec_h264_inst*,char*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct mtk_vcodec_ctx *VAR_4)
{
 struct vdec_h264_inst *VAR_5 = ((void*)0);
 int VAR_6;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->ctx = VAR_4;

 VAR_5->vpu.id = VAR_2;
 VAR_5->vpu.dev = VAR_4->dev->vpu_plat_dev;
 VAR_5->vpu.ctx = VAR_4;
 VAR_5->vpu.handler = VAR_3;

 VAR_6 = FUNC_6(&VAR_5->vpu);
 if (VAR_6) {
  FUNC_4(VAR_5, "vdec_h264 init err=%d", VAR_6);
  goto error_free_inst;
 }

 VAR_5->vsi = (struct vdec_h264_vsi *)VAR_5->vpu.vsi;
 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6)
  goto error_deinit;

 FUNC_3(VAR_5, "H264 Instance >> %p", VAR_5);

 VAR_4->drv_handle = VAR_5;
 return 0;

error_deinit:
 FUNC_5(&VAR_5->vpu);

error_free_inst:
 FUNC_1(VAR_5);
 return VAR_6;
}
