
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int type; } ;
struct mtk_jpeg_q_data {unsigned int* sizeimage; TYPE_1__* fmt; } ;
struct mtk_jpeg_dev {int v4l2_dev; } ;
struct mtk_jpeg_ctx {struct mtk_jpeg_dev* jpeg; } ;
struct device {int dummy; } ;
struct TYPE_2__ {unsigned int colplanes; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mtk_jpeg_q_data* FUNC_0 (struct mtk_jpeg_ctx*,int) ;
 int FUNC_1 (int,int ,int *,char*,int,unsigned int) ;
 struct mtk_jpeg_ctx* FUNC_2 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_3(struct vb2_queue *VAR_2,
    unsigned int *VAR_3,
    unsigned int *VAR_4,
    unsigned int VAR_5[],
    struct device *VAR_6[])
{
 struct mtk_jpeg_ctx *VAR_7 = FUNC_2(VAR_2);
 struct mtk_jpeg_q_data *VAR_8 = ((void*)0);
 struct mtk_jpeg_dev *VAR_9 = VAR_7->jpeg;
 int VAR_10;

 FUNC_1(1, VAR_1, &VAR_9->v4l2_dev, "(%d) buf_req count=%u\n",
   VAR_2->type, *VAR_3);

 VAR_8 = FUNC_0(VAR_7, VAR_2->type);
 if (!VAR_8)
  return -VAR_0;

 *VAR_4 = VAR_8->fmt->colplanes;
 for (VAR_10 = 0; VAR_10 < VAR_8->fmt->colplanes; VAR_10++) {
  VAR_5[VAR_10] = VAR_8->sizeimage[VAR_10];
  FUNC_1(1, VAR_1, &VAR_9->v4l2_dev, "sizeimage[%d]=%u\n",
    VAR_10, VAR_5[VAR_10]);
 }

 return 0;
}
