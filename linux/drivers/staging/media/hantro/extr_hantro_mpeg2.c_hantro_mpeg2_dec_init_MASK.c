
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hantro_dev {int dev; } ;
struct TYPE_3__ {int size; int cpu; int dma; } ;
struct TYPE_4__ {TYPE_1__ qtable; } ;
struct hantro_ctx {TYPE_2__ mpeg2_dec; struct hantro_dev* dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int *,int ) ;
 int VAR_2 ;

int FUNC_2(struct hantro_ctx *VAR_3)
{
 struct hantro_dev *VAR_4 = VAR_3->dev;

 VAR_3->mpeg2_dec.qtable.size = FUNC_0(VAR_2) * 4;
 VAR_3->mpeg2_dec.qtable.cpu =
  FUNC_1(VAR_4->dev,
       VAR_3->mpeg2_dec.qtable.size,
       &VAR_3->mpeg2_dec.qtable.dma,
       VAR_1);
 if (!VAR_3->mpeg2_dec.qtable.cpu)
  return -VAR_0;
 return 0;
}
