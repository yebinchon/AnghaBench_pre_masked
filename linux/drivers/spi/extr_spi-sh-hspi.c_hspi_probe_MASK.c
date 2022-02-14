
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int of_node; } ;
struct spi_controller {int mode_bits; int auto_runtime_pm; int bits_per_word_mask; int transfer_one_message; TYPE_1__ dev; int bus_num; } ;
struct resource {int start; } ;
struct TYPE_10__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; int id; } ;
struct hspi_priv {int addr; TYPE_2__* dev; struct clk* clk; struct spi_controller* ctlr; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct clk* FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,struct spi_controller*) ;
 int VAR_5 ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct hspi_priv*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (struct resource*) ;
 struct spi_controller* FUNC_12 (TYPE_2__*,int) ;
 struct hspi_priv* FUNC_13 (struct spi_controller*) ;
 int FUNC_14 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_6)
{
 struct resource *VAR_7;
 struct spi_controller *VAR_8;
 struct hspi_priv *VAR_9;
 struct clk *VAR_10;
 int VAR_11;


 VAR_7 = FUNC_7(VAR_6, VAR_2, 0);
 if (!VAR_7) {
  FUNC_4(&VAR_6->dev, "invalid resource\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_12(&VAR_6->dev, sizeof(*VAR_9));
 if (!VAR_8)
  return -VAR_1;

 VAR_10 = FUNC_2(&VAR_6->dev, ((void*)0));
 if (FUNC_0(VAR_10)) {
  FUNC_4(&VAR_6->dev, "couldn't get clock\n");
  VAR_11 = -VAR_0;
  goto error0;
 }

 VAR_9 = FUNC_13(VAR_8);
 FUNC_8(VAR_6, VAR_9);


 VAR_9->ctlr = VAR_8;
 VAR_9->dev = &VAR_6->dev;
 VAR_9->clk = VAR_10;
 VAR_9->addr = FUNC_5(VAR_9->dev,
           VAR_7->start, FUNC_11(VAR_7));
 if (!VAR_9->addr) {
  VAR_11 = -VAR_1;
  goto error1;
 }

 FUNC_10(&VAR_6->dev);

 VAR_8->bus_num = VAR_6->id;
 VAR_8->mode_bits = VAR_4 | VAR_3;
 VAR_8->dev.of_node = VAR_6->dev.of_node;
 VAR_8->auto_runtime_pm = 1;
 VAR_8->transfer_one_message = VAR_5;
 VAR_8->bits_per_word_mask = FUNC_1(8);

 VAR_11 = FUNC_6(&VAR_6->dev, VAR_8);
 if (VAR_11 < 0) {
  FUNC_4(&VAR_6->dev, "devm_spi_register_controller error.\n");
  goto error2;
 }

 return 0;

 error2:
 FUNC_9(&VAR_6->dev);
 error1:
 FUNC_3(VAR_10);
 error0:
 FUNC_14(VAR_8);

 return VAR_11;
}
