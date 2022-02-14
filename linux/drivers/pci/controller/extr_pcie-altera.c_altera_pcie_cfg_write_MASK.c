
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; struct altera_pcie* sysdata; } ;
struct altera_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct altera_pcie*,int ,unsigned int,int,int,int ) ;
 scalar_t__ FUNC_2 (struct pci_bus*,unsigned int,int) ;
 int FUNC_3 (struct altera_pcie*,struct pci_bus*,int ) ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_2, unsigned int VAR_3,
     int VAR_4, int VAR_5, u32 VAR_6)
{
 struct altera_pcie *VAR_7 = VAR_2->sysdata;

 if (FUNC_2(VAR_2, VAR_3, VAR_4))
  return VAR_0;

 if (!FUNC_3(VAR_7, VAR_2, FUNC_0(VAR_3)))
  return VAR_1;

 return FUNC_1(VAR_7, VAR_2->number, VAR_3, VAR_4, VAR_5,
         VAR_6);
}
