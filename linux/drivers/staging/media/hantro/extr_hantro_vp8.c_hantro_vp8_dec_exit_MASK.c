
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dma; int cpu; int size; } ;
struct TYPE_4__ {int dma; int cpu; int size; } ;
struct hantro_vp8_dec_hw_ctx {TYPE_1__ prob_tbl; TYPE_2__ segment_map; } ;
struct hantro_dev {int dev; } ;
struct hantro_ctx {struct hantro_dev* dev; struct hantro_vp8_dec_hw_ctx vp8_dec; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

void FUNC_1(struct hantro_ctx *VAR_0)
{
 struct hantro_vp8_dec_hw_ctx *VAR_1 = &VAR_0->vp8_dec;
 struct hantro_dev *VAR_2 = VAR_0->dev;

 FUNC_0(VAR_2->dev, VAR_1->segment_map.size,
     VAR_1->segment_map.cpu, VAR_1->segment_map.dma);
 FUNC_0(VAR_2->dev, VAR_1->prob_tbl.size,
     VAR_1->prob_tbl.cpu, VAR_1->prob_tbl.dma);
}
