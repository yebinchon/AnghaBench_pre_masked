
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct xlp_spi_priv {int done; int spi_clk; struct clk* base; } ;
struct TYPE_8__ {int of_node; } ;
struct spi_master {int mode_bits; TYPE_1__ dev; int transfer_one; int setup; int num_chipselect; scalar_t__ bus_num; } ;
struct TYPE_9__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; int name; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 struct clk* FUNC_4 (TYPE_2__*,int *) ;
 struct xlp_spi_priv* FUNC_5 (TYPE_2__*,int,int ) ;
 struct clk* FUNC_6 (struct platform_device*,int ) ;
 int FUNC_7 (TYPE_2__*,int,int ,int ,int ,struct xlp_spi_priv*) ;
 int FUNC_8 (TYPE_2__*,struct spi_master*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct platform_device*,int ) ;
 struct spi_master* FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (struct spi_master*) ;
 int FUNC_13 (struct spi_master*,struct xlp_spi_priv*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (struct xlp_spi_priv*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_9)
{
 struct spi_master *VAR_10;
 struct xlp_spi_priv *VAR_11;
 struct clk *VAR_12;
 int VAR_13, VAR_14;

 VAR_11 = FUNC_5(&VAR_9->dev, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->base = FUNC_6(VAR_9, 0);
 if (FUNC_0(VAR_11->base))
  return FUNC_1(VAR_11->base);

 VAR_13 = FUNC_10(VAR_9, 0);
 if (VAR_13 < 0)
  return VAR_13;
 VAR_14 = FUNC_7(&VAR_9->dev, VAR_13, VAR_6, 0,
   VAR_9->name, VAR_11);
 if (VAR_14) {
  FUNC_3(&VAR_9->dev, "unable to request irq %d\n", VAR_13);
  return VAR_14;
 }

 VAR_12 = FUNC_4(&VAR_9->dev, ((void*)0));
 if (FUNC_0(VAR_12)) {
  FUNC_3(&VAR_9->dev, "could not get spi clock\n");
  return FUNC_1(VAR_12);
 }

 VAR_11->spi_clk = FUNC_2(VAR_12);

 VAR_10 = FUNC_11(&VAR_9->dev, 0);
 if (!VAR_10) {
  FUNC_3(&VAR_9->dev, "could not alloc master\n");
  return -VAR_0;
 }

 VAR_10->bus_num = 0;
 VAR_10->num_chipselect = VAR_5;
 VAR_10->mode_bits = VAR_3 | VAR_2 | VAR_4;
 VAR_10->setup = VAR_7;
 VAR_10->transfer_one = VAR_8;
 VAR_10->dev.of_node = VAR_9->dev.of_node;

 FUNC_9(&VAR_11->done);
 FUNC_13(VAR_10, VAR_11);
 FUNC_14(VAR_11);


 VAR_14 = FUNC_8(&VAR_9->dev, VAR_10);
 if (VAR_14) {
  FUNC_3(&VAR_9->dev, "spi register master failed!\n");
  FUNC_12(VAR_10);
  return VAR_14;
 }

 return 0;
}
