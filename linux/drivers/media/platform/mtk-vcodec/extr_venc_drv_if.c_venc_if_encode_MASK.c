
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct venc_frm_buf {int dummy; } ;
struct venc_done_result {int dummy; } ;
struct mtk_vcodec_mem {int dummy; } ;
struct mtk_vcodec_ctx {TYPE_2__* dev; int drv_handle; TYPE_1__* enc_if; } ;
typedef enum venc_start_opt { ____Placeholder_venc_start_opt } venc_start_opt ;
struct TYPE_4__ {int irqlock; struct mtk_vcodec_ctx* curr_ctx; int pm; } ;
struct TYPE_3__ {int (* encode ) (int ,int,struct venc_frm_buf*,struct mtk_vcodec_mem*,struct venc_done_result*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mtk_vcodec_ctx*) ;
 int FUNC_3 (struct mtk_vcodec_ctx*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,int,struct venc_frm_buf*,struct mtk_vcodec_mem*,struct venc_done_result*) ;

int FUNC_7(struct mtk_vcodec_ctx *VAR_0,
     enum venc_start_opt VAR_1, struct venc_frm_buf *VAR_2,
     struct mtk_vcodec_mem *VAR_3,
     struct venc_done_result *VAR_4)
{
 int VAR_5 = 0;
 unsigned long VAR_6;

 FUNC_2(VAR_0);

 FUNC_4(&VAR_0->dev->irqlock, VAR_6);
 VAR_0->dev->curr_ctx = VAR_0;
 FUNC_5(&VAR_0->dev->irqlock, VAR_6);

 FUNC_1(&VAR_0->dev->pm);
 VAR_5 = VAR_0->enc_if->encode(VAR_0->drv_handle, VAR_1, VAR_2,
      VAR_3, VAR_4);
 FUNC_0(&VAR_0->dev->pm);

 FUNC_4(&VAR_0->dev->irqlock, VAR_6);
 VAR_0->dev->curr_ctx = ((void*)0);
 FUNC_5(&VAR_0->dev->irqlock, VAR_6);

 FUNC_3(VAR_0);
 return VAR_5;
}
