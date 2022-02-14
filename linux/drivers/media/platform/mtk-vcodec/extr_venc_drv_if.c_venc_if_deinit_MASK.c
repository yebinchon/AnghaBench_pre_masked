
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_vcodec_ctx {int * drv_handle; TYPE_2__* dev; TYPE_1__* enc_if; } ;
struct TYPE_4__ {int pm; } ;
struct TYPE_3__ {int (* deinit ) (int *) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mtk_vcodec_ctx*) ;
 int FUNC_3 (struct mtk_vcodec_ctx*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct mtk_vcodec_ctx *VAR_0)
{
 int VAR_1 = 0;

 if (!VAR_0->drv_handle)
  return 0;

 FUNC_2(VAR_0);
 FUNC_1(&VAR_0->dev->pm);
 VAR_1 = VAR_0->enc_if->deinit(VAR_0->drv_handle);
 FUNC_0(&VAR_0->dev->pm);
 FUNC_3(VAR_0);

 VAR_0->drv_handle = ((void*)0);

 return VAR_1;
}
