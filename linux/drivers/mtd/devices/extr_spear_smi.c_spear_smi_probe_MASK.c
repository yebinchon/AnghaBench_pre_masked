
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct spear_smi_plat_data {scalar_t__ clk_rate; int num_flashes; int * np; } ;
struct spear_smi {scalar_t__ clk_rate; int num_flashes; int clk; struct platform_device* pdev; int cmd_complete; int lock; int io_base; } ;
struct resource {int dummy; } ;
struct TYPE_7__ {struct spear_smi_plat_data* platform_data; struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; int name; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 struct spear_smi_plat_data* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,struct resource*) ;
 void* FUNC_8 (TYPE_1__*,int,int ) ;
 int FUNC_9 (TYPE_1__*,int,int ,int ,int ,struct spear_smi*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct platform_device*,int ) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct spear_smi*) ;
 int FUNC_15 (struct spear_smi*) ;
 int VAR_7 ;
 int FUNC_16 (struct platform_device*,struct device_node*) ;
 int FUNC_17 (struct platform_device*,int,int ) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_8)
{
 struct device_node *VAR_9 = VAR_8->dev.of_node;
 struct spear_smi_plat_data *VAR_10 = ((void*)0);
 struct spear_smi *VAR_11;
 struct resource *VAR_12;
 int VAR_13, VAR_14 = 0;
 int VAR_15;

 if (VAR_9) {
  VAR_10 = FUNC_8(&VAR_8->dev, sizeof(*VAR_10), VAR_3);
  if (!VAR_10) {
   VAR_14 = -VAR_1;
   goto err;
  }
  VAR_8->dev.platform_data = VAR_10;
  VAR_14 = FUNC_16(VAR_8, VAR_9);
  if (VAR_14) {
   VAR_14 = -VAR_0;
   FUNC_4(&VAR_8->dev, "no platform data\n");
   goto err;
  }
 } else {
  VAR_10 = FUNC_5(&VAR_8->dev);
  if (!VAR_10) {
   VAR_14 = -VAR_0;
   FUNC_4(&VAR_8->dev, "no platform data\n");
   goto err;
  }
 }

 VAR_13 = FUNC_12(VAR_8, 0);
 if (VAR_13 < 0) {
  VAR_14 = -VAR_0;
  FUNC_4(&VAR_8->dev, "invalid smi irq\n");
  goto err;
 }

 VAR_11 = FUNC_8(&VAR_8->dev, sizeof(*VAR_11), VAR_2);
 if (!VAR_11) {
  VAR_14 = -VAR_1;
  goto err;
 }

 VAR_12 = FUNC_13(VAR_8, VAR_4, 0);

 VAR_11->io_base = FUNC_7(&VAR_8->dev, VAR_12);
 if (FUNC_0(VAR_11->io_base)) {
  VAR_14 = FUNC_1(VAR_11->io_base);
  goto err;
 }

 VAR_11->pdev = VAR_8;
 VAR_11->clk_rate = VAR_10->clk_rate;

 if (VAR_11->clk_rate > VAR_6)
  VAR_11->clk_rate = VAR_6;

 VAR_11->num_flashes = VAR_10->num_flashes;

 if (VAR_11->num_flashes > VAR_5) {
  FUNC_4(&VAR_8->dev, "exceeding max number of flashes\n");
  VAR_11->num_flashes = VAR_5;
 }

 VAR_11->clk = FUNC_6(&VAR_8->dev, ((void*)0));
 if (FUNC_0(VAR_11->clk)) {
  VAR_14 = FUNC_1(VAR_11->clk);
  goto err;
 }

 VAR_14 = FUNC_3(VAR_11->clk);
 if (VAR_14)
  goto err;

 VAR_14 = FUNC_9(&VAR_8->dev, VAR_13, VAR_7, 0,
          VAR_8->name, VAR_11);
 if (VAR_14) {
  FUNC_4(&VAR_11->pdev->dev, "SMI IRQ allocation failed\n");
  goto err_irq;
 }

 FUNC_11(&VAR_11->lock);
 FUNC_10(&VAR_11->cmd_complete);
 FUNC_15(VAR_11);
 FUNC_14(VAR_8, VAR_11);


 for (VAR_15 = 0; VAR_15 < VAR_11->num_flashes; VAR_15++) {
  VAR_14 = FUNC_17(VAR_8, VAR_15, VAR_10->np[VAR_15]);
  if (VAR_14) {
   FUNC_4(&VAR_11->pdev->dev, "bank setup failed\n");
   goto err_irq;
  }
 }

 return 0;

err_irq:
 FUNC_2(VAR_11->clk);
err:
 return VAR_14;
}
