
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_jpeg_dec_param {int src_color; int* sampling_w; int* sampling_h; int uv_brz_w; void* dst_fourcc; } ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;

__attribute__((used)) static int FUNC_0(struct mtk_jpeg_dec_param *VAR_3)
{
 VAR_3->src_color = (VAR_3->sampling_w[0] << 20) |
      (VAR_3->sampling_h[0] << 16) |
      (VAR_3->sampling_w[1] << 12) |
      (VAR_3->sampling_h[1] << 8) |
      (VAR_3->sampling_w[2] << 4) |
      (VAR_3->sampling_h[2]);

 VAR_3->uv_brz_w = 0;
 switch (VAR_3->src_color) {
 case 128:
  VAR_3->uv_brz_w = 1;
  VAR_3->dst_fourcc = VAR_2;
  break;
 case 129:
 case 132:
  VAR_3->dst_fourcc = VAR_2;
  break;
 case 131:
 case 130:
  VAR_3->uv_brz_w = 1;
  VAR_3->dst_fourcc = VAR_1;
  break;
 case 133:
  VAR_3->dst_fourcc = VAR_1;
  break;
 case 134:
  VAR_3->dst_fourcc = VAR_0;
  break;
 default:
  VAR_3->dst_fourcc = 0;
  return -1;
 }

 return 0;
}
