
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int en; } ;
union cvmx_smix_en {scalar_t__ u64; TYPE_1__ s; } ;
typedef scalar_t__ u64 ;
struct resource {int name; int start; } ;
struct TYPE_8__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct mii_bus {int write; int read; TYPE_2__* parent; int id; int name; struct cavium_mdiobus* priv; } ;
struct cavium_mdiobus {scalar_t__ register_base; struct mii_bus* mii_bus; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int ) ;
 struct mii_bus* FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_5 (struct mii_bus*) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (struct mii_bus*,int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct cavium_mdiobus*) ;
 int FUNC_10 (struct resource*) ;
 int FUNC_11 (int ,int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_9)
{
 struct cavium_mdiobus *VAR_10;
 struct mii_bus *VAR_11;
 struct resource *VAR_12;
 resource_size_t VAR_13;
 resource_size_t VAR_14;
 union cvmx_smix_en VAR_15;
 int VAR_16 = -VAR_0;

 VAR_11 = FUNC_3(&VAR_9->dev, sizeof(*VAR_10));
 if (!VAR_11)
  return -VAR_1;

 VAR_12 = FUNC_8(VAR_9, VAR_3, 0);
 if (VAR_12 == ((void*)0)) {
  FUNC_0(&VAR_9->dev, "found no memory resource\n");
  return -VAR_2;
 }

 VAR_10 = VAR_11->priv;
 VAR_10->mii_bus = VAR_11;
 VAR_13 = VAR_12->start;
 VAR_14 = FUNC_10(VAR_12);

 if (!FUNC_4(&VAR_9->dev, VAR_13, VAR_14,
         VAR_12->name)) {
  FUNC_0(&VAR_9->dev, "request_mem_region failed\n");
  return -VAR_2;
 }

 VAR_10->register_base =
  (u64)FUNC_2(&VAR_9->dev, VAR_13, VAR_14);
 if (!VAR_10->register_base) {
  FUNC_0(&VAR_9->dev, "dev_ioremap failed\n");
  return -VAR_1;
 }

 VAR_15.u64 = 0;
 VAR_15.s.en = 1;
 FUNC_6(VAR_15.u64, VAR_10->register_base + VAR_6);

 VAR_10->mii_bus->name = VAR_4;
 FUNC_11(VAR_10->mii_bus->id, VAR_5, "%llx", VAR_10->register_base);
 VAR_10->mii_bus->parent = &VAR_9->dev;

 VAR_10->mii_bus->read = VAR_7;
 VAR_10->mii_bus->write = VAR_8;

 FUNC_9(VAR_9, VAR_10);

 VAR_16 = FUNC_7(VAR_10->mii_bus, VAR_9->dev.of_node);
 if (VAR_16)
  goto fail_register;

 FUNC_1(&VAR_9->dev, "Probed\n");

 return 0;
fail_register:
 FUNC_5(VAR_10->mii_bus);
 VAR_15.u64 = 0;
 FUNC_6(VAR_15.u64, VAR_10->register_base + VAR_6);
 return VAR_16;
}
