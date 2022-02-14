
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int self; int devices; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ,unsigned long*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct pci_bus*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct pci_bus*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 struct pci_bus* FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1,
    struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5;
 struct pci_bus *VAR_6 = FUNC_7(VAR_1);

 if (FUNC_0(VAR_3, 0, &VAR_5) < 0)
  return -VAR_0;

 if (VAR_5) {
  FUNC_3();
  if (!FUNC_2(VAR_6) && FUNC_1(&VAR_6->devices))
   FUNC_5(VAR_6->self);
  else
   FUNC_4(VAR_6);
  FUNC_6();
 }
 return VAR_4;
}
