
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dma; int cpu; int size; } ;
struct TYPE_6__ {TYPE_2__ bounce_buffer; } ;
struct hantro_ctx {TYPE_3__ jpeg_enc; TYPE_1__* dev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;

void FUNC_1(struct hantro_ctx *VAR_1)
{
 FUNC_0(VAR_1->dev->dev,
         VAR_1->jpeg_enc.bounce_buffer.size,
         VAR_1->jpeg_enc.bounce_buffer.cpu,
         VAR_1->jpeg_enc.bounce_buffer.dma,
         VAR_0);
}
