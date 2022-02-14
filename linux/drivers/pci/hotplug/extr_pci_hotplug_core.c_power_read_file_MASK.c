
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_slot {int hotplug; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct pci_slot *VAR_0, char *VAR_1)
{
 int VAR_2;
 u8 VAR_3;

 VAR_2 = FUNC_0(VAR_0->hotplug, &VAR_3);
 if (VAR_2)
  return VAR_2;

 return FUNC_1(VAR_1, "%d\n", VAR_3);
}
