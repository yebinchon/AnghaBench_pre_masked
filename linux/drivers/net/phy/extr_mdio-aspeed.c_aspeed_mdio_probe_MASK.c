
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int of_node; } ;
struct platform_device {char* name; TYPE_1__ dev; int id; } ;
struct mii_bus {int write; int read; TYPE_1__* parent; int id; int name; struct aspeed_mdio* priv; } ;
struct aspeed_mdio {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct mii_bus* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (struct platform_device*,int ) ;
 int FUNC_5 (struct mii_bus*,int ) ;
 int FUNC_6 (struct platform_device*,struct mii_bus*) ;
 int FUNC_7 (int ,int ,char*,char*,int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct aspeed_mdio *VAR_6;
 struct mii_bus *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(&VAR_5->dev, sizeof(*VAR_6));
 if (!VAR_7)
  return -VAR_1;

 VAR_6 = VAR_7->priv;
 VAR_6->base = FUNC_4(VAR_5, 0);
 if (FUNC_0(VAR_6->base))
  return FUNC_1(VAR_6->base);

 VAR_7->name = VAR_0;
 FUNC_7(VAR_7->id, VAR_2, "%s%d", VAR_5->name, VAR_5->id);
 VAR_7->parent = &VAR_5->dev;
 VAR_7->read = VAR_3;
 VAR_7->write = VAR_4;

 VAR_8 = FUNC_5(VAR_7, VAR_5->dev.of_node);
 if (VAR_8) {
  FUNC_2(&VAR_5->dev, "Cannot register MDIO bus!\n");
  return VAR_8;
 }

 FUNC_6(VAR_5, VAR_7);

 return 0;
}
