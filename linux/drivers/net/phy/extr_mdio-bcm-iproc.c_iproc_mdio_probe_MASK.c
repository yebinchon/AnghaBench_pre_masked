
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int of_node; } ;
struct platform_device {char* name; int id; TYPE_1__ dev; } ;
struct mii_bus {char* name; int write; int read; TYPE_1__* parent; int id; struct iproc_mdio_priv* priv; } ;
struct iproc_mdio_priv {int base; struct mii_bus* mii_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 struct iproc_mdio_priv* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct mii_bus* FUNC_7 () ;
 int FUNC_8 (struct mii_bus*) ;
 int FUNC_9 (struct mii_bus*,int ) ;
 int FUNC_10 (struct platform_device*,struct iproc_mdio_priv*) ;
 int FUNC_11 (int ,int ,char*,char*,int) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_5)
{
 struct iproc_mdio_priv *VAR_6;
 struct mii_bus *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_4(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->base = FUNC_5(VAR_5, 0);
 if (FUNC_0(VAR_6->base)) {
  FUNC_2(&VAR_5->dev, "failed to ioremap register\n");
  return FUNC_1(VAR_6->base);
 }

 VAR_6->mii_bus = FUNC_7();
 if (!VAR_6->mii_bus) {
  FUNC_2(&VAR_5->dev, "MDIO bus alloc failed\n");
  return -VAR_0;
 }

 VAR_7 = VAR_6->mii_bus;
 VAR_7->priv = VAR_6;
 VAR_7->name = "iProc MDIO bus";
 FUNC_11(VAR_7->id, VAR_2, "%s-%d", VAR_5->name, VAR_5->id);
 VAR_7->parent = &VAR_5->dev;
 VAR_7->read = VAR_3;
 VAR_7->write = VAR_4;

 FUNC_6(VAR_6->base);

 VAR_8 = FUNC_9(VAR_7, VAR_5->dev.of_node);
 if (VAR_8) {
  FUNC_2(&VAR_5->dev, "MDIO bus registration failed\n");
  goto err_iproc_mdio;
 }

 FUNC_10(VAR_5, VAR_6);

 FUNC_3(&VAR_5->dev, "Broadcom iProc MDIO bus at 0x%p\n", VAR_6->base);

 return 0;

err_iproc_mdio:
 FUNC_8(VAR_7);
 return VAR_8;
}
