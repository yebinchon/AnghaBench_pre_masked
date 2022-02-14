
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_spe_pmu {int features; int handle; int irq; int hotplug_node; int supported_cpus; } ;
typedef int cpumask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int *,int ,struct arm_spe_pmu*,int) ;

__attribute__((used)) static int FUNC_4(struct arm_spe_pmu *VAR_6)
{
 int VAR_7;
 cpumask_t *VAR_8 = &VAR_6->supported_cpus;


 VAR_7 = FUNC_3(VAR_8, VAR_3, VAR_6, 1);
 if (VAR_7 || !(VAR_6->features & VAR_2))
  return -VAR_1;


 VAR_7 = FUNC_2(VAR_6->irq, VAR_4, VAR_0,
     VAR_6->handle);
 if (VAR_7)
  return VAR_7;






 VAR_7 = FUNC_0(VAR_5,
           &VAR_6->hotplug_node);
 if (VAR_7)
  FUNC_1(VAR_6->irq, VAR_6->handle);

 return VAR_7;
}
