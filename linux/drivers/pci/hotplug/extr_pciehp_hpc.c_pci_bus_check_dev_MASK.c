
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct pci_bus*,int,int *,int ) ;
 int FUNC_4 (struct pci_bus*) ;
 int FUNC_5 (char*,int ,int ,int ,int ,int,int,int ) ;

__attribute__((used)) static bool FUNC_6(struct pci_bus *VAR_0, int VAR_1)
{
 u32 VAR_2;
 int VAR_3 = 0;
 int VAR_4 = 1000, VAR_5 = 20;
 bool VAR_6 = 0;

 do {
  VAR_6 = FUNC_3(VAR_0, VAR_1, &VAR_2, 0);
  VAR_3++;

  if (VAR_6)
   break;

  FUNC_2(VAR_5);
  VAR_4 -= VAR_5;
 } while (VAR_4 > 0);

 if (VAR_3 > 1)
  FUNC_5("pci %04x:%02x:%02x.%d id reading try %d times with interval %d ms to get %08x\n",
   FUNC_4(VAR_0), VAR_0->number, FUNC_1(VAR_1),
   FUNC_0(VAR_1), VAR_3, VAR_5, VAR_2);

 return VAR_6;
}
