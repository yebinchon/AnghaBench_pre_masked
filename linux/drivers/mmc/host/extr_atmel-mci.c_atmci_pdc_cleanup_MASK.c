
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_data {int sg_len; int sg; } ;
struct atmel_mci {TYPE_1__* pdev; struct mmc_data* data; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct mmc_data*) ;

__attribute__((used)) static void FUNC_2(struct atmel_mci *VAR_0)
{
 struct mmc_data *VAR_1 = VAR_0->data;

 if (VAR_1)
  FUNC_0(&VAR_0->pdev->dev,
    VAR_1->sg, VAR_1->sg_len,
    FUNC_1(VAR_1));
}
