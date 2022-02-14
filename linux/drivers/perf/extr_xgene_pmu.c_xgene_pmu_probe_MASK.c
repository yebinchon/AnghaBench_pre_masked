
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xgene_pmu_data {int id; } ;
struct xgene_pmu {int version; int irq; int mcb_active_mask; int mc_active_mask; int node; TYPE_1__* ops; int lock; int pcppmu_csr; int mcpmus; int mcbpmus; int iobpmus; int l3cpmus; int * dev; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct acpi_device_id {scalar_t__ driver_data; } ;
struct TYPE_3__ {int (* unmask_int ) (struct xgene_pmu*) ;} ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 struct acpi_device_id* FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,char*,...) ;
 int FUNC_9 (int *,char*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,struct resource*) ;
 struct xgene_pmu* FUNC_13 (int *,int,int ) ;
 int FUNC_14 (int *,int,int ,int,int ,struct xgene_pmu*) ;
 struct of_device_id* FUNC_15 (int ,int *) ;
 int FUNC_16 (struct platform_device*,int ) ;
 struct resource* FUNC_17 (struct platform_device*,int ,int ) ;
 int FUNC_18 (struct platform_device*,struct xgene_pmu*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct xgene_pmu*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_1__ VAR_14 ;
 int FUNC_21 (struct xgene_pmu*,struct platform_device*) ;
 int FUNC_22 (struct xgene_pmu*,struct platform_device*) ;
 TYPE_1__ VAR_15 ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_16)
{
 const struct xgene_pmu_data *VAR_17;
 const struct of_device_id *VAR_18;
 struct xgene_pmu *VAR_19;
 struct resource *VAR_20;
 int VAR_21, VAR_22;
 int VAR_23;


 VAR_22 = FUNC_5(VAR_0,
          "CPUHP_AP_PERF_ARM_APM_XGENE_ONLINE",
          VAR_13,
          VAR_12);
 if (VAR_22)
  return VAR_22;

 VAR_19 = FUNC_13(&VAR_16->dev, sizeof(*VAR_19), VAR_4);
 if (!VAR_19)
  return -VAR_3;
 VAR_19->dev = &VAR_16->dev;
 FUNC_18(VAR_16, VAR_19);

 VAR_23 = -VAR_1;
 VAR_18 = FUNC_15(VAR_11, &VAR_16->dev);
 if (VAR_18) {
  VAR_17 = (const struct xgene_pmu_data *) VAR_18->data;
  VAR_23 = VAR_17->id;
 }
 if (VAR_23 < 0)
  return -VAR_2;

 if (VAR_23 == VAR_8)
  VAR_19->ops = &VAR_15;
 else
  VAR_19->ops = &VAR_14;

 FUNC_1(&VAR_19->l3cpmus);
 FUNC_1(&VAR_19->iobpmus);
 FUNC_1(&VAR_19->mcbpmus);
 FUNC_1(&VAR_19->mcpmus);

 VAR_19->version = VAR_23;
 FUNC_9(&VAR_16->dev, "X-Gene PMU version %d\n", VAR_19->version);

 VAR_20 = FUNC_17(VAR_16, VAR_5, 0);
 VAR_19->pcppmu_csr = FUNC_12(&VAR_16->dev, VAR_20);
 if (FUNC_2(VAR_19->pcppmu_csr)) {
  FUNC_8(&VAR_16->dev, "ioremap failed for PCP PMU resource\n");
  return FUNC_3(VAR_19->pcppmu_csr);
 }

 VAR_21 = FUNC_16(VAR_16, 0);
 if (VAR_21 < 0)
  return -VAR_1;

 VAR_22 = FUNC_14(&VAR_16->dev, VAR_21, VAR_10,
    VAR_6 | VAR_7,
    FUNC_10(&VAR_16->dev), VAR_19);
 if (VAR_22) {
  FUNC_8(&VAR_16->dev, "Could not request IRQ %d\n", VAR_21);
  return VAR_22;
 }

 VAR_19->irq = VAR_21;

 FUNC_19(&VAR_19->lock);


 VAR_22 = FUNC_21(VAR_19, VAR_16);
 if (VAR_22) {
  FUNC_11(&VAR_16->dev, "Unknown MCB/MCU active status\n");
  VAR_19->mcb_active_mask = 0x1;
  VAR_19->mc_active_mask = 0x1;
 }


 VAR_22 = FUNC_6(VAR_0,
          &VAR_19->node);
 if (VAR_22) {
  FUNC_8(&VAR_16->dev, "Error %d registering hotplug", VAR_22);
  return VAR_22;
 }


 VAR_22 = FUNC_22(VAR_19, VAR_16);
 if (VAR_22) {
  FUNC_8(&VAR_16->dev, "No PMU perf devices found!\n");
  goto out_unregister;
 }


 VAR_19->ops->unmask_int(VAR_19);

 return 0;

out_unregister:
 FUNC_7(VAR_0,
        &VAR_19->node);
 return VAR_22;
}
