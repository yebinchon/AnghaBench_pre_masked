
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_vcodec_mem {unsigned long size; unsigned long va; scalar_t__ dma_addr; } ;
struct mtk_vcodec_ctx {int id; TYPE_2__* dev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* plat_dev; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 unsigned long FUNC_1 (struct device*,unsigned long,scalar_t__*,int ) ;
 int FUNC_2 (int,char*,int ,unsigned long) ;
 int FUNC_3 (char*,int ,unsigned long) ;

int FUNC_4(struct mtk_vcodec_ctx *VAR_2,
   struct mtk_vcodec_mem *VAR_3)
{
 unsigned long VAR_4 = VAR_3->size;
 struct mtk_vcodec_ctx *VAR_5 = (struct mtk_vcodec_ctx *)VAR_2;
 struct device *VAR_6 = &VAR_5->dev->plat_dev->dev;

 VAR_3->va = FUNC_1(VAR_6, VAR_4, &VAR_3->dma_addr, VAR_1);
 if (!VAR_3->va) {
  FUNC_3("%s dma_alloc size=%ld failed!", FUNC_0(VAR_6),
        VAR_4);
  return -VAR_0;
 }

 FUNC_2(3, "[%d]  - va      = %p", VAR_5->id, VAR_3->va);
 FUNC_2(3, "[%d]  - dma     = 0x%lx", VAR_5->id,
         (unsigned long)VAR_3->dma_addr);
 FUNC_2(3, "[%d]    size = 0x%lx", VAR_5->id, VAR_4);

 return 0;
}
