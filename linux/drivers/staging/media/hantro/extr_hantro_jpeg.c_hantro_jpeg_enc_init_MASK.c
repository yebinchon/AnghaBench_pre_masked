
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int cpu; int dma; scalar_t__ size; } ;
struct TYPE_10__ {TYPE_3__ bounce_buffer; } ;
struct TYPE_11__ {TYPE_6__* plane_fmt; } ;
struct hantro_ctx {TYPE_4__ jpeg_enc; TYPE_2__* dev; TYPE_1__* vpu_dst_fmt; TYPE_5__ dst_fmt; } ;
struct TYPE_12__ {scalar_t__ sizeimage; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {scalar_t__ header_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int *,int ,int ) ;

int FUNC_1(struct hantro_ctx *VAR_3)
{
 VAR_3->jpeg_enc.bounce_buffer.size =
  VAR_3->dst_fmt.plane_fmt[0].sizeimage -
  VAR_3->vpu_dst_fmt->header_size;

 VAR_3->jpeg_enc.bounce_buffer.cpu =
  FUNC_0(VAR_3->dev->dev,
    VAR_3->jpeg_enc.bounce_buffer.size,
    &VAR_3->jpeg_enc.bounce_buffer.dma,
    VAR_2,
    VAR_0);
 if (!VAR_3->jpeg_enc.bounce_buffer.cpu)
  return -VAR_1;

 return 0;
}
