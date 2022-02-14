
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qla_hw_data {scalar_t__ exlogin_size; int * exlogin_buf; int exlogin_buf_dma; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,scalar_t__,int *,int ) ;

void
FUNC_1(struct qla_hw_data *VAR_0)
{
 if (VAR_0->exlogin_buf) {
  FUNC_0(&VAR_0->pdev->dev, VAR_0->exlogin_size,
      VAR_0->exlogin_buf, VAR_0->exlogin_buf_dma);
  VAR_0->exlogin_buf = ((void*)0);
  VAR_0->exlogin_size = 0;
 }
}
