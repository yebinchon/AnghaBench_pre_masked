
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mii_bus {char* name; struct mdio_fsl_priv* priv; int id; TYPE_1__* parent; int write; int read; } ;
struct mdio_fsl_priv {int mdio_base; int is_little_endian; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ) ;
 struct mii_bus* FUNC_2 (int) ;
 int FUNC_3 (struct mii_bus*) ;
 int FUNC_4 (struct device_node*,int ,struct resource*) ;
 int FUNC_5 (struct device_node*,int ) ;
 int FUNC_6 (struct mii_bus*,struct device_node*) ;
 int FUNC_7 (struct device_node*,char*) ;
 int FUNC_8 (struct platform_device*,struct mii_bus*) ;
 int FUNC_9 (int ,int ,char*,unsigned long long) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_4)
{
 struct device_node *VAR_5 = VAR_4->dev.of_node;
 struct mii_bus *VAR_6;
 struct resource VAR_7;
 struct mdio_fsl_priv *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_5, 0, &VAR_7);
 if (VAR_9) {
  FUNC_0(&VAR_4->dev, "could not obtain address\n");
  return VAR_9;
 }

 VAR_6 = FUNC_2(sizeof(struct mdio_fsl_priv));
 if (!VAR_6)
  return -VAR_0;

 VAR_6->name = "Freescale XGMAC MDIO Bus";
 VAR_6->read = VAR_2;
 VAR_6->write = VAR_3;
 VAR_6->parent = &VAR_4->dev;
 FUNC_9(VAR_6->id, VAR_1, "%llx", (unsigned long long)VAR_7.start);


 VAR_8 = VAR_6->priv;
 VAR_8->mdio_base = FUNC_5(VAR_5, 0);
 if (!VAR_8->mdio_base) {
  VAR_9 = -VAR_0;
  goto err_ioremap;
 }

 VAR_8->is_little_endian = FUNC_7(VAR_4->dev.of_node,
             "little-endian");

 VAR_9 = FUNC_6(VAR_6, VAR_5);
 if (VAR_9) {
  FUNC_0(&VAR_4->dev, "cannot register MDIO bus\n");
  goto err_registration;
 }

 FUNC_8(VAR_4, VAR_6);

 return 0;

err_registration:
 FUNC_1(VAR_8->mdio_base);

err_ioremap:
 FUNC_3(VAR_6);

 return VAR_9;
}
