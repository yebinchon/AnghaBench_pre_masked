
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmu_probe_info {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {int (* data ) (struct arm_pmu*) ;} ;
struct device_node {int dummy; } ;
struct arm_pmu {int secure_access; int supported_cpus; struct platform_device* plat_device; } ;
typedef int (* armpmu_init_fn ) (struct arm_pmu*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 struct arm_pmu* FUNC_1 () ;
 int FUNC_2 (struct arm_pmu*) ;
 int FUNC_3 (struct arm_pmu*) ;
 int FUNC_4 (struct arm_pmu*) ;
 int FUNC_5 (struct arm_pmu*) ;
 int FUNC_6 (int *) ;
 struct of_device_id* FUNC_7 (struct of_device_id const*,struct device_node*) ;
 int FUNC_8 (struct device_node*,char*) ;
 int FUNC_9 (struct arm_pmu*) ;
 int FUNC_10 (char*,struct device_node*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct arm_pmu*,struct pmu_probe_info const*) ;

int FUNC_13(struct platform_device *VAR_3,
    const struct of_device_id *VAR_4,
    const struct pmu_probe_info *VAR_5)
{
 const struct of_device_id *VAR_6;
 armpmu_init_fn VAR_7;
 struct device_node *VAR_8 = VAR_3->dev.of_node;
 struct arm_pmu *VAR_9;
 int VAR_10 = -VAR_1;

 VAR_9 = FUNC_1();
 if (!VAR_9)
  return -VAR_2;

 VAR_9->plat_device = VAR_3;

 VAR_10 = FUNC_9(VAR_9);
 if (VAR_10)
  goto out_free;

 if (VAR_8 && (VAR_6 = FUNC_7(VAR_4, VAR_3->dev.of_node))) {
  VAR_7 = VAR_6->data;

  VAR_9->secure_access = FUNC_8(VAR_3->dev.of_node,
          "secure-reg-access");


  if (FUNC_0(VAR_0) && VAR_9->secure_access) {
   FUNC_11("ignoring \"secure-reg-access\" property for arm64\n");
   VAR_9->secure_access = 0;
  }

  VAR_10 = VAR_7(VAR_9);
 } else if (VAR_5) {
  FUNC_6(&VAR_9->supported_cpus);
  VAR_10 = FUNC_12(VAR_9, VAR_5);
 }

 if (VAR_10) {
  FUNC_10("%pOF: failed to probe PMU!\n", VAR_8);
  goto out_free;
 }

 VAR_10 = FUNC_5(VAR_9);
 if (VAR_10)
  goto out_free_irqs;

 VAR_10 = FUNC_4(VAR_9);
 if (VAR_10)
  goto out_free;

 return 0;

out_free_irqs:
 FUNC_3(VAR_9);
out_free:
 FUNC_10("%pOF: failed to register PMU devices!\n", VAR_8);
 FUNC_2(VAR_9);
 return VAR_10;
}
