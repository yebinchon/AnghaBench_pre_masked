
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct venc_enc_param {int dummy; } ;
struct mtk_vcodec_ctx {TYPE_2__* dev; int drv_handle; TYPE_1__* enc_if; } ;
typedef enum venc_set_param_type { ____Placeholder_venc_set_param_type } venc_set_param_type ;
struct TYPE_4__ {int pm; } ;
struct TYPE_3__ {int (* set_param ) (int ,int,struct venc_enc_param*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mtk_vcodec_ctx*) ;
 int FUNC_3 (struct mtk_vcodec_ctx*) ;
 int FUNC_4 (int ,int,struct venc_enc_param*) ;

int FUNC_5(struct mtk_vcodec_ctx *VAR_0,
  enum venc_set_param_type VAR_1, struct venc_enc_param *VAR_2)
{
 int VAR_3 = 0;

 FUNC_2(VAR_0);
 FUNC_1(&VAR_0->dev->pm);
 VAR_3 = VAR_0->enc_if->set_param(VAR_0->drv_handle, VAR_1, VAR_2);
 FUNC_0(&VAR_0->dev->pm);
 FUNC_3(VAR_0);

 return VAR_3;
}
