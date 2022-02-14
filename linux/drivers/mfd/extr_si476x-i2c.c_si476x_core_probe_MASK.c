
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_rds_data {int dummy; } ;
struct si476x_platform_data {int gpio_reset; int pinmux; int diversity_mode; int power_up_parameters; } ;
struct si476x_pinmux {int dummy; } ;
struct TYPE_6__ {scalar_t__ dclk; scalar_t__ dfs; scalar_t__ dout; scalar_t__ xout; } ;
struct si476x_core {int gpio_reset; int rds_fifo_depth; scalar_t__ chip_id; int rds_fifo; struct mfd_cell* cells; TYPE_2__ pinmux; int status_monitor; int rds_fifo_drainer; int rds_read_queue; int rds_drainer_status_lock; int tuning; int command; int cmd_lock; TYPE_3__* supplies; int diversity_mode; TYPE_2__ power_up_parameters; int power_state; int is_alive; int regmap; struct i2c_client* client; } ;
struct mfd_cell {char* name; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct i2c_client {int irq; scalar_t__ addr; TYPE_1__* adapter; int dev; int name; } ;
struct TYPE_7__ {char* supply; } ;
struct TYPE_5__ {int nr; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*,...) ;
 struct si476x_platform_data* FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;
 struct si476x_core* FUNC_10 (int *,int,int ) ;
 int FUNC_11 (struct si476x_core*) ;
 int FUNC_12 (int *,int ,TYPE_3__*) ;
 int FUNC_13 (int *,int,int *,int ,int,int ,struct si476x_core*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (int,char*) ;
 int FUNC_19 (struct i2c_client*,struct si476x_core*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int,int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (TYPE_2__*,int *,int) ;
 int FUNC_24 (int *,scalar_t__,struct mfd_cell*,int,int *,int ,int *) ;
 int FUNC_25 (int *) ;
 int VAR_16 ;
 int FUNC_26 (struct si476x_core*) ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_27(struct i2c_client *VAR_19,
        const struct i2c_device_id *VAR_20)
{
 int VAR_21;
 struct si476x_core *VAR_22;
 struct si476x_platform_data *VAR_23;
 struct mfd_cell *VAR_24;
 int VAR_25;

 VAR_22 = FUNC_10(&VAR_19->dev, sizeof(*VAR_22), VAR_3);
 if (!VAR_22)
  return -VAR_2;

 VAR_22->client = VAR_19;

 VAR_22->regmap = FUNC_11(VAR_22);
 if (FUNC_3(VAR_22->regmap)) {
  VAR_21 = FUNC_4(VAR_22->regmap);
  FUNC_7(&VAR_19->dev,
   "Failed to allocate register map: %d\n",
   VAR_21);
  return VAR_21;
 }

 FUNC_19(VAR_19, VAR_22);

 FUNC_5(&VAR_22->is_alive, 0);
 VAR_22->power_state = VAR_13;

 VAR_23 = FUNC_8(&VAR_19->dev);
 if (VAR_23) {
  FUNC_23(&VAR_22->power_up_parameters,
         &VAR_23->power_up_parameters,
         sizeof(VAR_22->power_up_parameters));

  VAR_22->gpio_reset = -1;
  if (FUNC_17(VAR_23->gpio_reset)) {
   VAR_21 = FUNC_18(VAR_23->gpio_reset, "si476x reset");
   if (VAR_21) {
    FUNC_7(&VAR_19->dev,
     "Failed to request gpio: %d\n", VAR_21);
    return VAR_21;
   }
   VAR_22->gpio_reset = VAR_23->gpio_reset;
   FUNC_15(VAR_22->gpio_reset, 0);
  }

  VAR_22->diversity_mode = VAR_23->diversity_mode;
  FUNC_23(&VAR_22->pinmux, &VAR_23->pinmux,
         sizeof(struct si476x_pinmux));
 } else {
  FUNC_7(&VAR_19->dev, "No platform data provided\n");
  return -VAR_0;
 }

 VAR_22->supplies[0].supply = "vd";
 VAR_22->supplies[1].supply = "va";
 VAR_22->supplies[2].supply = "vio1";
 VAR_22->supplies[3].supply = "vio2";

 VAR_21 = FUNC_12(&VAR_19->dev,
           FUNC_0(VAR_22->supplies),
           VAR_22->supplies);
 if (VAR_21) {
  FUNC_7(&VAR_19->dev, "Failed to get all of the regulators\n");
  goto free_gpio;
 }

 FUNC_25(&VAR_22->cmd_lock);
 FUNC_20(&VAR_22->command);
 FUNC_20(&VAR_22->tuning);

 VAR_21 = FUNC_21(&VAR_22->rds_fifo,
      VAR_12 *
      sizeof(struct v4l2_rds_data),
      VAR_3);
 if (VAR_21) {
  FUNC_7(&VAR_19->dev, "Could not allocate the FIFO\n");
  goto free_gpio;
 }
 FUNC_25(&VAR_22->rds_drainer_status_lock);
 FUNC_20(&VAR_22->rds_read_queue);
 FUNC_2(&VAR_22->rds_fifo_drainer, VAR_16);

 if (VAR_19->irq) {
  VAR_21 = FUNC_13(&VAR_19->dev,
       VAR_19->irq, ((void*)0),
       VAR_17,
       VAR_5 |
       VAR_4,
       VAR_19->name, VAR_22);
  if (VAR_21 < 0) {
   FUNC_7(&VAR_19->dev, "Could not request IRQ %d\n",
    VAR_19->irq);
   goto free_kfifo;
  }
  FUNC_14(VAR_19->irq);
  FUNC_6(&VAR_19->dev, "IRQ requested.\n");

  VAR_22->rds_fifo_depth = 20;
 } else {
  FUNC_1(&VAR_22->status_monitor,
      VAR_18);
  FUNC_9(&VAR_19->dev,
    "No IRQ number specified, will use polling\n");

  VAR_22->rds_fifo_depth = 5;
 }

 VAR_22->chip_id = VAR_20->driver_data;

 VAR_21 = FUNC_26(VAR_22);
 if (VAR_21 < 0) {
  VAR_21 = -VAR_1;
  goto free_kfifo;
 }

 VAR_25 = 0;

 VAR_24 = &VAR_22->cells[VAR_14];
 VAR_24->name = "si476x-radio";
 VAR_25++;
 VAR_21 = FUNC_24(&VAR_19->dev,
          (VAR_19->adapter->nr << 8) + VAR_19->addr,
          VAR_22->cells, VAR_25,
          ((void*)0), 0, ((void*)0));
 if (!VAR_21)
  return 0;

free_kfifo:
 FUNC_22(&VAR_22->rds_fifo);

free_gpio:
 if (FUNC_17(VAR_22->gpio_reset))
  FUNC_16(VAR_22->gpio_reset);

 return VAR_21;
}
