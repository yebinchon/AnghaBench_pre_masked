
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct pci_bus*,int,int ,int *) ;
 int FUNC_5 (struct pci_bus*) ;
 int FUNC_6 (char*,int ,int ,int ,int ,int) ;
 int FUNC_7 (char*,int ,int ,int ,int ,int) ;

__attribute__((used)) static bool FUNC_8(struct pci_bus *VAR_1, int VAR_2, u32 *VAR_3,
        int VAR_4)
{
 int VAR_5 = 1;

 if (!FUNC_3(*VAR_3))
  return 1;

 if (!VAR_4)
  return 0;






 while (FUNC_3(*VAR_3)) {
  if (VAR_5 > VAR_4) {
   FUNC_7("pci %04x:%02x:%02x.%d: not ready after %dms; giving up\n",
    FUNC_5(VAR_1), VAR_1->number,
    FUNC_1(VAR_2), FUNC_0(VAR_2), VAR_5 - 1);

   return 0;
  }
  if (VAR_5 >= 1000)
   FUNC_6("pci %04x:%02x:%02x.%d: not ready after %dms; waiting\n",
    FUNC_5(VAR_1), VAR_1->number,
    FUNC_1(VAR_2), FUNC_0(VAR_2), VAR_5 - 1);

  FUNC_2(VAR_5);
  VAR_5 *= 2;

  if (FUNC_4(VAR_1, VAR_2, VAR_0, VAR_3))
   return 0;
 }

 if (VAR_5 >= 1000)
  FUNC_6("pci %04x:%02x:%02x.%d: ready after %dms\n",
   FUNC_5(VAR_1), VAR_1->number,
   FUNC_1(VAR_2), FUNC_0(VAR_2), VAR_5 - 1);

 return 1;
}
