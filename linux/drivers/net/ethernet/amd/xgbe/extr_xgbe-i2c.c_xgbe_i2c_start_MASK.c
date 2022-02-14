
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int started; } ;
struct xgbe_prv_data {scalar_t__ dev_irq; scalar_t__ i2c_irq; TYPE_1__ i2c; int netdev; int i2c_name; int dev; int tasklet_i2c; } ;


 int FUNC_0 (int ,scalar_t__,int ,int ,int ,struct xgbe_prv_data*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct xgbe_prv_data*,int ,int ,char*) ;
 int FUNC_3 (int *,int ,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct xgbe_prv_data *VAR_3)
{
 int VAR_4;

 if (VAR_3->i2c.started)
  return 0;

 FUNC_2(VAR_3, VAR_0, VAR_3->netdev, "starting I2C\n");


 if (VAR_3->dev_irq != VAR_3->i2c_irq) {
  FUNC_3(&VAR_3->tasklet_i2c, VAR_2,
        (unsigned long)VAR_3);

  VAR_4 = FUNC_0(VAR_3->dev, VAR_3->i2c_irq,
           VAR_1, 0, VAR_3->i2c_name,
           VAR_3);
  if (VAR_4) {
   FUNC_1(VAR_3->netdev, "i2c irq request failed\n");
   return VAR_4;
  }
 }

 VAR_3->i2c.started = 1;

 return 0;
}
