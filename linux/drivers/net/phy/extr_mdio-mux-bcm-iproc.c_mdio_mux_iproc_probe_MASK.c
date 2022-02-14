
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct resource {int start; scalar_t__ end; } ;
struct TYPE_10__ {int of_node; } ;
struct platform_device {char* name; int id; TYPE_2__ dev; } ;
struct TYPE_9__ {int of_node; } ;
struct mii_bus {char* name; TYPE_1__ dev; int phy_mask; int write; int read; TYPE_2__* parent; int id; struct iproc_mdiomux_desc* priv; } ;
struct iproc_mdiomux_desc {int * core_clk; TYPE_2__* dev; struct mii_bus* mii_bus; int mux_handle; int * base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int * FUNC_7 (TYPE_2__*,int *) ;
 int * FUNC_8 (TYPE_2__*,struct resource*) ;
 struct iproc_mdiomux_desc* FUNC_9 (TYPE_2__*,int,int ) ;
 struct mii_bus* FUNC_10 (TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (TYPE_2__*,int ,int ,int *,struct iproc_mdiomux_desc*,struct mii_bus*) ;
 int FUNC_12 (struct iproc_mdiomux_desc*) ;
 int VAR_9 ;
 int FUNC_13 (struct mii_bus*) ;
 int FUNC_14 (struct mii_bus*) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct iproc_mdiomux_desc*) ;
 int FUNC_17 (int ,int ,char*,char*,int) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_10)
{
 struct iproc_mdiomux_desc *VAR_11;
 struct mii_bus *VAR_12;
 struct resource *VAR_13;
 int VAR_14;

 VAR_11 = FUNC_9(&VAR_10->dev, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;
 VAR_11->dev = &VAR_10->dev;

 VAR_13 = FUNC_15(VAR_10, VAR_4, 0);
 if (VAR_13->start & 0xfff) {



  FUNC_6(&VAR_10->dev, "fix base address in dt-blob\n");
  VAR_13->start &= ~0xfff;
  VAR_13->end = VAR_13->start + VAR_5 - 1;
 }
 VAR_11->base = FUNC_8(&VAR_10->dev, VAR_13);
 if (FUNC_1(VAR_11->base)) {
  FUNC_5(&VAR_10->dev, "failed to ioremap register\n");
  return FUNC_2(VAR_11->base);
 }

 VAR_11->mii_bus = FUNC_10(&VAR_10->dev);
 if (!VAR_11->mii_bus) {
  FUNC_5(&VAR_10->dev, "mdiomux bus alloc failed\n");
  return -VAR_2;
 }

 VAR_11->core_clk = FUNC_7(&VAR_10->dev, ((void*)0));
 if (VAR_11->core_clk == FUNC_0(-VAR_1) ||
     VAR_11->core_clk == FUNC_0(-VAR_0))
  VAR_11->core_clk = ((void*)0);
 else if (FUNC_1(VAR_11->core_clk))
  return FUNC_2(VAR_11->core_clk);

 VAR_14 = FUNC_4(VAR_11->core_clk);
 if (VAR_14) {
  FUNC_5(&VAR_10->dev, "failed to enable core clk\n");
  return VAR_14;
 }

 VAR_12 = VAR_11->mii_bus;
 VAR_12->priv = VAR_11;
 VAR_12->name = "iProc MDIO mux bus";
 FUNC_17(VAR_12->id, VAR_6, "%s-%d", VAR_10->name, VAR_10->id);
 VAR_12->parent = &VAR_10->dev;
 VAR_12->read = VAR_7;
 VAR_12->write = VAR_8;

 VAR_12->phy_mask = ~0;
 VAR_12->dev.of_node = VAR_10->dev.of_node;
 VAR_14 = FUNC_13(VAR_12);
 if (VAR_14) {
  FUNC_5(&VAR_10->dev, "mdiomux registration failed\n");
  goto out_clk;
 }

 FUNC_16(VAR_10, VAR_11);

 VAR_14 = FUNC_11(VAR_11->dev, VAR_11->dev->of_node, VAR_9,
      &VAR_11->mux_handle, VAR_11, VAR_11->mii_bus);
 if (VAR_14) {
  FUNC_6(VAR_11->dev, "mdiomux initialization failed\n");
  goto out_register;
 }

 FUNC_12(VAR_11);

 FUNC_6(VAR_11->dev, "iProc mdiomux registered\n");
 return 0;

out_register:
 FUNC_14(VAR_12);
out_clk:
 FUNC_3(VAR_11->core_clk);
 return VAR_14;
}
