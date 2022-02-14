
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int type; } ;
struct mtk_vcodec_ctx {int dummy; } ;
struct mtk_q_data {unsigned int* sizeimage; TYPE_1__* fmt; } ;
struct device {int dummy; } ;
struct TYPE_2__ {unsigned int num_planes; } ;


 int VAR_0 ;
 struct mtk_q_data* FUNC_0 (struct mtk_vcodec_ctx*,int ) ;
 struct mtk_vcodec_ctx* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_1,
       unsigned int *VAR_2,
       unsigned int *VAR_3,
       unsigned int VAR_4[],
       struct device *VAR_5[])
{
 struct mtk_vcodec_ctx *VAR_6 = FUNC_1(VAR_1);
 struct mtk_q_data *VAR_7;
 unsigned int VAR_8;

 VAR_7 = FUNC_0(VAR_6, VAR_1->type);

 if (VAR_7 == ((void*)0))
  return -VAR_0;

 if (*VAR_3) {
  for (VAR_8 = 0; VAR_8 < *VAR_3; VAR_8++)
   if (VAR_4[VAR_8] < VAR_7->sizeimage[VAR_8])
    return -VAR_0;
 } else {
  *VAR_3 = VAR_7->fmt->num_planes;
  for (VAR_8 = 0; VAR_8 < *VAR_3; VAR_8++)
   VAR_4[VAR_8] = VAR_7->sizeimage[VAR_8];
 }

 return 0;
}
