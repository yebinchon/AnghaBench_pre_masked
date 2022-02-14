
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct l2cache_pmu {int num_pmus; int clusters; } ;
struct device {struct device* parent; } ;
struct cluster_pmu {unsigned long cluster_id; int irq; int on_cpu; int pmu_lock; struct l2cache_pmu* l2cache_pmu; int next; } ;
struct TYPE_2__ {int unique_id; } ;
struct acpi_device {TYPE_1__ pnp; } ;


 int FUNC_0 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,struct acpi_device**) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,unsigned long) ;
 struct cluster_pmu* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int,int ,int,char*,struct cluster_pmu*) ;
 int FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (int ,int,unsigned long*) ;
 int VAR_6 ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct platform_device*,int ) ;
 int FUNC_11 (int *) ;
 struct platform_device* FUNC_12 (struct device*) ;

__attribute__((used)) static int FUNC_13(struct device *VAR_7, void *VAR_8)
{
 struct platform_device *VAR_9 = FUNC_12(VAR_7->parent);
 struct platform_device *VAR_10 = FUNC_12(VAR_7);
 struct l2cache_pmu *VAR_11 = VAR_8;
 struct cluster_pmu *VAR_12;
 struct acpi_device *VAR_13;
 unsigned long VAR_14;
 int VAR_15;
 int VAR_16;

 if (FUNC_2(FUNC_0(VAR_7), &VAR_13))
  return -VAR_0;

 if (FUNC_8(VAR_13->pnp.unique_id, 10, &VAR_14) < 0) {
  FUNC_3(&VAR_9->dev, "unable to read ACPI uid\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_5(&VAR_9->dev, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 FUNC_1(&VAR_12->next);
 FUNC_9(&VAR_12->next, &VAR_11->clusters);
 VAR_12->cluster_id = VAR_14;

 VAR_16 = FUNC_10(VAR_10, 0);
 if (VAR_16 < 0)
  return VAR_16;
 FUNC_7(VAR_16, VAR_5);
 VAR_12->irq = VAR_16;

 VAR_12->l2cache_pmu = VAR_11;
 VAR_12->on_cpu = -1;

 VAR_15 = FUNC_6(&VAR_9->dev, VAR_16, VAR_6,
          VAR_3 | VAR_4,
          "l2-cache-pmu", VAR_12);
 if (VAR_15) {
  FUNC_3(&VAR_9->dev,
   "Unable to request IRQ%d for L2 PMU counters\n", VAR_16);
  return VAR_15;
 }

 FUNC_4(&VAR_9->dev,
  "Registered L2 cache PMU cluster %ld\n", VAR_14);

 FUNC_11(&VAR_12->pmu_lock);

 VAR_11->num_pmus++;

 return 0;
}
