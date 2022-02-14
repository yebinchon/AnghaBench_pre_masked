
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_dev*,char*,int,int ,int ) ;
 int FUNC_2 (struct pci_dev*,int,int *) ;
 int FUNC_3 (struct pci_dev*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0, int VAR_1,
         u32 VAR_2, int VAR_3, bool VAR_4)
{
 u32 VAR_5;

 FUNC_2(VAR_0, VAR_1, &VAR_5);
 if (!VAR_4 && VAR_5 == VAR_2)
  return;

 for (;;) {
  FUNC_1(VAR_0, "restoring config space at offset %#x (was %#x, writing %#x)\n",
   VAR_1, VAR_5, VAR_2);
  FUNC_3(VAR_0, VAR_1, VAR_2);
  if (VAR_3-- <= 0)
   return;

  FUNC_2(VAR_0, VAR_1, &VAR_5);
  if (VAR_5 == VAR_2)
   return;

  FUNC_0(1);
 }
}
