
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_spe_pmu {int handle; int irq; int hotplug_node; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct arm_spe_pmu *VAR_1)
{
 FUNC_0(VAR_0, &VAR_1->hotplug_node);
 FUNC_1(VAR_1->irq, VAR_1->handle);
}
