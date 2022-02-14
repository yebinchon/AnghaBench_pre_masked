
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mmc_data {int sg_len; int sg; } ;
struct TYPE_6__ {TYPE_2__* chan; } ;
struct atmel_mci {TYPE_3__ dma; struct mmc_data* data; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct mmc_data*) ;

__attribute__((used)) static void FUNC_2(struct atmel_mci *VAR_0)
{
 struct mmc_data *VAR_1 = VAR_0->data;

 if (VAR_1)
  FUNC_0(VAR_0->dma.chan->device->dev,
    VAR_1->sg, VAR_1->sg_len,
    FUNC_1(VAR_1));
}
