
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_device {int dummy; } ;
struct controller {int hotplug_slot; } ;


 int FUNC_0 (struct controller*) ;
 struct controller* FUNC_1 (struct pcie_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct controller*) ;
 int FUNC_4 (struct controller*) ;

__attribute__((used)) static void FUNC_5(struct pcie_device *VAR_0)
{
 struct controller *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->hotplug_slot);
 FUNC_3(VAR_1);
 FUNC_0(VAR_1);
 FUNC_4(VAR_1);
}
