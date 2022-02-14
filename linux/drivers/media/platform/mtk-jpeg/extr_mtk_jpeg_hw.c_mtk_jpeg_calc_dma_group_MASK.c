
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_jpeg_dec_param {int src_color; scalar_t__ dst_fourcc; int dma_mcu; int dma_group; int mcu_w; int dma_last_mcu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0(struct mtk_jpeg_dec_param *VAR_6)
{
 u32 VAR_7 = 3;

 if (VAR_6->src_color == VAR_3 &&
     VAR_6->dst_fourcc == VAR_5)
  VAR_7 = 4;
 else if (VAR_6->src_color == VAR_1 &&
   VAR_6->dst_fourcc == VAR_4)
  VAR_7 = 4;
 else if (VAR_6->src_color == VAR_2 &&
   VAR_6->dst_fourcc == VAR_5)
  VAR_7 = 2;
 else if (VAR_6->src_color == VAR_0 ||
   (VAR_6->src_color & 0x0FFFF) == 0)
  VAR_7 = 4;

 VAR_6->dma_mcu = 1 << VAR_7;
 VAR_6->dma_group = VAR_6->mcu_w / VAR_6->dma_mcu;
 VAR_6->dma_last_mcu = VAR_6->mcu_w % VAR_6->dma_mcu;
 if (VAR_6->dma_last_mcu)
  VAR_6->dma_group++;
 else
  VAR_6->dma_last_mcu = VAR_6->dma_mcu;
}
