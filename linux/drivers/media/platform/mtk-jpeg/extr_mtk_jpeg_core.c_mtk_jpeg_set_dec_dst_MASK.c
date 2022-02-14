
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_buffer {int num_planes; } ;
struct mtk_jpeg_fb {int * plane_addr; } ;
struct mtk_jpeg_dec_param {int comp_num; scalar_t__* comp_size; } ;
struct mtk_jpeg_ctx {TYPE_1__* jpeg; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,int) ;
 int FUNC_1 (struct vb2_buffer*,int) ;
 scalar_t__ FUNC_2 (struct vb2_buffer*,int) ;

__attribute__((used)) static int FUNC_3(struct mtk_jpeg_ctx *VAR_1,
    struct mtk_jpeg_dec_param *VAR_2,
    struct vb2_buffer *VAR_3,
    struct mtk_jpeg_fb *VAR_4)
{
 int VAR_5;

 if (VAR_2->comp_num != VAR_3->num_planes) {
  FUNC_0(VAR_1->jpeg->dev, "plane number mismatch (%u != %u)\n",
   VAR_2->comp_num, VAR_3->num_planes);
  return -VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->num_planes; VAR_5++) {
  if (FUNC_2(VAR_3, VAR_5) < VAR_2->comp_size[VAR_5]) {
   FUNC_0(VAR_1->jpeg->dev,
    "buffer size is underflow (%lu < %u)\n",
    FUNC_2(VAR_3, 0),
    VAR_2->comp_size[VAR_5]);
   return -VAR_0;
  }
  VAR_4->plane_addr[VAR_5] = FUNC_1(VAR_3, VAR_5);
 }

 return 0;
}
