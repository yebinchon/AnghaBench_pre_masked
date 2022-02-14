
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xgene_msi {TYPE_1__* msi_groups; int num_cpus; int node; int msi_addr; int msi_regs; } ;
struct resource {int start; } ;
struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_5__ {int gic_irq; int msi_grp; struct xgene_msi* msi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int *,int *) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,struct resource*) ;
 int FUNC_6 () ;
 int VAR_6 ;
 int FUNC_7 (struct platform_device*,int) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct xgene_msi*) ;
 int FUNC_10 (struct xgene_msi*) ;
 struct xgene_msi VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_11 (struct xgene_msi*) ;
 scalar_t__ FUNC_12 (struct xgene_msi*,int) ;
 scalar_t__ FUNC_13 (struct xgene_msi*,int,scalar_t__) ;
 int FUNC_14 (struct platform_device*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_10)
{
 struct resource *VAR_11;
 int VAR_12, VAR_13;
 struct xgene_msi *VAR_14;
 int VAR_15;
 u32 VAR_16, VAR_17;

 VAR_14 = &VAR_7;

 FUNC_9(VAR_10, VAR_14);

 VAR_11 = FUNC_8(VAR_10, VAR_4, 0);
 VAR_14->msi_regs = FUNC_5(&VAR_10->dev, VAR_11);
 if (FUNC_0(VAR_14->msi_regs)) {
  FUNC_3(&VAR_10->dev, "no reg space\n");
  VAR_12 = FUNC_1(VAR_14->msi_regs);
  goto error;
 }
 VAR_14->msi_addr = VAR_11->start;
 VAR_14->node = VAR_10->dev.of_node;
 VAR_14->num_cpus = FUNC_6();

 VAR_12 = FUNC_11(VAR_14);
 if (VAR_12) {
  FUNC_3(&VAR_10->dev, "Error allocating MSI bitmap\n");
  goto error;
 }

 VAR_12 = FUNC_10(VAR_14);
 if (VAR_12) {
  FUNC_3(&VAR_10->dev, "Failed to allocate MSI domain\n");
  goto error;
 }

 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  VAR_15 = FUNC_7(VAR_10, VAR_13);
  if (VAR_15 < 0) {
   FUNC_3(&VAR_10->dev, "Cannot translate IRQ index %d\n",
    VAR_13);
   VAR_12 = VAR_15;
   goto error;
  }
  VAR_14->msi_groups[VAR_13].gic_irq = VAR_15;
  VAR_14->msi_groups[VAR_13].msi_grp = VAR_13;
  VAR_14->msi_groups[VAR_13].msi = VAR_14;
 }






 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  for (VAR_17 = 0; VAR_17 < VAR_3; VAR_17++)
   VAR_16 = FUNC_13(VAR_14, VAR_13,
          VAR_17);

  VAR_16 = FUNC_12(VAR_14, VAR_13);
  if (VAR_16) {
   FUNC_3(&VAR_10->dev, "Failed to clear spurious IRQ\n");
   VAR_12 = -VAR_2;
   goto error;
  }
 }

 VAR_12 = FUNC_2(VAR_0, "pci/xgene:online",
          VAR_8, ((void*)0));
 if (VAR_12 < 0)
  goto err_cpuhp;
 VAR_6 = VAR_12;
 VAR_12 = FUNC_2(VAR_1, "pci/xgene:dead", ((void*)0),
          VAR_9);
 if (VAR_12)
  goto err_cpuhp;

 FUNC_4(&VAR_10->dev, "APM X-Gene PCIe MSI driver loaded\n");

 return 0;

err_cpuhp:
 FUNC_3(&VAR_10->dev, "failed to add CPU MSI notifier\n");
error:
 FUNC_14(VAR_10);
 return VAR_12;
}
