
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vdec_vp9_vsi {int dummy; } ;
struct TYPE_4__ {scalar_t__ vsi; int handler; struct mtk_vcodec_ctx* ctx; int dev; int id; } ;
struct vdec_vp9_inst {TYPE_2__ vpu; struct vdec_vp9_vsi* vsi; struct mtk_vcodec_ctx* ctx; scalar_t__ total_frm_cnt; } ;
struct mtk_vcodec_ctx {struct vdec_vp9_inst* drv_handle; TYPE_1__* dev; } ;
struct TYPE_3__ {int vpu_plat_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vdec_vp9_inst*) ;
 int FUNC_1 (struct vdec_vp9_inst*,char*) ;
 struct vdec_vp9_inst* FUNC_2 (struct mtk_vcodec_ctx*) ;
 int FUNC_3 (struct vdec_vp9_inst*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct mtk_vcodec_ctx *VAR_4)
{
 struct vdec_vp9_inst *VAR_5;

 VAR_5 = FUNC_2(VAR_4);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->total_frm_cnt = 0;
 VAR_5->ctx = VAR_4;

 VAR_5->vpu.id = VAR_2;
 VAR_5->vpu.dev = VAR_4->dev->vpu_plat_dev;
 VAR_5->vpu.ctx = VAR_4;
 VAR_5->vpu.handler = VAR_3;

 if (FUNC_4(&VAR_5->vpu)) {
  FUNC_1(VAR_5, "vp9_dec_vpu_init failed");
  goto err_deinit_inst;
 }

 VAR_5->vsi = (struct vdec_vp9_vsi *)VAR_5->vpu.vsi;
 FUNC_0(VAR_5);

 VAR_4->drv_handle = VAR_5;
 return 0;

err_deinit_inst:
 FUNC_3(VAR_5);

 return -VAR_0;
}
