
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_8__ {int y_h; int y_v; int cb_h; int cb_v; int cr_h; int cr_v; } ;
struct fimc_frame {int offs_h; int offs_v; TYPE_4__ dma_offset; TYPE_3__* fmt; } ;
struct fimc_ctx {TYPE_2__* fimc_dev; } ;
struct TYPE_7__ {size_t memplanes; int colplanes; scalar_t__ color; scalar_t__* depth; } ;
struct TYPE_6__ {TYPE_1__* drv_data; } ;
struct TYPE_5__ {int dma_pix_hoff; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,size_t,int) ;

void FUNC_1(struct fimc_ctx *VAR_1, struct fimc_frame *VAR_2)
{
 bool VAR_3 = VAR_1->fimc_dev->drv_data->dma_pix_hoff;
 u32 VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2->fmt->memplanes; VAR_4++)
  VAR_5 += VAR_2->fmt->depth[VAR_4];

 VAR_2->dma_offset.y_h = VAR_2->offs_h;
 if (!VAR_3)
  VAR_2->dma_offset.y_h *= (VAR_5 >> 3);

 VAR_2->dma_offset.y_v = VAR_2->offs_v;

 VAR_2->dma_offset.cb_h = VAR_2->offs_h;
 VAR_2->dma_offset.cb_v = VAR_2->offs_v;

 VAR_2->dma_offset.cr_h = VAR_2->offs_h;
 VAR_2->dma_offset.cr_v = VAR_2->offs_v;

 if (!VAR_3) {
  if (VAR_2->fmt->colplanes == 3) {
   VAR_2->dma_offset.cb_h >>= 1;
   VAR_2->dma_offset.cr_h >>= 1;
  }
  if (VAR_2->fmt->color == VAR_0) {
   VAR_2->dma_offset.cb_v >>= 1;
   VAR_2->dma_offset.cr_v >>= 1;
  }
 }

 FUNC_0("in_offset: color= %d, y_h= %d, y_v= %d",
     VAR_2->fmt->color, VAR_2->dma_offset.y_h, VAR_2->dma_offset.y_v);
}
