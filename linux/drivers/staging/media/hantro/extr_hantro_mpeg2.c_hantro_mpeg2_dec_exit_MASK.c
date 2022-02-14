
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hantro_dev {int dev; } ;
struct TYPE_3__ {int dma; int cpu; int size; } ;
struct TYPE_4__ {TYPE_1__ qtable; } ;
struct hantro_ctx {TYPE_2__ mpeg2_dec; struct hantro_dev* dev; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

void FUNC_1(struct hantro_ctx *VAR_0)
{
 struct hantro_dev *VAR_1 = VAR_0->dev;

 FUNC_0(VAR_1->dev,
     VAR_0->mpeg2_dec.qtable.size,
     VAR_0->mpeg2_dec.qtable.cpu,
     VAR_0->mpeg2_dec.qtable.dma);
}
