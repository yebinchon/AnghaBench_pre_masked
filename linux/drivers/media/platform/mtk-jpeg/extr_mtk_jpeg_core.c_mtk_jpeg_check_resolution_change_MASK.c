
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_jpeg_q_data {scalar_t__ w; scalar_t__ h; scalar_t__ fmt; } ;
struct mtk_jpeg_dev {int v4l2_dev; } ;
struct mtk_jpeg_dec_param {scalar_t__ pic_w; scalar_t__ pic_h; int dst_fourcc; } ;
struct mtk_jpeg_ctx {struct mtk_jpeg_q_data cap_q; struct mtk_jpeg_q_data out_q; struct mtk_jpeg_dev* jpeg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mtk_jpeg_ctx*,int ,int ) ;
 int FUNC_1 (int,int ,int *,char*) ;

__attribute__((used)) static bool FUNC_2(struct mtk_jpeg_ctx *VAR_2,
          struct mtk_jpeg_dec_param *VAR_3)
{
 struct mtk_jpeg_dev *VAR_4 = VAR_2->jpeg;
 struct mtk_jpeg_q_data *VAR_5;

 VAR_5 = &VAR_2->out_q;
 if (VAR_5->w != VAR_3->pic_w || VAR_5->h != VAR_3->pic_h) {
  FUNC_1(1, VAR_1, &VAR_4->v4l2_dev, "Picture size change\n");
  return 1;
 }

 VAR_5 = &VAR_2->cap_q;
 if (VAR_5->fmt != FUNC_0(VAR_2, VAR_3->dst_fourcc,
      VAR_0)) {
  FUNC_1(1, VAR_1, &VAR_4->v4l2_dev, "format change\n");
  return 1;
 }
 return 0;
}
