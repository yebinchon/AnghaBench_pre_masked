
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int start; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct mpc52xx_fec_mdio_priv {TYPE_1__* regs; } ;
struct mii_bus {char* name; struct device* parent; struct mpc52xx_fec_mdio_priv* priv; int id; int write; int read; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int mii_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct mii_bus*) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct mpc52xx_fec_mdio_priv*) ;
 struct mpc52xx_fec_mdio_priv* FUNC_4 (int,int ) ;
 struct mii_bus* FUNC_5 () ;
 int FUNC_6 (struct mii_bus*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct device_node*,int ,struct resource*) ;
 int FUNC_9 (struct mii_bus*,struct device_node*) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (struct resource*) ;
 int FUNC_12 (int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct device_node *VAR_7 = VAR_5->dev.of_node;
 struct mii_bus *VAR_8;
 struct mpc52xx_fec_mdio_priv *VAR_9;
 struct resource VAR_10;
 int VAR_11;

 VAR_8 = FUNC_5();
 if (VAR_8 == ((void*)0))
  return -VAR_0;
 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_1);
 if (VAR_9 == ((void*)0)) {
  VAR_11 = -VAR_0;
  goto out_free;
 }

 VAR_8->name = "mpc52xx MII bus";
 VAR_8->read = VAR_3;
 VAR_8->write = VAR_4;


 VAR_11 = FUNC_8(VAR_7, 0, &VAR_10);
 if (VAR_11)
  goto out_free;
 VAR_9->regs = FUNC_1(VAR_10.start, FUNC_11(&VAR_10));
 if (VAR_9->regs == ((void*)0)) {
  VAR_11 = -VAR_0;
  goto out_free;
 }

 FUNC_12(VAR_8->id, VAR_2, "%x", VAR_10.start);
 VAR_8->priv = VAR_9;

 VAR_8->parent = VAR_6;
 FUNC_0(VAR_6, VAR_8);


 FUNC_10(&VAR_9->regs->mii_speed,
  ((FUNC_7(VAR_5->dev.of_node) >> 20) / 5) << 1);

 VAR_11 = FUNC_9(VAR_8, VAR_7);
 if (VAR_11)
  goto out_unmap;

 return 0;

 out_unmap:
 FUNC_2(VAR_9->regs);
 out_free:
 FUNC_3(VAR_9);
 FUNC_6(VAR_8);

 return VAR_11;
}
