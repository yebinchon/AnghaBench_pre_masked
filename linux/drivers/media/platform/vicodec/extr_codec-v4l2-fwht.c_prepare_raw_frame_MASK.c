
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_fwht_pixfmt_info {int id; int components_num; int chroma_step; int luma_alpha_step; int height_div; int width_div; } ;
struct fwht_raw_frame {int * luma; int * cr; int * cb; int * alpha; int components_num; int chroma_step; int luma_alpha_step; int height_div; int width_div; } ;


 int VAR_0 ;
__attribute__((used)) static int FUNC_0(struct fwht_raw_frame *VAR_1,
    const struct v4l2_fwht_pixfmt_info *VAR_2, u8 *VAR_3,
    unsigned int VAR_4)
{
 VAR_1->luma = VAR_3;
 VAR_1->width_div = VAR_2->width_div;
 VAR_1->height_div = VAR_2->height_div;
 VAR_1->luma_alpha_step = VAR_2->luma_alpha_step;
 VAR_1->chroma_step = VAR_2->chroma_step;
 VAR_1->alpha = ((void*)0);
 VAR_1->components_num = VAR_2->components_num;





 if (!VAR_3) {
  VAR_1->luma = ((void*)0);
  VAR_1->cb = ((void*)0);
  VAR_1->cr = ((void*)0);
  VAR_1->alpha = ((void*)0);
  return 0;
 }
 switch (VAR_2->id) {
 case 149:
  VAR_1->cb = ((void*)0);
  VAR_1->cr = ((void*)0);
  break;
 case 132:
  VAR_1->cb = VAR_1->luma + VAR_4;
  VAR_1->cr = VAR_1->cb + VAR_4 / 4;
  break;
 case 129:
  VAR_1->cr = VAR_1->luma + VAR_4;
  VAR_1->cb = VAR_1->cr + VAR_4 / 4;
  break;
 case 131:
  VAR_1->cb = VAR_1->luma + VAR_4;
  VAR_1->cr = VAR_1->cb + VAR_4 / 2;
  break;
 case 146:
 case 145:
 case 143:
  VAR_1->cb = VAR_1->luma + VAR_4;
  VAR_1->cr = VAR_1->cb + 1;
  break;
 case 144:
 case 141:
 case 142:
  VAR_1->cr = VAR_1->luma + VAR_4;
  VAR_1->cb = VAR_1->cr + 1;
  break;
 case 130:
  VAR_1->cb = VAR_1->luma + 1;
  VAR_1->cr = VAR_1->cb + 2;
  break;
 case 128:
  VAR_1->cr = VAR_1->luma + 1;
  VAR_1->cb = VAR_1->cr + 2;
  break;
 case 136:
  VAR_1->cb = VAR_1->luma;
  VAR_1->cr = VAR_1->cb + 2;
  VAR_1->luma++;
  break;
 case 135:
  VAR_1->cr = VAR_1->luma;
  VAR_1->cb = VAR_1->cr + 2;
  VAR_1->luma++;
  break;
 case 140:
 case 148:
  VAR_1->cr = VAR_1->luma;
  VAR_1->cb = VAR_1->cr + 2;
  VAR_1->luma++;
  break;
 case 153:
  VAR_1->cb = VAR_1->luma;
  VAR_1->cr = VAR_1->cb + 2;
  VAR_1->luma++;
  break;
 case 139:
 case 133:
 case 147:
  VAR_1->cr = VAR_1->luma + 1;
  VAR_1->cb = VAR_1->cr + 2;
  VAR_1->luma += 2;
  break;
 case 152:
 case 134:
  VAR_1->cb = VAR_1->luma;
  VAR_1->cr = VAR_1->cb + 2;
  VAR_1->luma++;
  break;
 case 154:
  VAR_1->alpha = VAR_1->luma;
  VAR_1->cr = VAR_1->luma + 1;
  VAR_1->cb = VAR_1->cr + 2;
  VAR_1->luma += 2;
  break;
 case 155:
  VAR_1->cb = VAR_1->luma;
  VAR_1->cr = VAR_1->cb + 2;
  VAR_1->luma++;
  VAR_1->alpha = VAR_1->cr + 1;
  break;
 case 150:
  VAR_1->cb = VAR_1->luma + 1;
  VAR_1->cr = VAR_1->cb + 2;
  VAR_1->luma += 2;
  break;
 case 151:
  VAR_1->alpha = VAR_1->luma;
  VAR_1->cb = VAR_1->luma + 1;
  VAR_1->cr = VAR_1->cb + 2;
  VAR_1->luma += 2;
  break;
 case 137:
  VAR_1->cr = VAR_1->luma;
  VAR_1->cb = VAR_1->cr + 2;
  VAR_1->luma++;
  break;
 case 138:
  VAR_1->alpha = VAR_1->luma + 3;
  VAR_1->cr = VAR_1->luma;
  VAR_1->cb = VAR_1->cr + 2;
  VAR_1->luma++;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
