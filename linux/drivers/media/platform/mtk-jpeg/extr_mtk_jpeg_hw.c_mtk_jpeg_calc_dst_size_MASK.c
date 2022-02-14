
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct mtk_jpeg_dec_param {size_t uv_brz_w; size_t comp_num; int mcu_w; int* sampling_w; size_t* comp_w; size_t* img_stride; int* sampling_h; size_t dec_w; size_t dec_h; size_t mcu_h; size_t* mem_stride; size_t* comp_size; size_t y_size; size_t uv_size; size_t dec_size; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (size_t,int) ;

__attribute__((used)) static int FUNC_1(struct mtk_jpeg_dec_param *VAR_2)
{
 u32 VAR_3, VAR_4;
 u32 VAR_5[3];
 u32 VAR_6[3];

 VAR_6[0] = 0;
 VAR_6[1] = VAR_2->uv_brz_w;
 VAR_6[2] = VAR_6[1];

 for (VAR_3 = 0; VAR_3 < VAR_2->comp_num; VAR_3++) {
  if (VAR_6[VAR_3] > 3)
   return -1;

  VAR_4 = VAR_2->mcu_w * VAR_1 *
    VAR_2->sampling_w[VAR_3];

  VAR_2->comp_w[VAR_3] = VAR_4 >> VAR_6[VAR_3];
  VAR_2->comp_w[VAR_3] = FUNC_0(VAR_2->comp_w[VAR_3],
        VAR_1);
  VAR_2->img_stride[VAR_3] = VAR_3 ? FUNC_0(VAR_2->comp_w[VAR_3], 16)
     : FUNC_0(VAR_2->comp_w[VAR_3], 32);
  VAR_5[VAR_3] = (VAR_1 * VAR_2->sampling_h[VAR_3]);
 }
 VAR_2->dec_w = VAR_2->img_stride[0];
 VAR_2->dec_h = VAR_5[0] * VAR_2->mcu_h;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {

  VAR_2->mem_stride[VAR_3] = VAR_2->img_stride[VAR_3];
  VAR_2->comp_size[VAR_3] = VAR_2->mem_stride[VAR_3] * VAR_5[VAR_3] *
          VAR_2->mcu_h;
 }

 VAR_2->y_size = VAR_2->comp_size[0];
 VAR_2->uv_size = VAR_2->comp_size[1];
 VAR_2->dec_size = VAR_2->y_size + (VAR_2->uv_size << 1);

 return 0;
}
