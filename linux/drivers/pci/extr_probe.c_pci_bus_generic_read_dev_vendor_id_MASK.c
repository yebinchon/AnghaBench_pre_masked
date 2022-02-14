
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct pci_bus*,int,int ,int*) ;
 int FUNC_2 (struct pci_bus*,int,int*,int) ;

bool FUNC_3(struct pci_bus *VAR_1, int VAR_2, u32 *VAR_3,
     int VAR_4)
{
 if (FUNC_1(VAR_1, VAR_2, VAR_0, VAR_3))
  return 0;


 if (*VAR_3 == 0xffffffff || *VAR_3 == 0x00000000 ||
     *VAR_3 == 0x0000ffff || *VAR_3 == 0xffff0000)
  return 0;

 if (FUNC_0(*VAR_3))
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);

 return 1;
}
