
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int in; } ;
struct TYPE_14__ {scalar_t__ dir; int nbytes; TYPE_6__ buf; } ;
struct spi_mem_op {TYPE_7__ data; } ;
struct TYPE_12__ {struct device* parent; } ;
struct spi_controller {TYPE_5__ dev; TYPE_4__* dma_rx; TYPE_2__* dma_tx; } ;
struct sg_table {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_11__ {TYPE_3__* device; } ;
struct TYPE_10__ {struct device* dev; } ;
struct TYPE_9__ {TYPE_1__* device; } ;
struct TYPE_8__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct spi_controller*,struct device*,struct sg_table*,int ,int ,int ) ;

int FUNC_1(struct spi_controller *VAR_5,
           const struct spi_mem_op *VAR_6,
           struct sg_table *VAR_7)
{
 struct device *VAR_8;

 if (!VAR_6->data.nbytes)
  return -VAR_2;

 if (VAR_6->data.dir == VAR_4 && VAR_5->dma_tx)
  VAR_8 = VAR_5->dma_tx->device->dev;
 else if (VAR_6->data.dir == VAR_3 && VAR_5->dma_rx)
  VAR_8 = VAR_5->dma_rx->device->dev;
 else
  VAR_8 = VAR_5->dev.parent;

 if (!VAR_8)
  return -VAR_2;

 return FUNC_0(VAR_5, VAR_8, VAR_7, VAR_6->data.buf.in, VAR_6->data.nbytes,
      VAR_6->data.dir == VAR_3 ?
      VAR_0 : VAR_1);
}
