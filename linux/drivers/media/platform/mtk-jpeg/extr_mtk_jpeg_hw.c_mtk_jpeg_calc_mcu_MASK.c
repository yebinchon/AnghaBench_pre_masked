
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_jpeg_dec_param {int* sampling_w; int* sampling_h; int mcu_w; int pic_w; int mcu_h; int pic_h; int total_mcu; int unit_num; int blk_num; int* blk_comp; int comp_num; int membership; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct mtk_jpeg_dec_param *VAR_2)
{
 u32 VAR_3, VAR_4;
 u32 VAR_5, VAR_6, VAR_7;

 VAR_3 = 2 + VAR_2->sampling_w[0];
 VAR_4 = 2 + VAR_2->sampling_h[0];
 VAR_2->mcu_w = (VAR_2->pic_w + (1 << VAR_3) - 1) >> VAR_3;
 VAR_2->mcu_h = (VAR_2->pic_h + (1 << VAR_4) - 1) >> VAR_4;
 VAR_2->total_mcu = VAR_2->mcu_w * VAR_2->mcu_h;
 VAR_2->unit_num = ((VAR_2->pic_w + 7) >> 3) * ((VAR_2->pic_h + 7) >> 3);
 VAR_2->blk_num = 0;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_2->blk_comp[VAR_5] = 0;
  if (VAR_5 >= VAR_2->comp_num)
   continue;
  VAR_2->blk_comp[VAR_5] = VAR_2->sampling_w[VAR_5] *
         VAR_2->sampling_h[VAR_5];
  VAR_2->blk_num += VAR_2->blk_comp[VAR_5];
 }

 VAR_2->membership = 0;
 for (VAR_5 = 0, VAR_7 = 0, VAR_6 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_5 < VAR_2->blk_num && VAR_6 < VAR_2->comp_num) {
   u32 VAR_8;

   VAR_8 = (0x04 + (VAR_6 & 0x3));
   VAR_2->membership |= VAR_8 << (VAR_5 * 3);
   if (++VAR_7 == VAR_2->blk_comp[VAR_6]) {
    VAR_6++;
    VAR_7 = 0;
   }
  } else {
   VAR_2->membership |= 7 << (VAR_5 * 3);
  }
 }
}
