
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qla_hw_data {scalar_t__ exchoffld_size; int * exchoffld_buf; int exchoffld_buf_dma; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,scalar_t__,int *,int ) ;

void
FUNC_1(struct qla_hw_data *VAR_0)
{
 if (VAR_0->exchoffld_buf) {
  FUNC_0(&VAR_0->pdev->dev, VAR_0->exchoffld_size,
      VAR_0->exchoffld_buf, VAR_0->exchoffld_buf_dma);
  VAR_0->exchoffld_buf = ((void*)0);
  VAR_0->exchoffld_size = 0;
 }
}
