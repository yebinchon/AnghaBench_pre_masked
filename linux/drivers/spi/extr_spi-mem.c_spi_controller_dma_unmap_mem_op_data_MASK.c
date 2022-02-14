
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


struct TYPE_11__ {scalar_t__ dir; int nbytes; } ;
struct spi_mem_op {TYPE_5__ data; } ;
struct TYPE_10__ {struct device* parent; } ;
struct spi_controller {TYPE_4__ dev; TYPE_3__* dma_rx; TYPE_6__* dma_tx; } ;
struct sg_table {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_12__ {TYPE_1__* device; } ;
struct TYPE_9__ {TYPE_2__* device; } ;
struct TYPE_8__ {struct device* dev; } ;
struct TYPE_7__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct spi_controller*,struct device*,struct sg_table*,int ) ;

void FUNC_1(struct spi_controller *VAR_4,
       const struct spi_mem_op *VAR_5,
       struct sg_table *VAR_6)
{
 struct device *VAR_7;

 if (!VAR_5->data.nbytes)
  return;

 if (VAR_5->data.dir == VAR_3 && VAR_4->dma_tx)
  VAR_7 = VAR_4->dma_tx->device->dev;
 else if (VAR_5->data.dir == VAR_2 && VAR_4->dma_rx)
  VAR_7 = VAR_4->dma_rx->device->dev;
 else
  VAR_7 = VAR_4->dev.parent;

 FUNC_0(VAR_4, VAR_7, VAR_6,
        VAR_5->data.dir == VAR_2 ?
        VAR_0 : VAR_1);
}
