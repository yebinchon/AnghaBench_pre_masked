
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_key_frm; } ;
struct venc_vp8_inst {TYPE_1__ vpu_inst; struct mtk_vcodec_ctx* ctx; } ;
struct venc_frm_buf {int dummy; } ;
struct venc_done_result {int is_key_frm; int bs_size; } ;
struct mtk_vcodec_mem {int dummy; } ;
struct mtk_vcodec_ctx {TYPE_2__* dev; } ;
typedef enum venc_start_opt { ____Placeholder_venc_start_opt } venc_start_opt ;
struct TYPE_4__ {int enc_lt_irq; } ;


 int VAR_0 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct venc_vp8_inst*) ;
 int FUNC_3 (struct venc_vp8_inst*) ;
 int FUNC_4 (struct venc_vp8_inst*,char*,int) ;
 int FUNC_5 (struct venc_vp8_inst*,struct venc_frm_buf*,struct mtk_vcodec_mem*,int *) ;

__attribute__((used)) static int FUNC_6(void *VAR_1,
     enum venc_start_opt VAR_2,
     struct venc_frm_buf *VAR_3,
     struct mtk_vcodec_mem *VAR_4,
     struct venc_done_result *VAR_5)
{
 int VAR_6 = 0;
 struct venc_vp8_inst *VAR_7 = (struct venc_vp8_inst *)VAR_1;
 struct mtk_vcodec_ctx *VAR_8 = VAR_7->ctx;

 FUNC_2(VAR_7);

 FUNC_1(VAR_8->dev->enc_lt_irq);

 switch (VAR_2) {
 case 128:
  VAR_6 = FUNC_5(VAR_7, VAR_3, VAR_4,
        &VAR_5->bs_size);
  if (VAR_6)
   goto encode_err;
  VAR_5->is_key_frm = VAR_7->vpu_inst.is_key_frm;
  break;

 default:
  FUNC_4(VAR_7, "opt not support:%d", VAR_2);
  VAR_6 = -VAR_0;
  break;
 }

encode_err:

 FUNC_0(VAR_8->dev->enc_lt_irq);
 FUNC_3(VAR_7);

 return VAR_6;
}
