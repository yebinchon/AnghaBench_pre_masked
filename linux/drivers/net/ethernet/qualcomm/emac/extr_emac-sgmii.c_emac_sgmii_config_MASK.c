
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct sgmii_ops {int dummy; } ;
struct resource {int start; } ;
struct TYPE_7__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct emac_sgmii {int irq; void* base; void* digital; struct sgmii_ops* sgmii_ops; } ;
struct emac_adapter {struct emac_sgmii phy; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 struct device* FUNC_2 (TYPE_1__*,struct sgmii_ops**,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct emac_adapter*) ;
 int FUNC_4 (struct emac_adapter*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 void* FUNC_6 (int ,int ) ;
 int FUNC_7 (void*) ;
 struct platform_device* FUNC_8 (struct device_node*) ;
 struct of_device_id* FUNC_9 (int ,TYPE_1__*) ;
 int FUNC_10 (struct device_node*) ;
 struct device_node* FUNC_11 (int ,char*,int ) ;
 int FUNC_12 (struct platform_device*,int ) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (struct resource*) ;
 struct platform_device* FUNC_16 (struct device*) ;

int FUNC_17(struct platform_device *VAR_6, struct emac_adapter *VAR_7)
{
 struct platform_device *VAR_8 = ((void*)0);
 struct emac_sgmii *VAR_9 = &VAR_7->phy;
 struct resource *VAR_10;
 int VAR_11;

 if (FUNC_5(&VAR_6->dev)) {
  struct device *VAR_12;

  VAR_12 = FUNC_2(&VAR_6->dev, &VAR_9->sgmii_ops,
     VAR_4);

  if (!VAR_12) {
   FUNC_1(&VAR_6->dev, "cannot find internal phy node\n");
   return 0;
  }

  VAR_8 = FUNC_16(VAR_12);
 } else {
  const struct of_device_id *VAR_13;
  struct device_node *VAR_14;

  VAR_14 = FUNC_11(VAR_6->dev.of_node, "internal-phy", 0);
  if (!VAR_14) {
   FUNC_0(&VAR_6->dev, "missing internal-phy property\n");
   return -VAR_1;
  }

  VAR_8 = FUNC_8(VAR_14);
  FUNC_10(VAR_14);
  if (!VAR_8) {
   FUNC_0(&VAR_6->dev, "invalid internal-phy property\n");
   return -VAR_1;
  }

  VAR_13 = FUNC_9(VAR_5, &VAR_8->dev);
  if (!VAR_13) {
   FUNC_0(&VAR_6->dev, "unrecognized internal phy node\n");
   VAR_11 = -VAR_1;
   goto error_put_device;
  }

  VAR_9->sgmii_ops = (struct sgmii_ops *)VAR_13->data;
 }


 VAR_10 = FUNC_13(VAR_8, VAR_3, 0);
 if (!VAR_10) {
  VAR_11 = -VAR_0;
  goto error_put_device;
 }

 VAR_9->base = FUNC_6(VAR_10->start, FUNC_15(VAR_10));
 if (!VAR_9->base) {
  VAR_11 = -VAR_2;
  goto error_put_device;
 }


 VAR_10 = FUNC_13(VAR_8, VAR_3, 1);
 if (VAR_10) {
  VAR_9->digital = FUNC_6(VAR_10->start, FUNC_15(VAR_10));
  if (!VAR_9->digital) {
   VAR_11 = -VAR_2;
   goto error_unmap_base;
  }
 }

 VAR_11 = FUNC_3(VAR_7);
 if (VAR_11)
  goto error;

 FUNC_4(VAR_7);

 VAR_11 = FUNC_12(VAR_8, 0);
 if (VAR_11 > 0)
  VAR_9->irq = VAR_11;




 FUNC_14(&VAR_8->dev);

 return 0;

error:
 if (VAR_9->digital)
  FUNC_7(VAR_9->digital);
error_unmap_base:
 FUNC_7(VAR_9->base);
error_put_device:
 FUNC_14(&VAR_8->dev);

 return VAR_11;
}
