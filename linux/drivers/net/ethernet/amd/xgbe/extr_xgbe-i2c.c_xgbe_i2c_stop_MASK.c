
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ started; } ;
struct xgbe_prv_data {scalar_t__ dev_irq; scalar_t__ i2c_irq; int dev; TYPE_1__ i2c; int netdev; } ;


 int FUNC_0 (int ,scalar_t__,struct xgbe_prv_data*) ;
 int VAR_0 ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,char*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_5(struct xgbe_prv_data *VAR_1)
{
 if (!VAR_1->i2c.started)
  return;

 FUNC_1(VAR_1, VAR_0, VAR_1->netdev, "stopping I2C\n");

 VAR_1->i2c.started = 0;

 FUNC_4(VAR_1);
 FUNC_3(VAR_1);
 FUNC_2(VAR_1);

 if (VAR_1->dev_irq != VAR_1->i2c_irq)
  FUNC_0(VAR_1->dev, VAR_1->i2c_irq, VAR_1);
}
