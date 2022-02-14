
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hantro_aux_buf {int dma; int cpu; int size; } ;
struct hantro_h264_dec_hw_ctx {struct hantro_aux_buf priv; } ;
struct hantro_dev {int dev; } ;
struct hantro_ctx {struct hantro_h264_dec_hw_ctx h264_dec; struct hantro_dev* dev; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

void FUNC_1(struct hantro_ctx *VAR_0)
{
 struct hantro_dev *VAR_1 = VAR_0->dev;
 struct hantro_h264_dec_hw_ctx *VAR_2 = &VAR_0->h264_dec;
 struct hantro_aux_buf *VAR_3 = &VAR_2->priv;

 FUNC_0(VAR_1->dev, VAR_3->size, VAR_3->cpu, VAR_3->dma);
}
