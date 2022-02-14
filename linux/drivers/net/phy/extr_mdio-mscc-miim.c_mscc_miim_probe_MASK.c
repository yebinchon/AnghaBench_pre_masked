
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mscc_miim_dev {void* phy_regs; void* regs; } ;
struct mii_bus {char* name; struct mscc_miim_dev* priv; TYPE_1__* parent; int id; int reset; int write; int read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_3 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 char* FUNC_3 (TYPE_1__*) ;
 void* FUNC_4 (TYPE_1__*,struct resource*) ;
 struct mii_bus* FUNC_5 (TYPE_1__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct mii_bus*,int ) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int) ;
 int FUNC_8 (struct platform_device*,struct mii_bus*) ;
 int FUNC_9 (int ,int ,char*,char*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_7)
{
 struct resource *VAR_8;
 struct mii_bus *VAR_9;
 struct mscc_miim_dev *VAR_10;
 int VAR_11;

 VAR_8 = FUNC_7(VAR_7, VAR_2, 0);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_5(&VAR_7->dev, sizeof(*VAR_10));
 if (!VAR_9)
  return -VAR_1;

 VAR_9->name = "mscc_miim";
 VAR_9->read = VAR_4;
 VAR_9->write = VAR_6;
 VAR_9->reset = VAR_5;
 FUNC_9(VAR_9->id, VAR_3, "%s-mii", FUNC_3(&VAR_7->dev));
 VAR_9->parent = &VAR_7->dev;

 VAR_10 = VAR_9->priv;
 VAR_10->regs = FUNC_4(&VAR_7->dev, VAR_8);
 if (FUNC_0(VAR_10->regs)) {
  FUNC_2(&VAR_7->dev, "Unable to map MIIM registers\n");
  return FUNC_1(VAR_10->regs);
 }

 VAR_8 = FUNC_7(VAR_7, VAR_2, 1);
 if (VAR_8) {
  VAR_10->phy_regs = FUNC_4(&VAR_7->dev, VAR_8);
  if (FUNC_0(VAR_10->phy_regs)) {
   FUNC_2(&VAR_7->dev, "Unable to map internal phy registers\n");
   return FUNC_1(VAR_10->phy_regs);
  }
 }

 VAR_11 = FUNC_6(VAR_9, VAR_7->dev.of_node);
 if (VAR_11 < 0) {
  FUNC_2(&VAR_7->dev, "Cannot register MDIO bus (%d)\n", VAR_11);
  return VAR_11;
 }

 FUNC_8(VAR_7, VAR_9);

 return 0;
}
