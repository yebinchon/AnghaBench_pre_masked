
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_vcodec_ctx {int drv_handle; TYPE_1__* dec_if; } ;
typedef enum vdec_get_param_type { ____Placeholder_vdec_get_param_type } vdec_get_param_type ;
struct TYPE_2__ {int (* get_param ) (int ,int,void*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mtk_vcodec_ctx*) ;
 int FUNC_1 (struct mtk_vcodec_ctx*) ;
 int FUNC_2 (int ,int,void*) ;

int FUNC_3(struct mtk_vcodec_ctx *VAR_1, enum vdec_get_param_type VAR_2,
        void *VAR_3)
{
 int VAR_4 = 0;

 if (!VAR_1->drv_handle)
  return -VAR_0;

 FUNC_0(VAR_1);
 VAR_4 = VAR_1->dec_if->get_param(VAR_1->drv_handle, VAR_2, VAR_3);
 FUNC_1(VAR_1);

 return VAR_4;
}
