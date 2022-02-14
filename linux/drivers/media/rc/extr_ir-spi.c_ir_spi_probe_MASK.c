
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {int of_node; } ;
struct spi_device {TYPE_2__ dev; } ;
struct ir_spi_data {TYPE_1__* rc; int freq; int negated; struct spi_device* spi; int regulator; } ;
struct TYPE_8__ {char* device_name; struct ir_spi_data* priv; int driver_name; int (* s_tx_duty_cycle ) (TYPE_1__*,int) ;int s_tx_carrier; int tx_ir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 struct ir_spi_data* FUNC_2 (TYPE_2__*,int,int ) ;
 TYPE_1__* FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*,int*) ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_7)
{
 int VAR_8;
 u8 VAR_9;
 struct ir_spi_data *VAR_10;

 VAR_10 = FUNC_2(&VAR_7->dev, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->regulator = FUNC_5(&VAR_7->dev, "irda_regulator");
 if (FUNC_0(VAR_10->regulator))
  return FUNC_1(VAR_10->regulator);

 VAR_10->rc = FUNC_3(&VAR_7->dev, VAR_4);
 if (!VAR_10->rc)
  return -VAR_0;

 VAR_10->rc->tx_ir = VAR_6;
 VAR_10->rc->s_tx_carrier = VAR_5;
 VAR_10->rc->s_tx_duty_cycle = FUNC_6;
 VAR_10->rc->device_name = "IR SPI";
 VAR_10->rc->driver_name = VAR_3;
 VAR_10->rc->priv = VAR_10;
 VAR_10->spi = VAR_7;

 VAR_10->negated = FUNC_7(VAR_7->dev.of_node,
       "led-active-low");
 VAR_8 = FUNC_8(VAR_7->dev.of_node, "duty-cycle", &VAR_9);
 if (VAR_8)
  VAR_9 = 50;





 FUNC_6(VAR_10->rc, VAR_9);

 VAR_10->freq = VAR_2;

 return FUNC_4(&VAR_7->dev, VAR_10->rc);
}
