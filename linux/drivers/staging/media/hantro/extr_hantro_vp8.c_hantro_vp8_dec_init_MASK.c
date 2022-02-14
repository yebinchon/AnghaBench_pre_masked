
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vp8_prob_tbl_packed {int dummy; } ;
struct hantro_dev {int dev; } ;
struct hantro_aux_buf {size_t size; int dma; void* cpu; } ;
struct TYPE_4__ {struct hantro_aux_buf segment_map; struct hantro_aux_buf prob_tbl; } ;
struct TYPE_3__ {unsigned int width; unsigned int height; } ;
struct hantro_ctx {TYPE_2__ vp8_dec; TYPE_1__ dst_fmt; struct hantro_dev* dev; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ,size_t,int *,int ) ;
 int FUNC_2 (int ,size_t,void*,int ) ;
 size_t FUNC_3 (unsigned int,int) ;

int FUNC_4(struct hantro_ctx *VAR_2)
{
 struct hantro_dev *VAR_3 = VAR_2->dev;
 struct hantro_aux_buf *VAR_4;
 unsigned int VAR_5, VAR_6;
 size_t VAR_7;
 int VAR_8;


 VAR_5 = FUNC_0(VAR_2->dst_fmt.width, 16);
 VAR_6 = FUNC_0(VAR_2->dst_fmt.height, 16);
 VAR_7 = FUNC_3(FUNC_0(VAR_5 * VAR_6, 4), 64);





 VAR_4 = &VAR_2->vp8_dec.segment_map;
 VAR_4->size = VAR_7;
 VAR_4->cpu = FUNC_1(VAR_3->dev, VAR_4->size,
       &VAR_4->dma, VAR_1);
 if (!VAR_4->cpu)
  return -VAR_0;





 VAR_4 = &VAR_2->vp8_dec.prob_tbl;
 VAR_4->size = sizeof(struct vp8_prob_tbl_packed);
 VAR_4->cpu = FUNC_1(VAR_3->dev, VAR_4->size,
       &VAR_4->dma, VAR_1);
 if (!VAR_4->cpu) {
  VAR_8 = -VAR_0;
  goto err_free_seg_map;
 }

 return 0;

err_free_seg_map:
 FUNC_2(VAR_3->dev, VAR_2->vp8_dec.segment_map.size,
     VAR_2->vp8_dec.segment_map.cpu,
     VAR_2->vp8_dec.segment_map.dma);

 return VAR_8;
}
