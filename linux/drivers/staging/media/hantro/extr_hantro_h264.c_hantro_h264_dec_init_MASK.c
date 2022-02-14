
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_pix_format_mplane {TYPE_2__* plane_fmt; } ;
struct hantro_h264_dec_priv_tbl {int cabac_table; } ;
struct hantro_aux_buf {int size; struct hantro_h264_dec_priv_tbl* cpu; int dma; } ;
struct hantro_h264_dec_hw_ctx {int pic_size; struct hantro_aux_buf priv; } ;
struct hantro_dev {int dev; } ;
struct TYPE_3__ {int height; int width; int pixelformat; } ;
struct hantro_ctx {TYPE_1__ dst_fmt; struct hantro_h264_dec_hw_ctx h264_dec; struct hantro_dev* dev; } ;
struct TYPE_4__ {int sizeimage; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hantro_h264_dec_priv_tbl* FUNC_0 (int ,int,int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct v4l2_pix_format_mplane*,int ,int ,int ) ;

int FUNC_3(struct hantro_ctx *VAR_3)
{
 struct hantro_dev *VAR_4 = VAR_3->dev;
 struct hantro_h264_dec_hw_ctx *VAR_5 = &VAR_3->h264_dec;
 struct hantro_aux_buf *VAR_6 = &VAR_5->priv;
 struct hantro_h264_dec_priv_tbl *VAR_7;
 struct v4l2_pix_format_mplane VAR_8;

 VAR_6->cpu = FUNC_0(VAR_4->dev, sizeof(*VAR_7), &VAR_6->dma,
           VAR_1);
 if (!VAR_6->cpu)
  return -VAR_0;

 VAR_6->size = sizeof(*VAR_7);
 VAR_7 = VAR_6->cpu;
 FUNC_1(VAR_7->cabac_table, VAR_2, sizeof(VAR_7->cabac_table));

 FUNC_2(&VAR_8, VAR_3->dst_fmt.pixelformat,
       VAR_3->dst_fmt.width, VAR_3->dst_fmt.height);
 VAR_5->pic_size = VAR_8.plane_fmt[0].sizeimage;

 return 0;
}
