
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si476x_core {int gpio_reset; int status_monitor; int is_alive; struct i2c_client* client; int regmap; int power_up_parameters; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct si476x_core*,int *) ;
 int FUNC_9 (struct si476x_core*) ;
 int FUNC_10 (struct si476x_core*) ;
 int FUNC_11 (int) ;

int FUNC_12(struct si476x_core *VAR_5, bool VAR_6)
{
 struct i2c_client *VAR_7 = VAR_5->client;
 int VAR_8;

 if (!VAR_6) {
  if (FUNC_5(VAR_5->gpio_reset))
   FUNC_6(VAR_5->gpio_reset, 1);

  if (VAR_7->irq)
   FUNC_4(VAR_7->irq);

  FUNC_11(100);

  if (!VAR_7->irq) {
   FUNC_0(&VAR_5->is_alive, 1);
   FUNC_10(VAR_5);
  }
 } else {
  if (VAR_7->irq)
   FUNC_4(VAR_7->irq);
  else {
   FUNC_0(&VAR_5->is_alive, 1);
   FUNC_10(VAR_5);
  }
 }

 VAR_8 = FUNC_8(VAR_5,
           &VAR_5->power_up_parameters);

 if (VAR_8 < 0) {
  FUNC_2(&VAR_5->client->dev,
   "Power up failure(err = %d)\n",
   VAR_8);
  goto disable_irq;
 }

 if (VAR_7->irq)
  FUNC_0(&VAR_5->is_alive, 1);

 VAR_8 = FUNC_9(VAR_5);
 if (VAR_8 < 0) {
  FUNC_2(&VAR_5->client->dev,
   "Failed to configure pinmux(err = %d)\n",
   VAR_8);
  goto disable_irq;
 }

 if (VAR_7->irq) {
  VAR_8 = FUNC_7(VAR_5->regmap,
       VAR_2,
       VAR_3 |
       VAR_4 |
       VAR_1);
  if (VAR_8 < 0) {
   FUNC_2(&VAR_5->client->dev,
    "Failed to configure interrupt sources"
    "(err = %d)\n", VAR_8);
   goto disable_irq;
  }
 }

 return 0;

disable_irq:
 if (VAR_8 == -VAR_0)
  FUNC_0(&VAR_5->is_alive, 0);

 if (VAR_7->irq)
  FUNC_3(VAR_7->irq);
 else
  FUNC_1(&VAR_5->status_monitor);

 if (FUNC_5(VAR_5->gpio_reset))
  FUNC_6(VAR_5->gpio_reset, 0);

 return VAR_8;
}
