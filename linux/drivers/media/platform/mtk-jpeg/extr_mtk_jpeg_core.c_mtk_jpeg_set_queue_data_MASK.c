
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_jpeg_q_data {int * sizeimage; int * bytesperline; TYPE_1__* fmt; int h; int w; } ;
struct mtk_jpeg_dev {int v4l2_dev; } ;
struct mtk_jpeg_dec_param {int dst_fourcc; int dec_h; int dec_w; int pic_h; int pic_w; int * comp_size; int * mem_stride; } ;
struct mtk_jpeg_ctx {struct mtk_jpeg_q_data cap_q; struct mtk_jpeg_q_data out_q; struct mtk_jpeg_dev* jpeg; } ;
struct TYPE_2__ {int colplanes; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct mtk_jpeg_ctx*,int,int ) ;
 int FUNC_1 (int,int ,int *,char*,int,int,int,int,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mtk_jpeg_ctx *VAR_2,
        struct mtk_jpeg_dec_param *VAR_3)
{
 struct mtk_jpeg_dev *VAR_4 = VAR_2->jpeg;
 struct mtk_jpeg_q_data *VAR_5;
 int VAR_6;

 VAR_5 = &VAR_2->out_q;
 VAR_5->w = VAR_3->pic_w;
 VAR_5->h = VAR_3->pic_h;

 VAR_5 = &VAR_2->cap_q;
 VAR_5->w = VAR_3->dec_w;
 VAR_5->h = VAR_3->dec_h;
 VAR_5->fmt = FUNC_0(VAR_2,
        VAR_3->dst_fourcc,
        VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_5->fmt->colplanes; VAR_6++) {
  VAR_5->bytesperline[VAR_6] = VAR_3->mem_stride[VAR_6];
  VAR_5->sizeimage[VAR_6] = VAR_3->comp_size[VAR_6];
 }

 FUNC_1(1, VAR_1, &VAR_4->v4l2_dev,
   "set_parse cap:%c%c%c%c pic(%u, %u), buf(%u, %u)\n",
   (VAR_3->dst_fourcc & 0xff),
   (VAR_3->dst_fourcc >> 8 & 0xff),
   (VAR_3->dst_fourcc >> 16 & 0xff),
   (VAR_3->dst_fourcc >> 24 & 0xff),
   VAR_3->pic_w, VAR_3->pic_h,
   VAR_3->dec_w, VAR_3->dec_h);
}
