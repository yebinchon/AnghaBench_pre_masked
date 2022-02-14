
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int of_node; } ;
struct spi_device {int bits_per_word; struct device dev; } ;
struct sja1105_tagger_data {int meta_lock; int rxtstamp_work; int skb_rxtstamp_queue; } ;
struct sja1105_private {struct dsa_switch* ds; int mgmt_lock; struct sja1105_port* ports; struct sja1105_tagger_data tagger_data; TYPE_2__* info; struct spi_device* spidev; int reset_gpio; } ;
struct sja1105_port {struct sja1105_tagger_data* data; TYPE_1__* dp; } ;
struct dsa_switch {TYPE_1__* ports; struct sja1105_private* priv; int * ops; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {struct sja1105_port* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*,int ) ;
 int FUNC_5 (struct device*,char*,int ) ;
 struct sja1105_private* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct dsa_switch*) ;
 struct dsa_switch* FUNC_8 (struct device*,int) ;
 int FUNC_9 (int *) ;
 TYPE_2__* FUNC_10 (struct device*) ;
 int FUNC_11 (struct sja1105_private*) ;
 int FUNC_12 (int ,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (struct dsa_switch*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct spi_device*,struct sja1105_private*) ;
 int FUNC_16 (struct spi_device*) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct spi_device *VAR_7)
{
 struct sja1105_tagger_data *VAR_8;
 struct device *VAR_9 = &VAR_7->dev;
 struct sja1105_private *VAR_10;
 struct dsa_switch *VAR_11;
 int VAR_12, VAR_13;

 if (!VAR_9->of_node) {
  FUNC_3(VAR_9, "No DTS bindings for SJA1105 driver\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_6(VAR_9, sizeof(struct sja1105_private), VAR_2);
 if (!VAR_10)
  return -VAR_1;


 VAR_10->reset_gpio = FUNC_5(VAR_9, "reset", VAR_3);
 if (FUNC_1(VAR_10->reset_gpio))
  FUNC_2(VAR_9, "reset-gpios not defined, ignoring\n");
 else
  FUNC_12(VAR_10->reset_gpio, 1, 1);




 VAR_10->spidev = VAR_7;
 FUNC_15(VAR_7, VAR_10);


 VAR_7->bits_per_word = 8;
 VAR_12 = FUNC_16(VAR_7);
 if (VAR_12 < 0) {
  FUNC_3(VAR_9, "Could not init SPI\n");
  return VAR_12;
 }

 VAR_10->info = FUNC_10(VAR_9);


 VAR_12 = FUNC_11(VAR_10);
 if (VAR_12 < 0) {
  FUNC_3(VAR_9, "Device ID check failed: %d\n", VAR_12);
  return VAR_12;
 }

 FUNC_4(VAR_9, "Probed switch chip: %s\n", VAR_10->info->name);

 VAR_11 = FUNC_8(VAR_9, VAR_4);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->ops = &VAR_6;
 VAR_11->priv = VAR_10;
 VAR_10->ds = VAR_11;

 VAR_8 = &VAR_10->tagger_data;
 FUNC_14(&VAR_8->skb_rxtstamp_queue);
 FUNC_0(&VAR_8->rxtstamp_work, VAR_5);
 FUNC_17(&VAR_8->meta_lock);


 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  struct sja1105_port *VAR_14 = &VAR_10->ports[VAR_13];

  VAR_11->ports[VAR_13].priv = VAR_14;
  VAR_14->dp = &VAR_11->ports[VAR_13];
  VAR_14->data = VAR_8;
 }
 FUNC_9(&VAR_10->mgmt_lock);

 FUNC_13(VAR_11);

 return FUNC_7(VAR_10->ds);
}
