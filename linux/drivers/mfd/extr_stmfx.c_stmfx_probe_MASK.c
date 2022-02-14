
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmfx {int irq_domain; int lock; int map; struct device* dev; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int irq; struct device dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int) ;
 struct stmfx* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int ,int ,int ,int *,int ,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (struct i2c_client*,struct stmfx*) ;
 int FUNC_8 (int *) ;
 int VAR_5 ;
 int FUNC_9 (struct i2c_client*) ;
 int FUNC_10 (struct i2c_client*) ;
 int FUNC_11 (struct i2c_client*) ;
 int FUNC_12 (struct i2c_client*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_7,
         const struct i2c_device_id *VAR_8)
{
 struct device *VAR_9 = &VAR_7->dev;
 struct stmfx *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(VAR_9, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_0;

 FUNC_7(VAR_7, VAR_10);

 VAR_10->dev = VAR_9;

 VAR_10->map = FUNC_6(VAR_7, &VAR_6);
 if (FUNC_1(VAR_10->map)) {
  VAR_11 = FUNC_2(VAR_10->map);
  FUNC_3(VAR_9, "Failed to allocate register map: %d\n", VAR_11);
  return VAR_11;
 }

 FUNC_8(&VAR_10->lock);

 VAR_11 = FUNC_10(VAR_7);
 if (VAR_11) {
  if (VAR_11 == -VAR_2)
   return -VAR_1;
  return VAR_11;
 }

 if (VAR_7->irq < 0) {
  FUNC_3(VAR_9, "Failed to get IRQ: %d\n", VAR_7->irq);
  VAR_11 = VAR_7->irq;
  goto err_chip_exit;
 }

 VAR_11 = FUNC_12(VAR_7);
 if (VAR_11)
  goto err_chip_exit;

 VAR_11 = FUNC_5(VAR_9, VAR_4,
       VAR_5, FUNC_0(VAR_5), ((void*)0),
       0, VAR_10->irq_domain);
 if (VAR_11)
  goto err_irq_exit;

 return 0;

err_irq_exit:
 FUNC_11(VAR_7);
err_chip_exit:
 FUNC_9(VAR_7);

 return VAR_11;
}
