
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int dummy; } ;
struct bus_type {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ,unsigned long*) ;
 struct pci_bus* FUNC_1 (struct pci_bus*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct pci_bus*) ;
 int FUNC_4 () ;

__attribute__((used)) static ssize_t FUNC_5(struct bus_type *VAR_1, const char *VAR_2, size_t VAR_3)
{
 unsigned long VAR_4;
 struct pci_bus *VAR_5 = ((void*)0);

 if (FUNC_0(VAR_2, 0, &VAR_4) < 0)
  return -VAR_0;

 if (VAR_4) {
  FUNC_2();
  while ((VAR_5 = FUNC_1(VAR_5)) != ((void*)0))
   FUNC_3(VAR_5);
  FUNC_4();
 }
 return VAR_3;
}
