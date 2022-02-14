
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spi_device {int bits_per_word; int dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct net_device {int flags; int * netdev_ops; } ;
struct TYPE_4__ {int freq; } ;
struct TYPE_5__ {int ctrlmode_supported; TYPE_1__ clock; int do_get_berr_counter; int do_set_mode; int * bittiming_const; } ;
struct hi3110_priv {int model; struct clk* power; void* spi_rx_buf; void* spi_tx_buf; int hi3110_lock; struct spi_device* spi; struct clk* transceiver; struct clk* clk; struct net_device* net; TYPE_2__ can; } ;
struct clk {int dummy; } ;
typedef enum hi3110_model { ____Placeholder_hi3110_model } hi3110_model ;
struct TYPE_6__ {int driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct net_device*,int *) ;
 struct net_device* FUNC_3 (int,int ) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (struct clk*) ;
 int FUNC_6 (struct clk*) ;
 int FUNC_7 (int *,char*,...) ;
 int FUNC_8 (struct net_device*) ;
 struct clk* FUNC_9 (int *,int *) ;
 void* FUNC_10 (int *,int ,int ) ;
 void* FUNC_11 (int *,char*) ;
 int FUNC_12 (struct net_device*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_13 (struct spi_device*) ;
 int FUNC_14 (struct spi_device*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_15 (struct clk*,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct net_device*,char*,int) ;
 struct hi3110_priv* FUNC_18 (struct net_device*) ;
 struct of_device_id* FUNC_19 (int ,int *) ;
 int FUNC_20 (struct net_device*) ;
 TYPE_3__* FUNC_21 (struct spi_device*) ;
 int FUNC_22 (struct spi_device*,struct hi3110_priv*) ;
 int FUNC_23 (struct spi_device*) ;

__attribute__((used)) static int FUNC_24(struct spi_device *VAR_17)
{
 const struct of_device_id *VAR_18 = FUNC_19(VAR_16,
          &VAR_17->dev);
 struct net_device *VAR_19;
 struct hi3110_priv *VAR_20;
 struct clk *VAR_21;
 int VAR_22, VAR_23;

 VAR_21 = FUNC_9(&VAR_17->dev, ((void*)0));
 if (FUNC_0(VAR_21)) {
  FUNC_7(&VAR_17->dev, "no CAN clock source defined\n");
  return FUNC_1(VAR_21);
 }
 VAR_22 = FUNC_5(VAR_21);


 if (VAR_22 > 40000000)
  return -VAR_7;


 VAR_19 = FUNC_3(sizeof(struct hi3110_priv), VAR_10);
 if (!VAR_19)
  return -VAR_5;

 if (!FUNC_0(VAR_21)) {
  VAR_23 = FUNC_6(VAR_21);
  if (VAR_23)
   goto out_free;
 }

 VAR_19->netdev_ops = &VAR_15;
 VAR_19->flags |= VAR_11;

 VAR_20 = FUNC_18(VAR_19);
 VAR_20->can.bittiming_const = &VAR_12;
 VAR_20->can.do_set_mode = VAR_13;
 VAR_20->can.do_get_berr_counter = VAR_14;
 VAR_20->can.clock.freq = VAR_22 / 2;
 VAR_20->can.ctrlmode_supported = VAR_0 |
  VAR_3 |
  VAR_2 |
  VAR_1;

 if (VAR_18)
  VAR_20->model = (enum hi3110_model)VAR_18->data;
 else
  VAR_20->model = FUNC_21(VAR_17)->driver_data;
 VAR_20->net = VAR_19;
 VAR_20->clk = VAR_21;

 FUNC_22(VAR_17, VAR_20);


 VAR_17->bits_per_word = 8;
 VAR_23 = FUNC_23(VAR_17);
 if (VAR_23)
  goto out_clk;

 VAR_20->power = FUNC_11(&VAR_17->dev, "vdd");
 VAR_20->transceiver = FUNC_11(&VAR_17->dev, "xceiver");
 if ((FUNC_1(VAR_20->power) == -VAR_6) ||
     (FUNC_1(VAR_20->transceiver) == -VAR_6)) {
  VAR_23 = -VAR_6;
  goto out_clk;
 }

 VAR_23 = FUNC_15(VAR_20->power, 1);
 if (VAR_23)
  goto out_clk;

 VAR_20->spi = VAR_17;
 FUNC_16(&VAR_20->hi3110_lock);

 VAR_20->spi_tx_buf = FUNC_10(&VAR_17->dev, VAR_9,
     VAR_8);
 if (!VAR_20->spi_tx_buf) {
  VAR_23 = -VAR_5;
  goto error_probe;
 }
 VAR_20->spi_rx_buf = FUNC_10(&VAR_17->dev, VAR_9,
     VAR_8);

 if (!VAR_20->spi_rx_buf) {
  VAR_23 = -VAR_5;
  goto error_probe;
 }

 FUNC_2(VAR_19, &VAR_17->dev);

 VAR_23 = FUNC_13(VAR_17);
 if (VAR_23) {
  if (VAR_23 == -VAR_4)
   FUNC_7(&VAR_17->dev, "Cannot initialize %x. Wrong wiring?\n",
    VAR_20->model);
  goto error_probe;
 }
 FUNC_14(VAR_17);

 VAR_23 = FUNC_20(VAR_19);
 if (VAR_23)
  goto error_probe;

 FUNC_8(VAR_19);
 FUNC_17(VAR_19, "%x successfully initialized.\n", VAR_20->model);

 return 0;

 error_probe:
 FUNC_15(VAR_20->power, 0);

 out_clk:
 if (!FUNC_0(VAR_21))
  FUNC_4(VAR_21);

 out_free:
 FUNC_12(VAR_19);

 FUNC_7(&VAR_17->dev, "Probe failed, err=%d\n", -VAR_23);
 return VAR_23;
}
