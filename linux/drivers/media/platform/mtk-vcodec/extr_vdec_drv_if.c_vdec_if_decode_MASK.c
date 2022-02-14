
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dma_addr; } ;
struct TYPE_5__ {int dma_addr; } ;
struct vdec_fb {TYPE_2__ base_c; TYPE_1__ base_y; } ;
struct mtk_vcodec_mem {int dma_addr; } ;
struct mtk_vcodec_ctx {TYPE_4__* dev; int drv_handle; TYPE_3__* dec_if; } ;
struct TYPE_8__ {int pm; int dec_irq; } ;
struct TYPE_7__ {int (* decode ) (int ,struct mtk_vcodec_mem*,struct vdec_fb*,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*,struct mtk_vcodec_ctx*) ;
 int FUNC_6 (struct mtk_vcodec_ctx*) ;
 int FUNC_7 (struct mtk_vcodec_ctx*) ;
 int FUNC_8 (int ,struct mtk_vcodec_mem*,struct vdec_fb*,int*) ;

int FUNC_9(struct mtk_vcodec_ctx *VAR_2, struct mtk_vcodec_mem *VAR_3,
     struct vdec_fb *VAR_4, bool *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_3) {
  if ((VAR_3->dma_addr & 63) != 0) {
   FUNC_2("bs dma_addr should 64 byte align");
   return -VAR_0;
  }
 }

 if (VAR_4) {
  if (((VAR_4->base_y.dma_addr & 511) != 0) ||
      ((VAR_4->base_c.dma_addr & 511) != 0)) {
   FUNC_2("frame buffer dma_addr should 512 byte align");
   return -VAR_0;
  }
 }

 if (!VAR_2->drv_handle)
  return -VAR_1;

 FUNC_6(VAR_2);

 FUNC_5(VAR_2->dev, VAR_2);
 FUNC_4(&VAR_2->dev->pm);
 FUNC_1(VAR_2->dev->dec_irq);
 VAR_6 = VAR_2->dec_if->decode(VAR_2->drv_handle, VAR_3, VAR_4, VAR_5);
 FUNC_0(VAR_2->dev->dec_irq);
 FUNC_3(&VAR_2->dev->pm);
 FUNC_5(VAR_2->dev, ((void*)0));

 FUNC_7(VAR_2);

 return VAR_6;
}
