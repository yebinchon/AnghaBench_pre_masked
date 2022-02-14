
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spi_device {int bits_per_word; int max_speed_hz; int dev; } ;
struct net_device {int flags; int * netdev_ops; } ;
struct TYPE_4__ {int freq; } ;
struct TYPE_5__ {int ctrlmode_supported; TYPE_1__ clock; int do_set_mode; int * bittiming_const; } ;
struct mcp251x_priv {int model; struct clk* power; void* spi_rx_buf; void* spi_tx_buf; int mcp_lock; struct spi_device* spi; struct clk* transceiver; struct clk* clk; struct net_device* net; TYPE_2__ can; } ;
struct mcp251x_platform_data {int oscillator_frequency; } ;
struct clk {int dummy; } ;
typedef enum mcp251x_model { ____Placeholder_mcp251x_model } mcp251x_model ;
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
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct net_device*,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 struct net_device* FUNC_3 (int,int ) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (struct clk*) ;
 int FUNC_6 (struct clk*) ;
 int FUNC_7 (int *,char*,int) ;
 struct mcp251x_platform_data* FUNC_8 (int *) ;
 void* FUNC_9 (int *) ;
 int FUNC_10 (struct net_device*) ;
 struct clk* FUNC_11 (int *,int *) ;
 void* FUNC_12 (int *,int ,int ) ;
 void* FUNC_13 (int *,char*) ;
 int FUNC_14 (struct net_device*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_15 (struct spi_device*) ;
 int FUNC_16 (struct spi_device*) ;
 scalar_t__ FUNC_17 (struct spi_device*) ;
 int VAR_13 ;
 int FUNC_18 (struct clk*,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct net_device*,char*,int) ;
 struct mcp251x_priv* FUNC_21 (struct net_device*) ;
 int FUNC_22 (struct net_device*) ;
 TYPE_3__* FUNC_23 (struct spi_device*) ;
 int FUNC_24 (struct spi_device*,struct mcp251x_priv*) ;
 int FUNC_25 (struct spi_device*) ;

__attribute__((used)) static int FUNC_26(struct spi_device *VAR_14)
{
 const void *VAR_15 = FUNC_9(&VAR_14->dev);
 struct mcp251x_platform_data *VAR_16 = FUNC_8(&VAR_14->dev);
 struct net_device *VAR_17;
 struct mcp251x_priv *VAR_18;
 struct clk *VAR_19;
 int VAR_20, VAR_21;

 VAR_19 = FUNC_11(&VAR_14->dev, ((void*)0));
 if (FUNC_0(VAR_19))
  return FUNC_1(VAR_19);

 VAR_20 = FUNC_5(VAR_19);
 if (VAR_20 == 0 && VAR_16)
  VAR_20 = VAR_16->oscillator_frequency;


 if (VAR_20 < 1000000 || VAR_20 > 25000000)
  return -VAR_6;


 VAR_17 = FUNC_3(sizeof(struct mcp251x_priv), VAR_10);
 if (!VAR_17)
  return -VAR_4;

 VAR_21 = FUNC_6(VAR_19);
 if (VAR_21)
  goto out_free;

 VAR_17->netdev_ops = &VAR_13;
 VAR_17->flags |= VAR_8;

 VAR_18 = FUNC_21(VAR_17);
 VAR_18->can.bittiming_const = &VAR_11;
 VAR_18->can.do_set_mode = VAR_12;
 VAR_18->can.clock.freq = VAR_20 / 2;
 VAR_18->can.ctrlmode_supported = VAR_0 |
  VAR_2 | VAR_1;
 if (VAR_15)
  VAR_18->model = (enum mcp251x_model)VAR_15;
 else
  VAR_18->model = FUNC_23(VAR_14)->driver_data;
 VAR_18->net = VAR_17;
 VAR_18->clk = VAR_19;

 FUNC_24(VAR_14, VAR_18);


 VAR_14->bits_per_word = 8;
 if (FUNC_17(VAR_14))
  VAR_14->max_speed_hz = VAR_14->max_speed_hz ? : 5 * 1000 * 1000;
 else
  VAR_14->max_speed_hz = VAR_14->max_speed_hz ? : 10 * 1000 * 1000;
 VAR_21 = FUNC_25(VAR_14);
 if (VAR_21)
  goto out_clk;

 VAR_18->power = FUNC_13(&VAR_14->dev, "vdd");
 VAR_18->transceiver = FUNC_13(&VAR_14->dev, "xceiver");
 if ((FUNC_1(VAR_18->power) == -VAR_5) ||
     (FUNC_1(VAR_18->transceiver) == -VAR_5)) {
  VAR_21 = -VAR_5;
  goto out_clk;
 }

 VAR_21 = FUNC_18(VAR_18->power, 1);
 if (VAR_21)
  goto out_clk;

 VAR_18->spi = VAR_14;
 FUNC_19(&VAR_18->mcp_lock);

 VAR_18->spi_tx_buf = FUNC_12(&VAR_14->dev, VAR_9,
     VAR_7);
 if (!VAR_18->spi_tx_buf) {
  VAR_21 = -VAR_4;
  goto error_probe;
 }

 VAR_18->spi_rx_buf = FUNC_12(&VAR_14->dev, VAR_9,
     VAR_7);
 if (!VAR_18->spi_rx_buf) {
  VAR_21 = -VAR_4;
  goto error_probe;
 }

 FUNC_2(VAR_17, &VAR_14->dev);


 VAR_21 = FUNC_15(VAR_14);
 if (VAR_21) {
  if (VAR_21 == -VAR_3)
   FUNC_7(&VAR_14->dev, "Cannot initialize MCP%x. Wrong wiring?\n",
    VAR_18->model);
  goto error_probe;
 }

 FUNC_16(VAR_14);

 VAR_21 = FUNC_22(VAR_17);
 if (VAR_21)
  goto error_probe;

 FUNC_10(VAR_17);

 FUNC_20(VAR_17, "MCP%x successfully initialized.\n", VAR_18->model);
 return 0;

error_probe:
 FUNC_18(VAR_18->power, 0);

out_clk:
 FUNC_4(VAR_19);

out_free:
 FUNC_14(VAR_17);

 FUNC_7(&VAR_14->dev, "Probe failed, err=%d\n", -VAR_21);
 return VAR_21;
}
